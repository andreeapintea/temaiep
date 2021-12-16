#include "Table.hpp"

Table::Table(int seatNumber):seatNumber_(seatNumber), isFree_(true)
{

}

void Table::setIsFree(bool isFree)
{
    isFree_ = isFree;
}

bool Table::askToSit()
{
    return isFree_;
}