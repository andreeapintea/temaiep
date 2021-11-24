#pragma once
#include <iostream>

class Customer
{
    std::string name_;
    int age_;

public:
    Customer(std::string name, int age);
    Customer(const Customer& customer);
    std::string getName();
};