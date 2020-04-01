#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>

class bread
{
public:
    std::string name;// name = ชื่อหนมปัง    
    int  stock, day, sold , cost;
    int amount(int, int);
};


