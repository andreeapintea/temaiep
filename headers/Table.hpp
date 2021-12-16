#pragma once
#include <iostream>

class Table
{
    int seatNumber_;
    bool isFree_;

public:
    Table(int seatNumber);
    void setIsFree(bool isFree);
    bool askToSit();
};