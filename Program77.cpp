#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}NODE, *PNODE;
	
	
class DoublyCL
{
private:
	PNODE Head;
	PNODE Tail;
	int iSize;
	
public:
	DoublyCL()
	{
		Head = NULL;
		Tail = NULL;
		iSize = 0;
	}
	
	void InsertFirst(int);
	void InsertLast(int);
	void InsertAtPosition(int,int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPosition(int);
	void Display();
	int Count();
};


void DoublyCL :: InsertFirst(int iNo)
{
	PNODE newn = NULL;
	
	newn = new NODE;
	newn -> data = iNo;
	newn -> next = NULL;
	newn -> prev = NULL;
	
	if((Head == NULL) && (Tail == NULL))  		// if(iSize == 0)
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		newn -> next = Head;
		Head -> prev = newn;
		Head = newn;
	}
	Tail -> next = Head;
	Head -> prev = Tail;
	iSize++;
}

void DoublyCL :: InsertLast(int iNo)
{
	PNODE newn = NULL;
	PNODE temp = Head;
	
	newn = new NODE;
	
	newn -> data = iNo;
	newn -> next = NULL;
	newn -> prev = NULL;
	
	if((Head == NULL) &&(Tail == NULL))    	// if(iSize == 0)
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		Tail -> next = newn;
		newn -> prev = Tail;
		Tail = newn;
	}
	Tail -> next = Head;
	Head -> prev = Tail;
	iSize++;
}

void DoublyCL :: InsertAtPosition(int iNo, int iPos)
{
	if((iPos < 1) || (iPos > iSize + 1))
	{
		return;
	}
	if(iPos == 1)
	{
		InsertFirst(iNo);
	}
	else if(iPos == iSize + 1)
	{
		InsertLast(iNo);
	}
	else
	{
		PNODE newn = NULL;
		newn = new NODE;
		newn -> data = iNo;
		newn -> next = NULL;
		newn -> prev = NULL;
		
		PNODE temp = Head;
		for(int i = 1; i < iPos - 1; i++)
		{
			temp = temp -> next;
		}
		newn -> next = temp -> next;
		temp -> next -> prev = newn;
		temp -> next = newn;
		newn -> prev = temp;
		iSize++;
	}
}

void DoublyCL :: DeleteFirst()
{
	if(iSize == 0)
	{
		return;
	}
	else if(iSize == 1)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
		iSize = 0;
	}
	else
	{
		Head = Head -> next;
		delete (Tail -> next);			// delete(Head -> prev);
		Tail -> next = Head;
		Head -> prev = Tail;
		iSize--;
	}
}

void DoublyCL :: DeleteLast()
{
	if(iSize == 0)
	{
		return;
	}
	else if(iSize == 1)
	{
		delete Tail;
		Head = NULL;
		Tail = NULL;
		iSize = 0;
	}
	else
	{
		Tail = Tail -> prev;
		delete (Head -> prev);
		Tail -> next = Head;
		Head -> prev = Tail;
		iSize--;
	}
}

void DoublyCL :: DeleteAtPosition(int iPos)
{
	if((iPos < 1) || (iPos > iSize))
	{
		return;
	}
	if(iPos == 1)
	{
		DeleteFirst();
	}
	else if(iPos == iSize)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp = Head;
		for(int i = 1; i < iPos - 1; i++)
		{
			temp = temp -> next;
		}
		temp -> next = temp -> next -> next;
		delete(temp -> next -> prev);
		temp -> next -> prev = temp;
		iSize--;
	}
}

void DoublyCL :: Display()
{
	PNODE temp = Head;
	for(int i = 1; i <= iSize; i++)
	{
		cout<<temp -> data<<"\t";
		temp = temp -> next;
	}
	cout<<"\n";
}

int DoublyCL :: Count()
{
	return iSize;
}

int main()
{
	int iChoice = 1, iNo = 0, iRet = 0, iPos = 0;
	
	DoublyCL obj;
	
	while(iChoice != 0)
	{
		cout<<"----------------------------------------------------\n";
		cout<<"Enter Your Choice :\n";
		cout<<"1. Insert Node At First Position\n";
		cout<<"2. Insert Node At Last Position \n";
		cout<<"3. Insert Node At Given Position \n";
		cout<<"4. Delete First Node\n";
		cout<<"5. Delete Last Node\n";
		cout<<"6. Delete Node At Given Position \n";
		cout<<"7. Display The All Nodes\n";
		cout<<"8. Count The Total Number Of Nodes\n";
		cout<<"0. Exit The Application \n";
		cin>>iChoice;
		cout<<"----------------------------------------------------\n";
		
		switch(iChoice)
		{
			case 1:
				cout<<"Enter Number\n";
				cin>>iNo;
				obj.InsertFirst(iNo);
				break;
				
			case 2:
				cout<<"Enter Number\n";
				cin>>iNo;
				obj.InsertLast(iNo);
				break;
				
			case 3:
				cout<<"Enter Number\n";
				cin>>iNo;
				cout<<"Enter Position\n";
				cin>>iPos;
				obj.InsertAtPosition(iNo, iPos);
				break;
				
			case 4:
				obj.DeleteFirst();
				break;
				
			case 5:
				obj.DeleteLast();
				break;
				
			case 6:
				cout<<"Enter Position\n";
				cin>>iPos;
				obj.DeleteAtPosition(iPos);
				break;
				
			case 7:
				cout<<"Elements of Linked List Are : \n";
				obj.Display();
				break;
				
			case 8:
				iRet = obj.Count();
				cout<<"Total Number of Nodes Are :"<<iRet<<"\n";
				break;
				
			case 0:
				cout<<"Thank You For Using Linked List Application\n";
				break;
		
			default:
				cout<<"Please Enter Proper Option\n";
				break;
				
		} // End of switch
	} // End of while
	
	return 0;
} // End of main