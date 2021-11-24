#pragma once
#include "DrinkOrder.hpp"

class CoffeeOrder : public DrinkOrder
{
public:
    CoffeeOrder(Customer *client, bool isHot, int orderId);
    void prepareDrink();
};