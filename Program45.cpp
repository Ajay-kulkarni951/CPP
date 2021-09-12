// Calculate word count
//Input : ___Abc___pqr___A__AB__
//Output : 4
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

	int WordCount()
	{
		int iCnt = 0;
		char *ptr = str;
		
		while(*ptr != '\0')
		{
			if(*ptr == ' ')
			{
				while((*ptr == ' ') && (*ptr != '\0'))
				{
					ptr++;
				}
			}
			else
			{
				iCnt++;
				while((*ptr != ' ') && (*ptr != '\0'))
				{
					ptr++;
				}
			}
		}
		return iCnt;
	}
};

int main()
{
	int ret = 0;

	StringX obj;

	obj.Accept();

	ret = obj.WordCount();
	cout<<"Word Count is : "<<ret<<"\n";
	return 0;
}