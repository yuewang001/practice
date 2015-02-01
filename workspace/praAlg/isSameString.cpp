/*
 * isSameString.cpp
 *
 *  Created on: 2015年1月30日
 *      Author: yuewang
 */
#include <iostream>
using namespace std;

bool  isSameString(char* str1 , char* str2);
int main(int argc, char *argv[])
{
     char x[10]="abcdABCDE";
     char y[10]="abcdEDCB";
     cout<<"x="<<x<<endl;
     cout<<"y="<<y<<endl;
     bool value = isSameString(x,y);
     if(value)
    	 cout<<"调整顺序，可变为相同的"<<endl;
     else
    	 cout<<"调整顺序，不可变为相同的"<<endl;

     char a[10]="abcad";
     char b[10]="abccd";
     cout<<"a="<<a<<endl;
     cout<<"b="<<b<<endl;
      value = isSameString(a,a);
     if(value)
    	 cout<<"调整顺序，可变为相同的"<<endl;
     else
    	 cout<<"调整顺序，不可变为相同的"<<endl;
}

bool  isSameString(char* str1 , char* str2)
{
      //if they are all null, return true;
	// if (!str1 && !str2) return true;
	 if(!str1 || ! str2) return false;

	 int number[256];

     for(int i=0; i<256; i++)
     {
    	 number[i] =0;
     }

	 char* pos1 = str1;
	 char* pos2 = str2;

	 while(*pos1 && *pos2)
	 {
		 //cout<<*pos1<<endl;
		 //cout<<*pos2<<endl;
		( number[*pos1])++;
		( number[*pos2])--;
		 pos1++;
		 pos2++;
	 }
	 if(  *pos1 ||  *pos2) return false;

     for(int i=0; i<256; i++)
     {
	 //cout<<"i="<<i<<endl;
	 //cout<<"number[i]="<<number[i]<<endl;
    	 if(number[i] != 0 ) return false;
     }
     return true;
}

void printNum(char* num)
{
	for(int i =0 ; i<256; i++)
		cout<<i<<"---"<<endl;
}




