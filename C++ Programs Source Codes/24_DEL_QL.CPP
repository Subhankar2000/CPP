   /*---------------SUBHANKAR KARMAKAR------------------*/
/*-----------COMPUTER C++ PRACTICAL PROGRAM #24--------------*/
	/*--DELETE OPERATION ON QUEUE[ USING LINKED LIST ]--*/

#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>

struct Node
{   int info ;
	 Node *next ;
} *start, *newptr,*save,*ptr,*rear ;
Node *Create_New_Node(int);
void Insert(Node* );
void Display(Node* );
void DelNode();

void main()
{    start=rear=NULL;
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

	Insert(newptr);

	cout<<"\n NOW THE LINKED-QUEUE IS [ FRONT........TO.......REAR ] - \n";

	Display( start ) ;
	cout<<"\n PRESS Y TO ENTER MORE NODES,N TO EXIT......\n";
	cin >> ch ;
  }

	 do
	 {
	   cout<<"\n NOW THE LINKED-QUEUE IS [ FRONT........TO.......REAR ] - \n";
	   Display(start);
	   getch() ;
	   cout<<"WANT TO DELETE FIRST NODE?(Y/N) -";
	   cin>>ch;

	   if(ch=='y'||ch=='Y')
	 DelNode();
	 }
	 while(ch=='y'||ch=='Y');
	 getch();

}
Node*Create_New_Node(int n)
{
  ptr=new Node;
  ptr->info=n;
  ptr->next=NULL;
  return ptr;
}
void Insert(Node*np)
{  if(start==NULL)
   start=rear=np;
   else
   { rear->next=np;
	 rear=np;
   }
}
void DelNode()
{  if(start==NULL)
   {	cout<<"UNDERFLOW!!!\n";
		exit(0) ;
   }
   else
   {  ptr=start;
	  start=start->next;
	  delete ptr;
   }
}
void Display(Node*np)
{  while(np!=NULL)
	 {
	  cout<< " [ " << np->info << " ] " <<" -> ";
	  np=np->next;
	 }
	 cout<<"|||\n";
}