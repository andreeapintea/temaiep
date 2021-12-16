#pragma once
#include <iostream>
#include <memory>
#include "Cake.hpp"

class Customer
{
    std::string name_;
    int age_;

public:
    Customer(std::string name, int age);
    Customer(const Customer& customer);
    std::string getName();
    void eatCake(std::shared_ptr<Cake> cake);

};