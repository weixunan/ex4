#include "PrintName.h"
#include <iostream>
using namespace std;
PrintName::PrintName(){}
PrintName::PrintName(string name)
{
    namestr=name;
}
void PrintName::printFun()
{
    cout<<namestr<<endl;
}