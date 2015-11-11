/*
 * Reverselink.h
 *
 *  Created on: 2015Äê11ÔÂ10ÈÕ
 *      Author: yuewang
 */

#ifndef REVERSELINK_H_
#define REVERSELINK_H_

#include <stddef.h>

class Reverse_link {
public:
	int data;
	Reverse_link* next;
	Reverse_link();
	Reverse_link(int n):data(n){
		next=NULL;
	};
	virtual ~Reverse_link();
	int getdata(){
		return data;
	};
};


typedef Reverse_link Mynode;
#endif /* REVERSELINK_H_ */
