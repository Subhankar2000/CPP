   /*---------------SUBHANKAR KARMAKAR------------------*/
/*-----------COMPUTER C++ PRACTICAL PROGRAM #16--------------*/
    /*---COPYING CONTENTS OF ONE TEXT FILE TO ANOTHER----*/

#include <fstream.h>
#include <process.h>
#include <conio.h>

void main()
{
	ifstream fin;
	fin.open("out.txt") ;
	ofstream fout ;
	fout.open("sample.txt") ;
	char ch ;
	cout << "\nCONTENTS OF FIRST FILE WILL BE COPIED TO SECOND BLANK FILE" ;
	if(!fin || !fout)
	{   clrscr() ;
		cout <<"FILE ERROR , EITHER OF FILES ARE NOT THERE ! " ;
		getch() ;
		exit(0) ;
	}
	while(!fin.eof())
	{
		fin.get(ch) ;
		fout<<ch ;
	}
	fin.close() ;
	fout.close() ;
	cout << "\n FILE SUCCESSFULLY COPIED ! " ;
	getch() ;
}
