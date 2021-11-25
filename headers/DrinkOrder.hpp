#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include "Customer.hpp"

class DrinkOrder
{
protected:
    Customer *client_;
    bool isHot_;
    int orderId_;
    void startPreparing();
    void finishOrder();
    virtual void prepareDrink() = 0;

public:
    DrinkOrder(Customer *client, bool isHot, int orderId);
    void order();
    //DrinkOrder(const DrinkOrder&) = delete;
    //DrinkOrder& operator=(const DrinkOrder&) = delete;
    DrinkOrder& operator=(const DrinkOrder& rhs);
    DrinkOrder(const DrinkOrder& drinkOrder);
};