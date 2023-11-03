#ifndef PRINT_NAME
#define PRINT_NAME
#include <iostream>
#include <string>
using namespace std;
class PrintName
{
private:
    string namestr;
public:
    PrintName();
    PrintName(string name);
    void printFun();
};

#endif