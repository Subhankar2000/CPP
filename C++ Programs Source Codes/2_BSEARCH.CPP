    /*---------------SUBHANKAR KARMAKAR------------------*/
/*------------COMPUTER C++ PRACTICAL PROGRAM #2--------------*/
    /*---------------- BINARY SEARCH --------------------*/

#include <iostream.h>

void main()
{
	int c, first, last, middle, n, search, array[100] ;
	cout << " ENTER NUMBER OF ELEMENTS \n " ;
	cin >> n ;
	cout << " ENTER " << n << " INTEGERS\n " ;
	for ( c = 0 ; c < n ; c++ )
	cin >> array[c] ;	
	cout << " ENTER VALUE TO FIND\n " ;
	cin	>>	search	;
	first = 0 ;
	last = n - 1 ;
	middle = (first+last)/2 ;
	while( first <= last )
	{
		if ( array[middle] == search )
		{
			cout << search << " FOUND AT LOCATION " << middle+1 << endl ;
			break;
		}
		else if ( array[middle] < search )
		first = middle + 1 ;
		else
		last = middle - 1 ;
		middle = (first + last)/2 ;
	}
	if ( first > last )
	cout << " NOT FOUND! " << search << " IS NOT PRESENT IN THE LIST.\n " ;
}