#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>
using namespace std;

class FileX
{
public:
	int fd;

	FileX(char Name[])
	{
		fd = open(Name,O_RDONLY);
		if(fd == -1)
		{
			cout<<"Unable to open file\n";
			exit(0);
		}
		else
		{
			cout<<"File successfully opened..\n";
		}
	}
	~FileX()
	{
		close(fd);
	}
	void ReadData(int size)
	{
		int ret = 0;
		char *Arr = new char[size];
		ret = read(fd,Arr,size);
		cout<<ret<<"\n";
		write(1,Arr,ret);
		delete []Arr;
	}
};

int main()
{
	int no;
	char str[30];

	cout<<"Enter file name\n";
	cin>>str;

	FileX obj(str);

	cout<<"Enter number of characters you want to read.\n";
	cin>>no;

	obj.ReadData(no);

	return 0;
}