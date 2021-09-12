// 4. Write application which accept file name from user and display size of file. 
// Input : Demo.txt 
// Output : File size is 56 bytes 
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<unistd.h>
#include<fcntl.h>

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
		}
		else
		{
			cout<<"File Opened Successfully\n";
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
		delete []Arr;
	}
};

int main()
{
	int no;
	char str[30];
	
	cout<<"Enter File name\n";
	cin>>str;
	
	FileX obj(str);
	
	cout<<"Enter number of characters you want to read.\n";
	cin>>no;

	obj.ReadData(no);
	
	return 0;
}