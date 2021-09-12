// Input : Hello
/*
H
H	e
H	e 	l
H	e 	l	l
H	e 	l	l	o
*/

#include<iostream>
using namespace std;

class StringX
{
public:
	char str[30];

	void Accept()
	{
		cout<<"Enter String\n";
		scanf("%[^'\n']s",str);
	}

	void Pattern()
	{
		int iCnt = 0;
		
		char *s = str;
		char *ptr = str;
		while(*ptr != '\0')
		{
			iCnt++;
			ptr++;
		}
		ptr = str;
		iCnt--;
		while(*ptr != '\0')
		{
			while(*(s+iCnt) != '\0')
			{
				cout<<"\t"<<*s;
				s++;
			}
			iCnt--;
			s = str;
			ptr++;
			cout<<"\n";
		}
	}

};

int main()
{
	int ret = 0;

	StringX obj;

	obj.Accept();

	obj.Pattern();

	return 0;
}