    /*---------------SUBHANKAR KARMAKAR------------------*/
/*------------COMPUTER C++ PRACTICAL PROGRAM #8--------------*/
    /*-----------------SIMPLE CONSTRUCTOR----------------*/

#include <iostream.h>
#include <conio.h>

class Cube
{
	private :
		double length ;

	public :
		void setLength( double len ) ;
		double getLength( void ) ;
		Cube() ;
 } ;

Cube::Cube(void)
{	cout << " OBJECT IS BEING CREATED " << endl ;	}

void Cube::setLength( double len )
{	length = len ;	}

double Cube::getLength( void )
{	return length ;	}

void main( )
{
	Cube C ;
	C.setLength(5.0) ;
	cout << " LENGTH OF CUBE : " << C.getLength() << endl ;
	getch() ;
}