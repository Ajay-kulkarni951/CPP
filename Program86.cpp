#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node * next;
}NODE, * PNODE;

class Queue
{	
private:
	PNODE Head;
	int iSize;
	
public:
	Queue();
	void Display();
	int Count();
	void Enqueue(int);
	int Dequeue();
};

Queue :: Queue()
{
	Head = NULL;
	iSize = 0;
}

void Queue :: Display()
{
	PNODE temp = Head;
	cout<<"Elements Of Queue Are : \n";
	while(temp != NULL)
	{
		cout<<temp -> data<<"\t";
		temp = temp -> next;
	}
	cout<<"\n";
}

int Queue :: Count()
{
	return iSize;
}

void Queue :: Enqueue(int iNo)		// InsertLast
{
	PNODE newn = new NODE;
	newn -> data = iNo;
	newn -> next = NULL;
	
	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		PNODE temp = Head;
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newn;
	}
	iSize++;
}

int Queue :: Dequeue()  			// DeleteFirst
{
	if(Head == NULL)
	{
		cout<<"Queue Is Empty \n";
		return -1;
	}
	else
	{
		int iNo = Head -> data;
		PNODE temp = Head;
		Head = Head -> next;
		delete temp;
		iSize--;
		return iNo;
	}
}

int main()
{
	Queue obj;
	int iChoice = 1, iNo = 0, iRet = 0;
	while(iChoice != 0)
	{
		cout<<"Please Enter Your Choice \n";
		cout<<"1. Insert The Element \n";
		cout<<"2. Delete The Element \n";
		cout<<"3. Display The Elements \n";
		cout<<"4. Count Number Of Elements \n";
		cout<<"0. Exit The Application \n";
		cin>>iChoice;
		
		switch(iChoice)
		{
			case 1:
				cout<<"Enter The Elements \n";
				cin>>iNo;
				obj.Enqueue(iNo);
				break;
				
			case 2:
				iRet = obj.Dequeue();
				cout<<"Removed Element Is : "<<iRet<<"\n";
				break;
				
			case 3:
				obj.Display();
				break;
				
			case 4:
				iRet = obj.Count();
				cout<<"Number of Elements In Queue Are : "<<iRet<<"\n";
				break;
				
			case 0:
				cout<<"Thank You For Using Queue Application \n";
				break;
				
			default : 
				cout<<"Enter Proper Choice \n";
				break;
		}
	}
	return 0;
}