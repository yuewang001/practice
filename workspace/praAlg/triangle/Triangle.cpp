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
	/*
	N=n;
    T*  p[N];
    for(int i=0; i<N; i++)
    {
    	p[i]= new T[i+1];
    }
    pnode=p;
    */
	N=n;
	pnode = new T[N*N];

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


template<typename T> T Triangle<T>::operator [](int y)
{

	if(x>=N || x<0)
		return 0;


    if(pnode == 0)
    	return 0;

	return  pnode[N*x];


}

template<typename T> T* Triangle<T>::operator [](int x)
{

	if(x>=N || x<0)
		return 0;


    if(pnode == 0)
    	return 0;

	return  pnode[N*x];


}

int main()
{
   cout<<" this is testing of template class"<<std::endl;
   Triangle<int>  D(5);
   cout<<D[3]<<endl;
   cout<<D[3][2]<<endl;
}


