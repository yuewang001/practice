/*
 * pro1.cpp
 *
 *  Created on: 2015年1月25日
 *      Author: yuewang
 */

#include "pro1.h"
using namespace std;
#include <iostream>

class pro1;
int main(int argc, char *argv[])
{
	pro1 *a_pro1;
	string a="xsdfsdf";
	a_pro1->testAllDiff(a);
}


pro1::pro1() {
	// TODO Auto-generated constructor stub
	a="123456";

}

pro1::~pro1() {
	// TODO Auto-generated destructor stub
}

bool testAllDiff(string a)
{
	std::cout<<a;
	return false;
}

