/*
 * findstr.cpp
 *
 *  Created on: 2015Äê6ÔÂ25ÈÕ
 *      Author: yuewang
 */


/*
 * this funciton is to search whether a str A contains str B
 *
 *
 */

//the rude function, return false, if str1 is not sub string of str2, or true if str1 in str2
#include <iostream>
using namespace std;
bool findstr(char* str1, char* str2)
{
	if(str1==NULL || str2==NULL)
	{
		cout<<"input str is NULL"<<endl;
		return false;
	}
	if(str1==str2)
	{
		cout<<"str1 = str2"<<endl;
		return true;
	}

	char* begin=str2;
	char* index1=str1;
	char* index2=str2;
	bool find=false;
    while(*index1 != '\0' && *index2 != '\0')
	{
		index2=begin;
		while(*index1 != '\0' && *index2 != '\0' && *index1 == *index2 )
		{
			index1++;
			index2++;
		}

		if(*index1 == '\0')
		{
			find=true;
			return find;
		}
		begin++;
		index1=str1;
		index2=begin;
	}
    return false;

}

int main()
{

	char* str1="I am a Chinese person";
	char* str2="Chinese";
	bool find=findstr(str2, str1);
	cout<<"bool value:"<<find<<endl;
	char* str3="NO";
	char* str4=NULL;
	cout<<"bool value:"<<findstr(str3,str1)<<endl;
	cout<<"bool value:"<<findstr(str4,str1)<<endl;
	cout<<"bool value:"<<findstr(str1,str1)<<endl;
}
