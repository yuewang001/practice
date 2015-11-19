/*
 * Triangle.cpp
 *
 *  Created on: 2015Äê11ÔÂ9ÈÕ
 *      Author: yuewang
 */

#include "Triangle.h"
#include <iostream>
using namespace std;
/*

Triangle::Triangle() {
	// TODO Auto-generated constructor stub

}
*/

template<typename T> Triangle<T>::Triangle(int n) {
	// TODO Auto-generated constructor stub

	N=n;

    for(int i=0; i<N; i++)
    {
    	T* = new T[i+1];
    }
}



template<typename T> Triangle<T>::~Triangle() {
	// TODO Auto-generated destructor stub
/*
    for(int i=0; i<N; i++)
    {
    	delete *(pnode+i)[];
    	    }
    pnode=null;
*/
}




template<typename T> T* Triangle<T>::operator[](int aIndex)
{
    return reinterpret_cast<T *>(p[aIndex]);
}


int main()
{
   cout<<" this is testing of template class"<<std::endl;
   Triangle<int>  D(5);
   cout<<D[3]<<endl;
   cout<<D[3][2]<<endl;
}


