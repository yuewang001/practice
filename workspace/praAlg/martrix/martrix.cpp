/*
 * martrix.cpp
 *
 *  Created on: 2015Äê6ÔÂ17ÈÕ
 *      Author: yuewang
 */

#include "martrix.h"
using namespace std;
#include <iostream>

template <typename T>
      martrix<T>::martrix(int row, int col, T* p):_row(row),_col(col),_p(p) {
	// TODO Auto-generated constructor stub
	   _p=new T(_row*_col);

}
template <typename T>
     martrix<T>::~martrix() {
	// TODO Auto-generated destructor stub
	delete []_p;
	_p=NULL;
}



int main()
{
	cout<<"test [][] operation on matrix"<<endl;
	string* p=0;
	martrix<string> *str_martrix=new martrix<string>(10,20,p);

	//cout<<str_martrix<<endl;


}

