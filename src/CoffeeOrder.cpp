#include "CoffeeOrder.hpp"

CoffeeOrder::CoffeeOrder(std::string client, bool isHot, int orderId) : DrinkOrder(client, isHot, orderId)
{}

void CoffeeOrder::prepareDrink()
{
    std::cout<<"\nWe are preparing your coffee!\n";
}