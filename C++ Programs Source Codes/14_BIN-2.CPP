   /*---------------SUBHANKAR KARMAKAR------------------*/
/*-----------COMPUTER C++ PRACTICAL PROGRAM #14--------------*/
	/*------------MODIFY DATA IN BINARY FILE------------*/

#include <iostream.h>
#include <fstream.h>
#include <stdio.h>
#include <string.h>
#include <process.h>
#include <conio.h>

class stu
{
	int rollno ;
	char name[25] ;
	char Class[4] ;
	float marks ;
	char grade ;

	public :
		void getdata()
		{
			cout << " ROLLNO : " ;
			cin >> rollno ;
			cout << " NAME : " ;
			cin >> name ;
			cout << " CLASS : " ;
			cin >> Class ;
			cout << " MARKS : " ;
			cin >> marks ;
			if(marks >=75 )
				grade = 'A' ;
			else if(marks >= 60 )
				grade = 'B' ;
			else if(marks >= 50 )
				grade = 'C' ;
			else if (marks >= 40 )
				grade = 'D' ;
			else
				grade ='F' ;
			}

		void putdata()
		{
			cout << " ROLLNO " << rollno << "\tNAME : " << name << "\n MARKS : " << marks << "\t GRADE " << grade  << endl ;
		}

		int getrno()
		{	return rollno ;  }

		void modify() ;
}	s1 , stud ;

void stu::modify()
{
	cout << " ROLLNO " << rollno << endl ;
	cout << " NAME : " << name << "\t CLASS : " << Class << "\t MARKS : " << marks << endl ;
	cout << " ENTER NEW BDEETILS : " << endl ;
	char nm[20] = " " , CL[4] = " " ;
	float mks ;
	cout << " NDEW NAME : [ ENTER '.' TO RETAIN OLD ONE ]" ;
	cin >> nm ;
	cout << " NEW CLASS : [ ENTER '.' TO REATIN OLD ONE ]" ;
	cin >> CL ;
	cout << " NEW MARKS : [ ENTER '-1' TO REATIN OLD ONE ]" ;
	cin >> mks ;
	if(strcmp(nm,".")!= 0)
		strcpy(name , nm) ;
	if(strcmp(CL,".") !=0)
		strcpy(Class,CL) ;
	if(mks != -1)
	{
		marks = mks ;
		if(marks >=75 )
			grade = 'A' ;
		else if(marks >= 60 )
			grade = 'B' ;
		else if(marks >= 50 )
			grade = 'C' ;
		else if (marks >= 40 )
			grade = 'D' ;
		else
			grade ='F' ;
	}
}

void main()
{
	fstream flo("stu.dat" , ios::in | ios::out | ios::binary ) ;
	int rno ; long pos ; char found='f' ;
	if(!flo)
	{
		cout << "\n FILE DOES NOT EXIST ! " ;
		exit(0) ;
	}
	cout <<"\nENTRE ROLLNO OF STUDENT WHOSE RECORD IS TO BE MODIFIED \n " ;
	cin >> rno ;

	while(!flo.eof())
	{
		pos = flo.tellg() ;
		flo.read((char*) &s1 ,sizeof(s1)) ;
		if(s1.getrno() == rno)
		{
			s1.modify() ;
			flo.seekg(pos) ;
			flo.write((char*)&s1,sizeof(s1)) ;
			found = 't' ;
			break ;
		}
	}
	if(found == 'f' )
		cout << " RECORD NOT FOUND !!\n" ;
	flo.seekg(0) ;
		cout << " NOW FILE CONTAINS \n " ;
	while(!flo.eof())
	{
		flo.read((char*)&stud,sizeof(stud)) ;
		stud.putdata() ;
	}
	flo.close() ;
	getch() ;
}