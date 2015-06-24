#include <iostream>

using namespace std;

int swap(int t)
{
	return (((0x555555&t)<<1) | ((t>>1)&0x555555));

}

int main()
{
	cout<<"input digit is 5(101)"<<endl;
	cout<<"after swap: "<<swap(5)<<endl;
	int x=23423;
	cout<<"input digit is "<<x<<endl;
	cout<<"after swap: "<<swap(x)<<endl;

}
