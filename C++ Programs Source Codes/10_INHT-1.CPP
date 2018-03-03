     /*---------------SUBHANKAR KARMAKAR------------------*/
/*-----------COMPUTER C++ PRACTICAL PROGRAM #10--------------*/
     /*----------------SINGLE INHERITANCE-----------------*/
	
#include <iostream.h>
#include <conio.h>

class Shape
{
	public :
		void setWidth(int w)
		{	width = w ;	}
		void setHeight(int h)
		{	height = h ; }

	protected :
		int width ;
		int height ;
 } ;

class Rectangle: public Shape
{
	public :
		int getArea()
		{	return (width * height) ; }
} ;

void main()
{
	Rectangle R ;
	R.setWidth(6) ;
	R.setHeight(8) ;
	cout << " AREA OF RECTANGLE : " << R.getArea() << endl ;
	getch() ;
}