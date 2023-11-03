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
int main()
{
	string s="2021152027韦旭南，是计算机与软件学院的一名学生";
    PrintName p(s);
	p.printFun();
	system("pause");
	return 0;
}
