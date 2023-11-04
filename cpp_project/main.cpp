#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <stdlib.h>
#include <algorithm>
#include <cstring>
#include <queue>
#include <stack>
#include "PrintName.h"
#include "PrintName.cpp"
using namespace std;
// 分支里的main文件
int main()
{
	string s="2021152028||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
    PrintName p(s);
	p.printFun();
	system("pause");
	return 0;
}
