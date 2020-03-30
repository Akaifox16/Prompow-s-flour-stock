#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

class bread
{
public:
    std::string name;// name = ชื่อหนมปัง    
    int  stock, day, sold;
    double cost;
    int amount(int, int);
};


