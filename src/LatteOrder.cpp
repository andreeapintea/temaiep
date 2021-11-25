#include "LatteOrder.hpp"

LatteOrder::LatteOrder(Customer *client, bool isHot, int orderId, bool hasChocolate) : DrinkOrder(client, isHot, orderId), hasChocolate_(hasChocolate)
{}

void LatteOrder::prepareDrink()
{
    std::cout<<"\nWe are preparing your latte!\n";
}

LatteOrder::LatteOrder(const LatteOrder& latteOrder):DrinkOrder(latteOrder)
{
    hasChocolate_ = latteOrder.hasChocolate_;
}

LatteOrder& LatteOrder::operator=(const LatteOrder& rhs)
{
    DrinkOrder::operator=(rhs);
    hasChocolate_ = rhs.hasChocolate_;
    return *this;
}