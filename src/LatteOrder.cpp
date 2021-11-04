#include "LatteOrder.hpp"

LatteOrder::LatteOrder(std::string client, bool isHot, int orderId) : DrinkOrder(client, isHot, orderId)
{}

void LatteOrder::prepareDrink()
{
    std::cout<<"\nWe are preparing your latte!\n";
}