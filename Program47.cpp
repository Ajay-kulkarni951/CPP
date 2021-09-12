#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>
using namespace std;

//O_RDONLY    read only
//O_WRONLY    write only
//O_RDWR      read and write
//O_CREAT     create

class FileX
{
public:
	int fd;

	FileX(char Name[])
	{
		fd = open(Name,O_WRONLY | O_CREAT);
		if(fd == -1)
		{
			cout<<"Unable to open file\n";
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
};

int main()
{
	char str[30];
	cout<<"Enter file name\n";
	cin>>str;
	FileX obj(str);
	return 0;
}
