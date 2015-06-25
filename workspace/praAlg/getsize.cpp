/*
 * getsize.cpp
 *
 *  Created on: 2015年6月19日
 *      Author: yuewang
 */



#include <iostream>
#include <math.h>
using namespace std;


/*
 * ^ xor
 * pow is 求幂次方
 *
 */

int main()
{

	int size= sizeof(int);
	cout<<" get size of type int:"<<size<<endl;
	cout<<"get size of char:"<<sizeof(char)<<endl;
	int index=0;
	for(int j=0; j<size*8;j++)
	{
		cout<<"j="<<j<<endl;

		index += pow(2,j);
		cout<<"index="<<index<<endl;
		cout<<"size&j="<<(size&j)<<endl;
		cout<<" the number of "<<(j+1)<<" value:"<<((size&index)>>j)<<endl;
		cout<<" the number of "<<(j+1)<<" value:"<<((size>>j)&1)<<endl;


	}

	//求异或的方式
	cout<<"xor value of size ^ 0: "<<(size^251)<<endl;

}

/*
 *    000100
 */
