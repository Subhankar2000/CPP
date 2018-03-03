   /*---------------SUBHANKAR KARMAKAR------------------*/
/*-----------COMPUTER C++ PRACTICAL PROGRAM #22--------------*/
	/*----DELETE OPERATION ON QUEUE [ USING ARRAY ]-----*/

#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <process.h>

int Remove(int []) ;
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
	cout << "\nNOW THE DELETION OF ELEMENTS BEGINGS.........\n" ;
	ch = 'y' ;
	while (ch=='y'  || ch =='Y' )
	{
		res = Remove (Queue) ;
		if(res == -1)
		{	cout << "UNDERFLOW !! ABORTING " ;
			getch() ;
			exit(1)  ;
		}
		else
		{
			cout << "\nELEMENT DELETED IS - "  << res << endl ;
			cout << "NOW THE QUEUE IS (FRONT....TO ....REAR) IS - \n";
			Display (Queue,front ,rear) ;
		}
			cout << "\nWNAT TO DELETE MOTRE ELEMENTS (Y/N) - " ;
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
int Remove (int Queue[])
{
	int ret;
	if(front == -1 ) return -1 ;
	else
	{	ret = Queue [front] ;
		if(front == rear ) front =rear=-1 ;
		else front ++ ;
	}
	return ret ;
}
void Display(int SQueue[] , int front , int rear )
{
	if(front == -1) return ;
	for(int i=front ; i <rear ; i++)
		cout << Queue[i] << " <--\t" ;
	cout << SQueue[rear] << endl ;
}