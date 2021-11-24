#include "Customer.hpp"

Customer::Customer(std::string name, int age) : name_(name), age_(age)
{
}

Customer::Customer(const Customer& customer)
{
    name_ = customer.name_;
    age_ = customer.age_;
}

std::string Customer::getName()
{
    return name_;
}