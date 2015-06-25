/*
 * SmartPointer.cpp
 *
 *  Created on: 2015Äê6ÔÂ25ÈÕ
 *      Author: yuewang
 */

#include "SmartPointer.h"
#include <iostream>


template <typename T> SmartPointer<T>::SmartPointer(T* ptr) {
	// TODO Auto-generated constructor stub
	ref=ptr;
	ref_count=1;


}

template <typename T> SmartPointer<T>::~SmartPointer() {
	// TODO Auto-generated destructor stub
	if(ref_count==0)
	{
		delete ref;
		ref=NULL;
	}
}

//assign copy
template <typename T>  SmartPointer<T>::SmartPointer(SmartPointer<T> &sptr){
	ref=sptr.ref;
	ref_count=sptr.ref_count;
	ref_count++;

}

template <typename T> SmartPointer<T>& SmartPointer<T>:: operator=(SmartPointer<T> sptr)
{
	if(this == sptr); return this;

	ref=sptr.ref;
	ref_count=sptr.ref_count;

}
