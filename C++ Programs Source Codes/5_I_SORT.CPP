    /*---------------SUBHANKAR KARMAKAR------------------*/
/*------------COMPUTER C++ PRACTICAL PROGRAM #5--------------*/
    /*---------------- INSERTION SORT -------------------*/
	
#include <iostream.h>

void main()
{
	int n, array[1000], c, d, t;
	cout << " ENTER NUMBER OF ELEMENTS\n " ;
	cin >> n ;
	cout << " ENTER " << n << " INTEGERS\n " ;
	for (c = 0; c < n; c++) 
		cin >> array[c] ;
	for (c = 1 ; c <= n - 1; c++)
	{
		d = c ;
		while ( d > 0 && array[d] < array[d-1]) 
		{
			t = array[d] ;
			array[d] = array[d-1] ;
			array[d-1] = t ;
			d-- ;
		}
	}
	cout << " SORTED LIST IN ASCENDING ORDER:\n " ;
	for (c = 0; c <= n - 1; c++)
	{
		cout << array[c] << " \n " ;
	}
}