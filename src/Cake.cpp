#include "Cake.hpp"

Cake::Cake(std::string flavour) : flavour_(flavour)
{ 
}
std::string Cake::getFlavour()
{
    return flavour_;
}