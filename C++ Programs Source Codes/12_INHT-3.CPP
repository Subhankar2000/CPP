    /*---------------SUBHANKAR KARMAKAR------------------*/
/*-----------COMPUTER C++ PRACTICAL PROGRAM #12--------------*/
    /*------------HIERARCHICAL INHERITANCE--------------*/
	
#include <iostream.h>
#include <conio.h>

class Shape
{
	public :
		void setWidth(int w)
		{	width = w ;	}
		void setHeight(int h)
		{	height = h;	}

	protected :
		int width ;
		int height ;
} ;

class Rectangle: public Shape
{
	public :
		int getArea()
		{	return (width * height)	;	}
} ;

class Triangle: public Shape
{
	public :
		int getArea()
		{
			return (width * height)/2 ;
		}
 } ;

void main(void)
{
	Rectangle R ;
	R.setWidth(6) ;
	R.setHeight(8) ;
	cout << " AREA OF RECTANGLE : " << R.getArea() << endl ;
	Triangle T ;
	T.setWidth(5) ;
	T.setHeight(6) ;
	cout << " AREA OF TRIANGLE : " << T.getArea() << endl ;
	getch() ;
}