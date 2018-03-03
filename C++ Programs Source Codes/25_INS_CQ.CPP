   /*---------------SUBHANKAR KARMAKAR------------------*/
/*-----------COMPUTER C++ PRACTICAL PROGRAM #25--------------*/
  /*INSERT - DELETE OPERATION ON QUEUE[ USING LINKED LIST ]*/

#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <process.h>

int Insert_in_CQ(int[] , int) ;
void Display(int[] , int , int ) ;
int Del_in_CQ(int CQueue[] ) ;
const int size=7 ;
int CQueue[size] , front=-1 ,rear=-1 ;
int main()
{
	clrscr() ;
	int Item , res ,ch ;
	do{
		cout << "\nCIRCULAR QUEUE MENU" ;
		cout <<"\n1.INSERT" ;
		cout <<"\n2.DELETE" ;
		cout <<"\n3.DISPLAY" ;
		cout <<"\n4.EXIT" ;
		cout <<"\nENTER YOUR CHOICE : " ;
		cin >>ch ;
		switch(ch)
		{
			case 1 : cout << "\nENTER ITEM for Insertion : " ;
					 cin >>Item ;
					 res = Insert_in_CQ(CQueue,Item) ;
					 if(res==-1)
					 {
					 cout << "\nOVERFLOW !! \n" ;
					 getch() ;
					 exit(0) ;
					}
					 else
					 {
						cout <<"\nNOW THE CIRCULAR QUEUE IS : " ;
						Display(CQueue , front , rear) ;
					 }
					 getch() ;
					 break ;
			case 2 : Item = Del_in_CQ(CQueue) ;

					 if(Item==-1)
					 {
						cout << "\nUNDERFLOW !! QUITING " ;
						getch() ;
						exit(0) ;
					 }
					 cout << "\nELEMENT DELETED Is : "<< Item ;
					 Display(CQueue,front,rear) ;

					 getch() ;
					 break ;
			case 3 : Display(CQueue,front,rear) ;
					 getch() ;
					 break ;
			case 4 : exit(0) ; break ;
			default: cout << "\nVALID CHOICES ARE 1....4 ONLY \n" ;
					 getch() ;
					 break ;
		}
	}while(ch != 4) ;
	return 0 ;
}

int Insert_in_CQ(int CQueue[] , int ele)
{
	if((front ==0 && rear == size-1 ) || (front == rear +1 ))
	return -1 ;
	else if(rear == -1 ) front =rear = 0 ;
	else if(rear == size-1 ) rear=0 ;
	else rear++ ;
		CQueue[rear]  = ele ;
	return 0 ;
}

void Display(int CQueue[] , int front , int rear )
{
	int i=0 ;
	cout << "\nCIR_QUEUE IS : "<< "( FRONT SWOWN AS >>> REAR AS <<< AND FREE SPACE - ) \n" ;
	if(front == -1)
	return ;
	if(rear>=front)
	{
		for(i=0 ; i<front ; i++)cout <<  " - " ;
			cout << " >>> " ;
		for(i=front ; i<rear ; i++)cout << CQueue[i] << " <- " ;
			cout << CQueue[rear] << " <<< " << endl ;
	}
	else
	{
		for(i=0 ;i<rear ;i++) cout <<CQueue[i] << " <- " ;
			cout << CQueue[rear] << " <<< " ;
		for( ; i<front ;i ++ )cout << " - " ;
			cout << " >>> " ;
		for(i=front ; i<size ;i++ ) cout << CQueue[i] << " <- " ;
			cout << "\t...WRAP AROUND..." ;
	}
}

int Del_in_CQ(int CQueue[] )
{
	int ret ;
	if(front == -1) return -1 ;
	else
	{
		ret = CQueue[front] ;
		if(front == rear ) front = rear =-1 ;
		else if (front == size-1 )
			front =0  ;
		else front++ ;
	}return ret ;
}