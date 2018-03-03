    /*---------------SUBHANKAR KARMAKAR------------------*/
/*------------COMPUTER C++ PRACTICAL PROGRAM #6--------------*/
    /*------------CALLING FROM OUTSIDE CLASS-------------*/
	
#include <iostream.h>
#include <conio.h>

class Rectangle
{
	private :
		double width;
	public :
		double length;
		void setWidth( double wid ) ;
		double getWidth( void ) ;
 } ;

 double Rectangle::getWidth(void)
{ 	return width ;	}

void Rectangle::setWidth( double wid )
{	 width = wid;	}

void main( )
{
	Rectangle R ;
	R.length = 5.0 ;
	cout << " LENGTH OF RECTANGLE : " << R.length << endl ;
	 /*-----Can not set Width of Rectangle without member function as it is private----- */
	R.setWidth(5.0); /*--------Use member function to set it----------*/
	cout << " WIDTH OF RECTANGLE : " << R.getWidth() << endl ;
	getch() ;
}