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
		int iCnt1 = 0, iCnt2 = 0;
		
		char *s = str;
		char *ptr = str;
		while(*ptr != '\0')
		{
			while(iCnt2 <= iCnt1)
			{
				cout<<"\t"<<*s;
				s++;
				iCnt2++;
			}
			iCnt2 = 0;
			s = str;
			ptr++;
			iCnt1++;
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