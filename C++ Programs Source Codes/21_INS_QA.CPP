   /*---------------SUBHANKAR KARMAKAR------------------*/
/*-----------COMPUTER C++ PRACTICAL PROGRAM #21--------------*/
    /*----INSERT OPERATION ON QUEUE [ USING ARRAY ]-----*/

#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <process.h>

int Insert(int [],int) ;
void Display(int [] , int , int ) ;
const int size = 50 ;
int Queue[size] , front=-1, rear =-1 ;
void main()
{
	clrscr() ;
	int Item , res ;
	char ch = 'y' ;
	while (ch =='y' || ch =='Y' )
	{
		cout << "\nENTER ITEM FOR INSERTION - " ;
		cin >> Item ;
		res = Insert(Queue, Item) ;
		if(res ==-1)
		{
			cout << "OVERFLOW !! ABORTING !! \n" ;
			getch() ;
			exit(1) ;
		}
		cout << "NOW THE QUEUE IS (FRONT....TO ....REAR) IS - \n" ;
		Display(Queue , front , rear ) ;
		cout << "\nWANT TO ENTER MORE ELEMENTS (Y/N) - " ;
		cin >> ch ;
	}
}

int Insert(int Queue[] , int ele)
{
	if(rear == size -1 )return -1 ;
	else if(rear == -1)
	{
		front = rear = 0;
		Queue[rear] = ele ;
	}
	else
	{
		rear++ ;
		Queue[rear] = ele ;
	}
	return 0 ;
}

void Display(int Queue[] , int front , int rear )
{
	if(front == -1) return ;
	for(int i=front ; i <rear ; i++)
		cout << " [ " << Queue[i] << " ] " << "<--\t" ;
	cout << Queue[rear] << endl ;
}