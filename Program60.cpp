using namespace std;
#include<iostream>

typedef struct node
{
	int data;
	struct node * next;
}NODE, *PNODE;

class SinglyLL
{
private:
	PNODE Head;
	int iSize;

public:
	SinglyLL()								// Default Constructor
	{
		Head = NULL;
		iSize = 0;
	}
	
	int Count()
	{
		return iSize;
	}
	
	void Display()
	{
		PNODE temp = Head;
		
		while(temp != NULL)
		{
			cout<<temp->data<<"\t";
			temp = temp -> next;
		}
		cout<<"\n";
	}
	
	void InsertFirst(int iValue)
	{
		PNODE newn = NULL;
		newn = new NODE;
		newn -> data = iValue;
		newn -> next = NULL;
		
		if(Head == NULL)					// LL is Empty
		{
			Head = newn;
		}
		else								// LL contains atleast one node
		{
			newn -> next = Head;
			Head = newn;
		}
		iSize++;
	}
	
	void InsertLast(int iValue)
	{
		PNODE newn = NULL;
		newn = new NODE;
		newn -> data = iValue;
		newn -> next = NULL;
		
		PNODE temp = Head;
		
		if(Head == NULL)					// LL is Empty
		{
			Head = newn;
		}
		else								// LL contains atleast one node
		{
			while(temp -> next != NULL)
			{
				temp = temp -> next;
			}
			temp -> next = newn;
		}
		iSize++;
	}
	
	void DeleteFirst()
	{
		if(Head != NULL)
		{
			PNODE temp = Head;
			Head = Head -> next;
			delete temp;
			iSize--;
		}
	}
	
	void DeleteLast()
	{
		if(Head == NULL)
		{
			return;
		}
		else if(Head -> next == NULL)
		{
			delete Head;
			Head = NULL;
			iSize--;
		}
		else
		{
			PNODE temp = Head;
			while(temp -> next -> next != NULL)
			{
				temp = temp -> next;
			}
			delete temp -> next;
			temp -> next = NULL;
			iSize--;
		}
	}
	
	void InsertAtPosition(int iValue, int iPos)
	{
		PNODE newn = NULL;
		PNODE temp = Head;
		int i = 0;
		
		if((iPos < 1) || (iPos > iSize + 1))
		{
			return;
		}
		if(iPos == 1)
		{
			InsertFirst(iValue);
		}
		else if(iPos == iSize + 1)
		{
			InsertLast(iValue);
		}
		else
		{
			newn = new NODE;
			newn -> data = iValue;
			newn -> next = NULL;
			for(i = 1; i < iPos -1; i++)
			{
				temp = temp -> next;
			}
			newn -> next = temp -> next;
			temp -> next = newn;
			iSize++;
		}
	}
	
	void DeleteAtPosition(int iPos)
	{
		PNODE temp = Head;
		int i = 0;
		PNODE target = NULL;
		
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
			for(i = 1; i < iPos - 1; i++)
			{
				temp = temp -> next;
			}
			target = temp -> next;
			temp -> next = target -> next;
			delete target;
			iSize--;
		}		
	}
};

int main()
{
	int iChoice = 1, iNo = 0, iRet = 0, iPos = 0;
	
	SinglyLL obj1;
	
	while(iChoice != 0)
	{
		cout<<"\n***************************************************************\n";
		cout<<"Enter Your Choice : "<<"\n";
		cout<<"1 : Insert At First Position"<<"\n";
		cout<<"3 : Insert At Last Position"<<"\n";
		cout<<"3 : Insert At Given Position"<<"\n";
		cout<<"4 : Delete First Node"<<"\n";
		cout<<"5 : Delete Last Node"<<"\n";
		cout<<"6 : Delete Node At Given Position"<<"\n";
		cout<<"7 : Display The Contents"<<"\n";
		cout<<"8 : Count The Number Of Nodes"<<"\n";
		cout<<"0 : Exit The Application"<<"\n";
		cin>>iChoice;
		cout<<"\n***************************************************************\n";
		
		switch(iChoice)
		{
			case 1:
				cout<<"Enter Number\n";
				cin>>iNo;
				obj1.InsertFirst(iNo);
				break;
				
			case 2:
				cout<<"Enter Number\n";
				cin>>iNo;
				obj1.InsertLast(iNo);
				break;

			case 3:
				cout<<"Enter Number\n";
				cin>>iNo;
				cout<<"Enter Position\n";
				cin>>iPos;
				obj1.InsertAtPosition(iNo, iPos);
				break;
				
			case 4:
				obj1.DeleteFirst();
				break;
					
			case 5:
				obj1.DeleteLast();
				break;
			
			case 6:
				cout<<"Enter Position\n";
				cin>>iPos;
				obj1.DeleteAtPosition(iPos);
				break;
			
			case 7:
				obj1.Display();
				break;
			
			case 8:
				iRet = obj1.Count();
				cout<<"Number Of Nodes are : "<<iRet<<"\n";
				break;
			
			case 0:
				cout<<"Thank You For Using The Application \n";
				break;
			
			default:
				cout<<"Please Enter Valid Choice \n";
				break;
		}
	}
	return 0;
}