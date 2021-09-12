// 3. Write application which accept file name from user and read all data from that file 
// and display contents on screen. 
// Input : Demo.txt 
// Output : Display all data of file

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
	void ReadData()
	{
		int Arr[10];
		int ret = 0;
			
		while( (ret = read(fd,Arr,10)) != 0)
		{
			write(1,Arr,ret);
		}
	}
	
};	
int main()
{
	char str[30];
	
	cout<<"Enter File name\n";
	cin>>str;
	
	FileX obj(str);
	obj.ReadData();	
	return 0;
}
