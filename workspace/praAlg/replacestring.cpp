/*
 * replacestring.cpp
 *
 *  Created on: 2015年2月1日
 *      Author: yuewang
 */
/*
 * replacestr.cpp
 *
 *  Created on: 2015年1月30日
 *      Author: yuewang
 *      假设 string的长度已知，而且string尾部有足够的空间存放新的
 *     字符窜
 */
#include <iostream>
using namespace std;

void replacestr(char* str, char* str2);
int main(int argc, char *argv[])
{
     char x[100]="ab cd AB CD E ";
     char y[5000];
     cout<<"原来 x 为:"<<x<<endl;
     replacestr(x,y);
     cout<<"现在为 ："<<y<<endl;

}

void  replacestr(char* str,char* str2){
     if (!str)  return  ;
     char* ptr = str;
     int num=0;
     int length=0;
     while(*ptr)
     {
    	 if((*ptr) == ' ')  num++;
    	 ptr++;;
    	 length++;
     }
     cout<<"num="<<num<<endl;
     cout<<"length="<<length<<endl;

     int  newlength= length+2*num;
     char* newptr=ptr+2*num-1-str+str2;
     ptr--;

    while(ptr>=str)
     {
    	 if((*ptr) != ' ')
    	 {
    		 *newptr=*ptr;
    		 newptr--;
    		 ptr--;
    	 }
    	 else
    	 {
    		 *newptr='0';
    		 *(newptr-1)='2';
    		 *(newptr-2)='%';
    		 newptr=newptr-3;
    		 ptr--;
    	 }
    	 cout<<"new string:"<<str2<<endl;
    	 cout<<"old string:"<<str<<endl;
     }

}




