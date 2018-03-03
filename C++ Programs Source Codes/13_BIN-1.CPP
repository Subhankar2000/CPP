   /*---------------SUBHANKAR KARMAKAR------------------*/
/*-----------COMPUTER C++ PRACTICAL PROGRAM #13--------------*/
    /*------------SEARCHING IN A BINARY FILE------------*/
	
#include <iostream.h>
#include <fstream.h>
#include <process.h>
#include <conio.h>

struct stu
{
	int rollno ;
	char name[25] ;
	char Class[4] ;
	float marks ;
	char grade ;
}	s1 ;

void main()
{
	int rn ; char found ='n' ;
	ifstream fin("stu.dat" ) ;
	if(!fin)
	{
		cout << "\n FILE DOES NOT EXIST ! " ;
		exit(0) ;
	}
	cout << " ENTER ROLL NO TO BE SEARCHED FOR : " ;
	cin >> rn ;

	while(!fin.eof())
	{
		fin.read((char*)&s1,sizeof(s1)) ;
		if(s1.rollno == rn )
		{
			cout <<s1.name << " ,rollno " << rn << " has " << s1.marks << "% marks and " << s1.grade << " grade. " << endl ;
			found = 'y' ;
			break ;
		}
	}
	if ( found == 'n' )
		cout << " ROLL NO. NOT FOUND !! " << endl ;
	fin.close() ;
	getch() ;
}