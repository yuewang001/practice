/*
 *
 * 句子反转，但单词不反转
 * 比如   it is a dog,
 * 反转后为  dog a is it
 */

#include <stdio.h>
#include <iostream>
#include <assert.h>
#include <string>
using namespace std;


void reverseWord(char *begin, char *end)
{
    assert(begin != NULL && end != NULL);

    char c;
    char* first=begin;
    char* last=end;
    while (first < last)
    {
        c = *first;
        *first = *last;
        *last = c;
        ++first;
        --last;
    }
    cout<<"after reverseWord: "<<begin<<endl;
    return;
}

void reverseSent(char* s)
{
	if(s == NULL ) return;

	//reverse all sentence
	char* end= s;
	while(*end != '\0') end++;
	end--;
	reverseWord(s, end);

	char* begin=s;
	bool isBlank = false;
	end=s;

	while( *end != '\0')
	{
		/*if current is blank
		 *     if next is blank
		 *        end++
		 *     if next is not blank
		 *        end++
		 *        blank = false
		 *if current not blank
		 *     if next is blank
		 *     then xxxxxxx
		 *
		 *     if next is not blank
		 *     end++
		 *
		 *
		 *
		 *
		 */

		if(isBlank)
		{
			if(*(end+1) == ' ')
			{
				end++;
				continue;
			}
			else
			{
				begin=end+1;
				end=begin;
				isBlank=false;

			}
		}
		else
		{
			if(*(end+1) == ' ' || *(end+1) == '\n')
			{
				reverseWord(begin,end);
				begin=end+1;
				isBlank=true;
				end=begin;
			}
			else
			{
				end++;
			}
		}



	}

}

int main()
{
	char sent[1000]="I should be always try my best to do anything";
	std::cout<<"orignial sentence: "<<sent<<std::endl;
	reverseSent(sent);
	cout<<"resersed: "<<sent<<endl;
}
