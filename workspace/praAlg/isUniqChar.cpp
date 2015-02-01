
#include <iostream>
using namespace std;

bool testAllDiff(string a){

	if(a.length()>256) 
		return true;

	bool issame[256];
	for(int i=0;i<256;i++)
	{
		issame[i]=false;
	}

	for(int i=0; i<a.length();i++)
	{
		cout<<a.at(i)<<endl;
		if( issame[a.at(i)] )
			return false;
		issame[a.at(i)]=true;
	}
	cout<<a<<endl;

	return true;
}

int main(int argc, char *argv[])
{

	string a="abcdefgc";
	if(testAllDiff(a))
	{
		cout<<"没有重复的"<<endl;
	}
	else
	{
		cout<<"有重复的"<<endl;
	}
}

