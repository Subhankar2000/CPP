   /*---------------SUBHANKAR KARMAKAR------------------*/
/*-----------COMPUTER C++ PRACTICAL PROGRAM #23--------------*/
    /*--INSERT OPERATION ON QUEUE[ USING LINKED LIST ]--*/


#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <process.h>

struct Node
{
	int info ;
	Node *next ;
} *front , *newptr , *save , *ptr , *rear ;
Node *Create_New_Node(int) ;
void Insert_End(Node *) ;
void Display(Node *) ;

void main()
{       clrscr() ;
	front=rear=NULL;
   	int inf ;
	char ch='y' ;

	while(ch=='y'||ch=='Y')
	{
		clrscr() ;
		cout<<"\n ENTER INFORMATION FOR NEW NODE - ";
		cin>>inf ;
		newptr = Create_New_Node(inf);

		if(newptr != NULL)
		{
			cout<<"\n NEW NODE CREATED SUCCESSFULLY.PRESS ENTER TO CONTINUE......";
			getch();
		}
		else
		{
			cout<<"\n CANNOT CREATE NEW NODE!!!ABORTIG!! \n";
			getch() ;
			exit(1);
		}

		cout<<"\n NOW INSERTING THIS NODE IN THE QUEUE...\n";
		cout<<"PRESS ENTER TO CONTINUE.....\n" ;
		getch() ;

	Insert_End(newptr);

	cout<<"\n NOW THE LINKED-QUEUE IS [ FRONT........TO.......REAR ] - \n";

	Display( front ) ;
	cout<<"\n PRESS Y TO ENTER MORE NODES,N TO EXIT......\n";
	cin >> ch ;
  }
}

Node *Create_New_Node( int n )
{
	ptr = new Node ;
	ptr -> info = n ;
	ptr -> next = NULL ;
	return ptr ;
}

void Insert_End(Node *np)
{
	if(front == NULL)
		front = rear = np ;
	else
	{
		rear -> next = np ;
		rear = np ;
	}
}

void Display( Node *np)
{
	 while(np!=NULL)
	 {
	  cout<< " [ " << np->info << " ] " <<" -> ";
	  np=np->next;
	 }
	 cout<<"|||\n";
}

