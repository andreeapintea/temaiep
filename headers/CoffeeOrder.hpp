#pragma once
#include "DrinkOrder.hpp"

class CoffeeOrder : public DrinkOrder
{
public:
    CoffeeOrder(std::string client, bool isHot, int orderId);
    void prepareDrink();
};