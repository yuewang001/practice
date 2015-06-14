/*
 *
 * 句子反转，但单词不反转
 * 比如   it is a dog,
 * 反转后为  dog a is it
 */

#include <stdio.h>
#include <iostream>
#include <assert.h>
using namespace std;


void reverseWord(char *begin, char *end)
{
    assert(begin != NULL && end != NULL);

    char c;
    while (begin < end)
    {
        c = *begin;
        *begin = *end;
        *end = c;
        ++begin;
        --end;
    }
    return;
}

void reserseSent(char* s)
{
	if(s == NULL ) return;

	//reverse all sentence
	char* end= s;
	while(*end != '\0') end++;
	reverseWord(s, end);

	char* begin=s;
	bool isBlank = false;
	end=s;

	while(end != '\0')
	{

		if(*(end+1) != ' ')
		{
			//if current pint to null
			if(isBlank)
			{
				end++;
				begin=end;
				continue;
			}
			else
			{
				end++;
			}
		}
		else
		{
			reverseWord(begin,end);
			end++;
			begin=end;

		}

	}

}

int main()
{
	char* sent=" I should be always try my best to do anything";
	std::cout<<"orignial sentence: "<<sent<<std::endl;
	reserseSent(sent);
	count<<"resersed: "<<sent<<endl;
}
