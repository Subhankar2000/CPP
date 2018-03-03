   /*---------------SUBHANKAR KARMAKAR------------------*/
/*-----------COMPUTER C++ PRACTICAL PROGRAM #15--------------*/
    /*-------------SEARCHING IN A TEXT FILE-------------*/
	
#include <fstream.h>
#include <process.h>
#include <conio.h>

void main()
{
	int roll1 , no ; char found ='f' ;
	ifstream fin ;
	fin.open("ROLL.TXT") ;
	if(!fin)
	{
		cout << "\nCOULD NOT LOAD ROLL NO. FILE ! " ;
		getch() ;
		exit(0) ;
	}
	cout << "\n ROLL NO. FILE LOADED ! " ;
	cout << "\n ENTER ROLL NUMBER TO BE SEARCHED FOR : " ;
	cin >> roll1 ;
	while(!fin.eof())
	{
		fin >> no ;
		if(no == roll1)
		found = 't' ;
	}
	fin.close() ;
	if(found == 't')
		cout << "\nCONGRATULTIONS !! ROLL FOUND " ;
	else
	cout << "\nROLL NO. NOT FOUND" ;
}