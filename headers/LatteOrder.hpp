#pragma once
#include "DrinkOrder.hpp"

class LatteOrder : public DrinkOrder
{
    bool hasChocolate_;
public:
    LatteOrder(Customer *client, bool isHot, int orderId, bool hasChocolate);
    void prepareDrink();
    LatteOrder& operator=(const LatteOrder& rhs);
    LatteOrder(const LatteOrder& latteOrder);
};