#include "LatteOrder.hpp"
#include "CoffeeOrder.hpp"
#include "LockTable.hpp"

void waitForTable(Table *table)
{
    LockTable *tableLock = new LockTable(*table);
    std::cout<<"Table is free: "<<table->askToSit()<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    delete tableLock;
}

int main()
{
    Customer c1("Andreea", 22);
    Customer c2("Daniela", 23);
    /*CoffeeOrder order1(&c1, true, 8372);
    order1.order();
    LatteOrder order2(&c2, false, 937, false);
    order2.order();
    CoffeeOrder order4 = order1;
    CoffeeOrder order3(order1);
    LatteOrder order3 = order2;
    std::cout<<"\n--------Used copy assignment operator--------\n";
    order3.order();
    order3 = order3;
    std::cout<<"\n--------Self-assignment case--------\n";
    order3.order();
    LatteOrder order5 = order3 = order2;
    std::cout<<"\n----------------\n";
    order3.order();*/
    std::unique_ptr<CoffeeOrder> order1 = std::make_unique<CoffeeOrder>(&c1, true, 8372);
    std::cout << "Order id is: "<<order1->getOrderId()<<std::endl;
    //std::unique_ptr<CoffeeOrder> order2 = order1; eroare
    //daca vrem sa mutam dintr-o variabila in alta trebuie sa facem cu move
    std::unique_ptr<CoffeeOrder> order2 = std::move(order1); //mutam din order 2 in order1
    //std::cout << "Order id is: "<<order1->getOrderId()<<std::endl; //segmentation fault
    std::cout << "Order id is: "<<order2->getOrderId()<<std::endl;
    order2.release();
    //std::cout << "Order id is: "<<order2->getOrderId()<<std::endl; //segmentation fault, nu mai avem ownership, am eliberat resursele
    std::shared_ptr<Cake> cake = std::make_shared<Cake>("vanilla");
    std::shared_ptr<Cake> cakeForAndreea = cake; //now now there are two owners of the cake
    c1.eatCake(cakeForAndreea);
    std::cout<<"Count after Andreea gets her cake: "<<cake.use_count()<<std::endl;
    auto cakeForDaniela = cake;
    c2.eatCake(cakeForDaniela);
    std::cout<<"Count after Daniela gets her cake:: "<<cake.use_count()<<std::endl;
    cake.reset(); //released ownership, now only cakeforAndreea and cakeForDaniela own the cake
    std::cout<<"Count after cake variable was reset: "<<cakeForAndreea.use_count()<<std::endl;
    std::cout<<"Now only Andreea and Daniela own the cake"<<std::endl;
    Table *occupiedTable = new Table(5);
    waitForTable(occupiedTable); 
    std::cout<<"Table is free: "<<occupiedTable->askToSit()<<std::endl;
    return 0;
}