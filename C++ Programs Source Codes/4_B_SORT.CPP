    /*---------------SUBHANKAR KARMAKAR------------------*/
/*------------COMPUTER C++ PRACTICAL PROGRAM #4--------------*/
    /*---------------- BUBBLE SORT --------------------*/

#include <iostream.h>

void bubble_sort(long [], long);

void main()
{
	long array[100], n, c, d, swap ;
	cout << " ENTER NUMBER OF ELEMENTS\n " ;
	cin >> n ;
	cout << " ENTER" << n << " INTEGERS\n " ;
	for (c = 0; c < n; c++)
		cin >> array[c] ;
	bubble_sort(array, n) ;
	cout << " SORTED LIST IN ASCENDING ORDER:\n " ;
	for ( c = 0 ; c < n ; c++ )
		cout << array[c] << " \n " ;
}

void bubble_sort(long list[], long n)
{
	long c, d, t;
	for (c = 0 ; c < ( n - 1 ); c++)
	{
		for (d = 0 ; d < n - c - 1; d++)
		{
			if (list[d] > list[d+1])
			{
				t = list[d];
				list[d] = list[d+1];
				list[d+1] = t;
			}
		}
	}
}