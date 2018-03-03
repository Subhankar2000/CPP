    /*---------------SUBHANKAR KARMAKAR------------------*/
/*------------COMPUTER C++ PRACTICAL PROGRAM #7--------------*/
    /*------------MEMBER FUNCTIONS OF A CLASS------------*/
	
#include <iostream.h>
#include <conio.h>

class Cube
{
	public :
		double length ;
		double breadth ;
		double height ;
		double getVolume(void) ;
		void setLength( double l ) ;
		void setBreadth( double b) ;
		void setHeight( double h ) ;
 } ;

double Cube::getVolume(void)
{	return length * breadth * height ;	}

void Cube::setLength( double l )
{	 length = l ;	}

void Cube::setBreadth( double b )
{	 breadth = b ;	}

void Cube::setHeight( double h )
{	 height = h ;	}

void main( )
{
	Cube C1 ;
	Cube C2 ;
	double volume = 0.0 ;
	C1.setLength(3.0) ;
	C1.setBreadth(10.0)	;
	C1.setHeight(5.0) ;
	C2.setLength(20.0) ;
	C2.setBreadth(4.0) ;
	C2.setHeight(8.0) ;
	volume = C1.getVolume() ;
	cout << " VOLUME OF CUBE 1 : " << volume << endl ;
	volume = C2.getVolume() ;
	cout << " VOLUME OF CUBE 2 : " << volume << endl ;
	getch() ;
}