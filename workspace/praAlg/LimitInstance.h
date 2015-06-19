/*
 * LimitInstance.h
 *
 *  Created on: 2015Äê6ÔÂ8ÈÕ
 *      Author: yuewang
 */

#ifndef LIMITINSTANCE_H_
#define LIMITINSTANCE_H_


//this class will limit the number of implemented instance
//version1:  single instance

class LimitInstance {
public:
	virtual ~LimitInstance();
	static LimitInstance*  _instance;
	static LimitInstance* getInstance();
	void printSomething();

private:
	LimitInstance();

};

#endif /* LIMITINSTANCE_H_ */
