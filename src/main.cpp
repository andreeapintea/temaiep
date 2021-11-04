#include "LatteOrder.hpp"
#include "CoffeeOrder.hpp"

int main()
{
    CoffeeOrder order1("Andreea", true, 8372);
    order1.order();
    LatteOrder order2("Daniela", false, 937);
    order2.order();
    //CoffeeOrder order4 = order1;
    //CoffeeOrder order3(order1);
    return 0;
}