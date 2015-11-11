/*
 * Reverselink.cpp
 *
 *  Created on: 2015Äê11ÔÂ10ÈÕ
 *      Author: yuewang
 */

#include "Reverselink.h"
#include <iostream>
using namespace std;

Reverse_link::Reverse_link() {
	// TODO Auto-generated constructor stub

}

Reverse_link::~Reverse_link() {
	// TODO Auto-generated destructor stub
}



Reverse_link* reserver(Reverse_link* p)
{
	if(p==NULL || p->next == NULL)
	{
		return p ;
	}

	Reverse_link* p1=p->next;
	Reverse_link* p2=p1->next;

	p->next=NULL;

	while(p2 != NULL)
	{
	   p1->next=p;

	   p=p1;
	   p1=p2;
	   p2=p2->next;

	}

	p1->next=p;
	p=p1;

	return p;




}

void showdata(Reverse_link* p)
{
	cout<<" print data in link"<<endl;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
}
int main()
{
	 cout<<"test reverse link"<<endl;
	 cout<<" create a link"<<endl;
	 int i=0;
	 Reverse_link* p1=NULL;
	 Reverse_link* head=NULL;
	 for(; i<10; i++){
		 Reverse_link* p = new Reverse_link(i);

		 if(p1 == NULL)
		 {
			 head = p;
			 p1=p;

		 }
		 else
		 {
		     p1->next=p;
		     p1=p;
		 }
	 }
	 showdata(head);
	 cout<<"after reverse"<<endl;
	 showdata(reserver(head));


}
