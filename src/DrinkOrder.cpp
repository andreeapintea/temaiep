#include "DrinkOrder.hpp"

DrinkOrder::DrinkOrder(Customer *client, bool isHot, int orderId) : client_(client), isHot_(isHot), orderId_(orderId)
{} 

void DrinkOrder::startPreparing()
{
    std::cout<<"\nHello "<<client_->getName()<<" your order will be ready soon!\n";
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

DrinkOrder::DrinkOrder(const DrinkOrder& drinkOrder)
{
    client_ = new Customer(*drinkOrder.client_);
    isHot_ = drinkOrder.isHot_;
    orderId_ = drinkOrder.orderId_;

}

DrinkOrder& DrinkOrder::operator=(const DrinkOrder& rhs)
{
    if (this == &rhs)
       return *this;
    Customer *originalCustomer = client_;
    client_ = new Customer(*rhs.client_);
    delete originalCustomer;
    isHot_=rhs.isHot_;
    orderId_=rhs.orderId_;

    return *this;
}

int DrinkOrder::getOrderId()
{
    return orderId_;
}