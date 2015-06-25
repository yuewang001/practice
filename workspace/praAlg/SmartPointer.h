/*
 * SmartPointer.h
 *
 *  Created on: 2015Äê6ÔÂ25ÈÕ
 *      Author: yuewang
 */

#ifndef SMARTPOINTER_H_
#define SMARTPOINTER_H_

template <typename T>
class SmartPointer {
public:
	SmartPointer(T* ptr);
	SmartPointer(SmartPointer<T> &sptr);
	virtual ~SmartPointer();
    SmartPointer<T>& operator=(SmartPointer<T> sptr);
protected:
	T*  ref;
	int ref_count;

};

#endif /* SMARTPOINTER_H_ */
