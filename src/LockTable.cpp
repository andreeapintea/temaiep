#include <mutex>
#include "LockTable.hpp"

void lock(Table &table)
{
    table.setIsFree(false);
    std::cout<<"Table is locked. Someone is probably sitting at it..."<<std::endl;
}

void unlock(Table &table)
{
    table.setIsFree(true);
    std::cout<<"The table is now free, go sit!"<<std::endl;
}

LockTable::LockTable(Table &table) : lockedTable_(table)
{
    lock(lockedTable_);
}

LockTable::~LockTable()
{
    unlock(lockedTable_);
}