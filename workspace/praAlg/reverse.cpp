/*
 * reverse.cpp
 *
 *  Created on: 2015年1月30日
 *      Author: yuewang
 */
#include <iostream>
using namespace std;

void reverse(char* str);
int main(int argc, char *argv[])
{
     char x[10]="abcdABCDE";
     cout<<"原来 x 为:"<<x<<endl;
     reverse(x);
     cout<<"现在为 ："<<x<<endl;
}

void reverse(char* str){
     if (!str)  return;
     char* end = str;
     while(*end)
     {
    	 end++;
     }
     end--;

     char tmp;
     while(str<end){
    	 tmp=*end;
    	 *end=*str;
    	 *str=tmp;
    	 end--;
    	 str++;
     }
}
