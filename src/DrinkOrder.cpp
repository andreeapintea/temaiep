#include "DrinkOrder.hpp"

DrinkOrder::DrinkOrder(std::string client, bool isHot, int orderId) : client_(client), isHot_(isHot), orderId_(orderId)
{} 

void DrinkOrder::startPreparing()
{
    std::cout<<"\nHello "<<client_<<" your order will be ready soon!\n";
}

void DrinkOrder::finishOrder()
{
    if (isHot_)
    {
        std::cout<<"\nOrder "<<orderId_<<" is ready! Enjoy your hot drink!\n";
    }
    else
    {
        std::cout<<"\nOrder "<<orderId_<<" is ready! Enjoy your cold drink!\n";
    }
}

void DrinkOrder::order()
{
    startPreparing();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    prepareDrink();
    std::this_thread::sleep_for(std::chrono::seconds(3));
    finishOrder();
    std::this_thread::sleep_for(std::chrono::seconds(1));
}