/*
 * getsize.cpp
 *
 *  Created on: 2015��6��19��
 *      Author: yuewang
 */



#include <iostream>
#include <math.h>
using namespace std;


/*
 * ^ xor
 * pow is ���ݴη�
 *
 */

int main()
{

	int size= sizeof(int);
	cout<<" get size of type int:"<<size<<endl;
	int index=0;
	for(int j=0; j<size*8;j++)
	{
		cout<<"j="<<j<<endl;

		index += pow(2,j);
		cout<<"index="<<index<<endl;
		cout<<"size&j="<<(size&j)<<endl;
		cout<<" the number of "<<(j+1)<<" value:"<<((size&index)>>j)<<endl;


	}

	//�����ķ�ʽ
	cout<<"xor value of size ^ 0: "<<(size^251)<<endl;

}

/*
 *    000100
 */
