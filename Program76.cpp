#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node * next;
}NODE,*PNODE;

class SinglyCL
{
private:
	PNODE Head;
	PNODE Tail;
	int iSize;
		
public:
	SinglyCL()
	{
		Head = NULL;
		Tail = NULL;
		iSize = 0;
	}
	
	void InsertFirst(int iNo)
	{
		PNODE newn = NULL;
		
		newn = new NODE;
		newn -> data = iNo;
		newn -> next = NULL;
		
		if((Head == NULL) && (Tail == NULL))		// LL is empty
		{
			Head = newn;
			Tail = newn;
		}
		else										// LL contains atleast one node
		{
			newn -> next = Head;
			Head = newn;
		}
		iSize++;
		Tail -> next = Head;
	}
	
	void InsertLast(int iNo)
	{
		PNODE newn = NULL;
		
		newn = new NODE;
		newn -> data = iNo;
		newn -> next = NULL;
		
		if((Head == NULL) && (Tail == NULL))		// LL is empty
		{
			Head = newn;
			Tail = newn;
		}
		else										// LL contains atleast one node
		{
			Tail -> next = newn;
			Tail = Tail -> next; 					// Tail = newn;
		}
		iSize++;
		Tail -> next = Head;
	}
	
	int Count()
	{
		return iSize;
	}
	
	void Display()
	{
		PNODE Temp = Head;
		int i = 0;
		for(i = 1; i <= iSize; i++)
		{
			cout<<Temp -> data<<" -> ";
			Temp = Temp -> next;
		}
		cout<<"\n";
	}
	
	void DeleteFirst()
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
			iSize--;
		}
		else
		{
			Head = Head -> next;
			delete (Tail -> next);
			Tail -> next = Head;
			iSize--;
		}
	}
	
	void DeleteLast()
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
			iSize--;
		}
		else
		{
			PNODE Temp = Head;
			int  i = 0;
			for(i = 1; i < iSize - 1; i++)
			{
				Temp = Temp -> next;
			}
			delete Tail;
			Tail = Temp;
			Tail -> next = Head;
			iSize--;
		}
	}
	void InsertAtPosition(int iNo, int iPos)
	{
		PNODE Temp = Head;
		PNODE newn = NULL;
		int  i = 0;
		
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
			newn = new NODE;
			newn -> data = iNo;
			newn -> next = NULL;
			
			for(i = 1; i < iPos - 1; i++)
			{
				Temp = Temp -> next;
			}
			newn -> next = Temp -> next;
			Temp -> next = newn;
			iSize++;
			Tail -> next = Head;
		}
	}
	
	void DeleteAtPosition(int iPos)
	{
		PNODE Temp = Head;
		PNODE Target = NULL;
		int i = 0;
		
		
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
				Temp = Temp -> next;
			}
			Target = Temp -> next;
			Temp -> next = Target -> next;
			delete Target;
			iSize--;
			Tail -> next = Head;
		}
	}
};

int main()
{
	SinglyCL obj;
	int iChoice = 1, iRet = 0, iPos = 0, iValue = 0;
	
	while(iChoice != 0)
	{
		cout<<"*************************************************************\n";
		cout<<"Enter Your Choice \n";
		cout<<"1. Insert First \n";
		cout<<"2. Insert Last \n";
		cout<<"3. Insert At Position \n";
		cout<<"4. Delete First \n";
		cout<<"5. Delete Last \n";
		cout<<"6. Delete At Position \n";
		cout<<"7. Display The Contents \n";
		cout<<"8. Count The Elements \n";
		cout<<"0. Exit The Application \n";
		
		cin>>iChoice;
		
		cout<<"*************************************************************\n";
		
		switch(iChoice)
		{
			case 1:
				cout<<"Enter number \n";
				cin>>iValue;
				
				obj.InsertFirst(iValue);
				break;
				
			case 2:
				cout<<"Enter number \n";
				cin>>iValue;
				
				obj.InsertLast(iValue);
				break;
				
			case 3:
				cout<<"Enter number \n";
				cin>>iValue;
				
				cout<<"Enter Position \n";
				cin>>iPos;
				
				obj.InsertAtPosition(iValue, iPos);
				break;	
				
			case 4:
				obj.DeleteFirst();
				break;
				
			case 5:
				obj.DeleteLast();
				break;
				
			case 6:
				cout<<"Enter The Position \n";
				cin>>iPos;
				
				obj.DeleteAtPosition(iPos);
				break;
				
			case 7:
				obj.Display();
				break;
				
			case 8:
				iRet = obj.Count();
				cout<<"Number Of Nodes Are : "<<iRet<<"\n";
				break;
				
			case 0:
				cout<<"Thank You For Using The Application \n";
				break;
				
			default:
				cout<<"Please Enter Proper Option \n";
				break;
		} // End of Switch
	} // End of While		
	return 0;
} // End of Main