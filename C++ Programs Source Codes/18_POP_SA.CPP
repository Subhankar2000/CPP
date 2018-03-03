   /*---------------SUBHANKAR KARMAKAR------------------*/
/*-----------COMPUTER C++ PRACTICAL PROGRAM #18--------------*/
    /*------POP OPERATION ON STACK [ USING ARRAY ]------*/

#include <iostream.h>
#include <conio.h>
#include <process.h>

int Pop(int [],int &) ;
int Push (int [] , int & , int ) ;
void Display(int [] , int ) ;
const int size = 50 ;
void main()
{
	int Stack[size] , Item , top = -1 , res ;
	char ch = 'y' ;
	while(ch == 'y' || ch == 'Y')
	{
		cout << "\nENTER ITEM FOR INSERTION : " ;
		cin >> Item ;
		res = Push( Stack, top, Item) ;
		if(res == -1)
		{	cout << "\nOVERFLOW ! ABORTING !! \n" ;
			getch() ;
			exit(1) ;
		}
		cout <<"\nTHE STACK NOW IS - \n" ;
		Display(Stack , top);
		cout << "\nWANT TO INSERT MORE ELEMENTS ?(Y/N) - " ;
		cin >>ch ;
	}
	cout << "NOW THE DELETION OF ELEMNTS BEGINS......\n " ;
	ch = 'y' ;
	while(ch=='y' || ch == 'Y' )
	{
		res = Pop(Stack,top) ;
		if(res==-1)
		{
			cout<<"\nUNDERFLOW !! ABORTING \n" ;
			getch() ;
			exit(1) ;
		}
		else
		{
			cout << "\nELEMENT DELETED IS - " << res << endl ;
			cout << "\nTHE STACK NOW IS - \n" ;
			Display(Stack,top) ;
		}
		cout << "\nWANT TO DELETE MORE ELEMENTS ?(Y/N) - " ;
		cin >>ch ;
	}
}

int Push(int Stack[] , int &top , int ele)
{
	if(top == size-1 ) return -1 ;
	else
	{top++ ;
	Stack[top] = ele ;
	}
	return 0 ;
}
int Pop(int Stack[] , int &top)
{
	int ret ;
	if(top ==-1 )return -1;
	else
	{
		ret=Stack[top] ;
		top-- ;
	}
	return ret ;
}

void Display(int Stack[] , int top )
{
	if(top == -1 )	return ;
	cout << Stack[top] << "<--" << endl ;
	for(int i=top-1 ; i>=0 ; i--)
	cout << Stack[i] << endl ;
}