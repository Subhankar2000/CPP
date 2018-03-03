   /*---------------SUBHANKAR KARMAKAR------------------*/
/*-----------COMPUTER C++ PRACTICAL PROGRAM #17--------------*/
    /*------PUSH OPERATION ON STACK [ USING ARRAY ]-----*/
	
#include <iostream.h>
#include <conio.h>
#include <process.h>

int Push (int [] , int & , int ) ;
void Display(int [] , int ) ;
const int size = 50 ;
int main()
{
	int Stack[size] , Item , top = -1 , res ;
	char ch = 'y' ;
	clrscr() ;
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
	return 0 ;
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

void Display(int Stack[] , int top )
{
	cout << Stack[top] << "<--" << endl ;
	for(int i=top-1 ; i>=0 ; i--)
	cout << Stack[i] << endl ;
}