#pragma once
#include "DrinkOrder.hpp"

class LatteOrder : public DrinkOrder
{
public:
    LatteOrder(std::string client, bool isHot, int orderId);
    void prepareDrink();
};