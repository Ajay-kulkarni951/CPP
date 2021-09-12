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

	int StrlenX()
	{
		int iCnt = 0;
		char *ptr = str;
		while(*ptr != '\0')
		{
			ptr++;
			iCnt++;
		}
		return iCnt++;
	}

};

int main()
{
	int ret = 0;

	StringX obj;

	obj.Accept();

	ret = obj.StrlenX();

	cout<<"String Length is : "<<ret<<"\n";

	return 0;
}