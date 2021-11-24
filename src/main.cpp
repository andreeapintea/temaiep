#include "LatteOrder.hpp"
#include "CoffeeOrder.hpp"

int main()
{
    Customer c1("Andreea", 22);
    Customer c2("Daniela", 23);
    CoffeeOrder order1(&c1, true, 8372);
    order1.order();
    LatteOrder order2(&c2, false, 937, false);
    order2.order();
    //CoffeeOrder order4 = order1;
    //CoffeeOrder order3(order1);
    LatteOrder order3 = order2;
    std::cout<<"\n--------Used copy assignment operator--------\n";
    order3.order();
    order3 = order3;
    std::cout<<"\n--------Self-assignment case--------\n";
    order3.order();
    return 0;
}