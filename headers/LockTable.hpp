#pragma once
#include <iostream>
#include "Table.hpp"

class LockTable
{
    Table &lockedTable_;

public:
    LockTable(const LockTable&) = delete;
    LockTable& operator=(const LockTable&) = delete;
    LockTable(Table &table);
    ~LockTable();

};