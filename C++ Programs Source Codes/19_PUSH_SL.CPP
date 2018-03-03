   /*---------------SUBHANKAR KARMAKAR------------------*/
/*-----------COMPUTER C++ PRACTICAL PROGRAM #17--------------*/
    /*---PUSH OPERATION ON STACK [ USING LINKED LIST ]--*/
	
#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>

struct Node
{
	int info;
	Node* next;
} *top , *newptr , *save , *ptr ;

Node* Create_New_Node(int);
void Push( Node* );
void Display( Node* );

void main()
{
	top=NULL ;
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

		cout<<"\n NOW INSERTING THIS NODE IN THE BEGINNING OF THE LINKED-STACK...\n";
		cout<<"PRESS ENTER TO CONTINUE.....\n" ;
		getch() ;

	Push(newptr);

	cout<<"\n NOW THE LINKED-STACK IS :\n";

	Display( top ) ;
	cout<<"\n PRESS Y TO ENTER MORE NODES,N TO EXIT......\n";
	cin >> ch ;
  }
}

Node* Create_New_Node(int n)
{
  ptr=new Node;
  ptr->info=n;
  ptr->next=NULL;
  return ptr;
}

void Push(Node* np)
{
  if(top==NULL)
	 top=np;

  else
	{
	 save=top;
	 top=np;
	 np->next=save;
	}
}

void Display(Node* np)
{
	while(np!=NULL)
	 {
	  cout<< " [ " << np->info << " ] " <<" -> ";
	  np=np->next;
	 }
	 cout<<"|||\n";
}