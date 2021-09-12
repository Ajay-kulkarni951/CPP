// 5. Write application which accept file name from user and one string from user. Write 
// that string at the end of file. 
// Input : Demo.txt 
// Hello World 
// Output : Write Hello World at the end of Demo.txt file 

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
using namespace std;
class FileX
{
public:
	int fd;
	
	FileX(char Name[])
	{
		fd = open(Name,O_WRONLY | O_APPEND);
		if(fd == -1)
		{
			cout<<"Unable to oprn file\n";
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
	
	void WriteData()
	{
		char str[] = "Hello World" ;
		write(fd,str,13);
	}
	
};

int main()
{
	char str[30];
		
	cout<<"Enter file name\n";
	cin>>str;
	
	FileX obj(str);
	
	obj.WriteData();
	
	return 0;
}
	