    /*---------------SUBHANKAR KARMAKAR------------------*/
/*------------COMPUTER C++ PRACTICAL PROGRAM #3--------------*/
    /*---------------- SELECTION SORT -------------------*/
	
#include <iostream.h>

void main()
{
	int array[100], n, c, d, position, swap ;
	cout << " ENTER NUMBER OF ELEMENTS\n " ;
	cin >> n ;
	cout << " ENTER " << n << " INTEGERS\n " ;
	for ( c = 0 ; c < n ; c++ )
	cin >> array[c] ;
	for ( c = 0 ; c < ( n - 1 ) ; c++ )
	{
		position = c;
		for ( d = c + 1 ; d < n ; d++ )
		{
			if ( array[position] > array[d] )
				position = d;
		}
		if ( position != c )
        {
			swap = array[c];
			array[c] = array[position];
			array[position] = swap;
		}
	}
	cout << " SORTED LIST IN ASCENDING ORDER:\n " ;
	for ( c = 0 ; c < n ; c++ )
	cout << array[c] << " \n " ;
 }