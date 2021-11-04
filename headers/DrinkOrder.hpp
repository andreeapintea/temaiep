#pragma once
#include <iostream>
#include <chrono>
#include <thread>

class DrinkOrder
{
protected:
    std::string client_;
    bool isHot_;
    int orderId_;
    void startPreparing();
    void finishOrder();
    virtual void prepareDrink() = 0;

public:
    DrinkOrder(std::string client, bool isHot, int orderId);
    void order();
    DrinkOrder(const DrinkOrder&) = delete;
    DrinkOrder& operator=(const DrinkOrder&) = delete;
};