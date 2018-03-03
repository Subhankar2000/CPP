	 /*---------------SUBHANKAR KARMAKAR------------------*/
/*-----------COMPUTER C++ PRACTICAL PROGRAM #11--------------*/
	 /*---------------MULTIPLE INHERITANCE----------------*/

#include <iostream.h>
#include <conio.h>

class Area
{
	public :
		void setlength(int l)
		{	length = l ;	}

		void setbreath(int b)
		{	breath = b;		}

	protected :
		int length ;
		int breath ;
 } ;

class PerSQCost
{
	public :
		int getCost(int area)
		{	return area * 150 ;	}
} ;

class Room: public Area, public PerSQCost
{
	public :
	int getArea()
		{	return (length * breath);	}
} ;

void main()
{
	Room R ;
	int area=1 ;
	R.setlength(5) ;
	R.setbreath(7) ;
	area = R.getArea() ;
	cout << " AREA OF ROOM " << R.getArea() << endl ;
	cout << " COST OF ROOM : " << R.getCost(area) << endl ;
	getch() ;
}