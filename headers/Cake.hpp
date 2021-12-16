#pragma once
#include <iostream>

class Cake
{
    std::string flavour_;

public:
    Cake(std::string flavour);
    std::string getFlavour();
};