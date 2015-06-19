/*
 * LimitInstance.cpp
 *
 *  Created on: 2015Äê6ÔÂ8ÈÕ
 *      Author: yuewang
 */

#include "LimitInstance.h"
#include <iostream>
using namespace std;


LimitInstance::LimitInstance() {
	// TODO Auto-generated constructor stub


}

LimitInstance::~LimitInstance() {
	// TODO Auto-generated destructor stub
}

LimitInstance* LimitInstance::getInstance(){
	if(!_instance)
	{
		_instance = new LimitInstance;
	}
	return _instance;

}

void LimitInstance::printSomething()
{
	cout<<"this is printed from by instance"<<endl;
}

int main()
{

	 cout<<"begin to create an instance of a Class"<<endl;
	 LimitInstance* single1= LimitInstance::getInstance();
	 single1->printSomething();

}
