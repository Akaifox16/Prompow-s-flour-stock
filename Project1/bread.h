#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>

class bread
{
public:
    std::string name;// name = ����˹��ѧ    
    unsigned int stock, day, sold;
    double cost;
    double amount(int, double);
};


