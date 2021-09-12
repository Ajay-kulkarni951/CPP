#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node * next;
}NODE, * PNODE;


class Stack
{
private:
	PNODE Head;
	int iSize;
	
public:
	Stack();						// Constructor
	~Stack();						// Destructor
	void Push(int);					// void InsertFirst(int)
	int Pop();						// void DeleteFirst()
	void Display();
	int Count();
};

	
Stack :: Stack()					// Constructor
{
	cout<<"Inside Constructor\n";
	this -> Head = NULL; 			// Head = NULL;
	this -> iSize = 0;				// iSize = 0;
}

Stack :: ~Stack()					// Destructor
{
	cout<<"Inside Destructor\n";
	PNODE temp = NULL;
	
	while(Head != NULL)
	{
		temp = Head;
		Head = Head -> next;
		delete temp;
	}
}

void Stack :: Push(int iNo)			// void InsertFirst(int)
{
	PNODE newn = new NODE;
	newn -> data = iNo;
	newn -> next = NULL;
	
	newn -> next = Head;
	Head = newn;
	iSize++;
}

int Stack :: Pop()					// void DeleteFirst()
{
	int iRet = -1;
	
	if(iSize == 0)
	{
		cout<<"Stack Is Empty \n";
	}
	else
	{
		PNODE temp = Head;
		Head = Head -> next;
		iRet = temp -> data;
		delete temp;
		iSize--;
	}
	return iRet;
}

void Stack :: Display()
{
	PNODE temp = Head;
	
	while(temp != NULL)
	{
		cout<<temp -> data<<"\t";
		temp = temp -> next;
	}
	cout<<"\n";
}

int Stack :: Count()
{
	return this -> iSize;;
}


int main()
{
	Stack * sobj = new Stack;		//Stack sobj;       It implicitly calls the constructor
	int iOption = 1, iRet = 0, iNo = 0; 
	
	while(iOption != 0)
	{
		cout<<"------------------------------------------------------\n";
		cout<<"Please Select The Option\n";
		cout<<"1. Push The Element In Stack\n";
		cout<<"2. Pop The Element In Stack\n";
		cout<<"3. Display The Elements Of Stack\n";
		cout<<"4. Count Number Of Elements In Stack\n";
		cout<<"0. Exit The Application\n";
		cin>>iOption;
		cout<<"------------------------------------------------------\n";
		
		switch(iOption)
		{
			case 1:
				cout<<"Enter The Element To Push\n";
				cin>>iNo;
				sobj -> Push(iNo);
				break;
				
			case 2:
				iRet = sobj -> Pop();
				cout<<"Poped Element Is : "<<iRet<<"\n";
				break;

			case 3:
				cout<<"Elements Of Stack Are : \n";
				sobj -> Display();
				break;

			case 4:
				iRet = sobj -> Count();
				cout<<"Number Of Elements In Stack Are : "<<iRet<<"\n";
				break;

			case 0:
				cout<<"Thank You For Using Stack Application\n"; 
				delete sobj;		// It Implicitly calls the destructor
				break;	
			
			default:
				cout<<"Please Enter Proper Option\n";
				break;
		} // End of switch
	} // End of while
	
	return 0;
} // End of main