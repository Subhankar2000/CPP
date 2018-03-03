    /*---------------SUBHANKAR KARMAKAR------------------*/
/*------------COMPUTER C++ PRACTICAL PROGRAM #1--------------*/
    /*---------------- LINEAR SEARCH --------------------*/

#include <iostream.h>

void main()
{
	int array[100], search, c, n;
	cout << " ENTER THE NUMBER OF ELEMENTS IN ARRAY \n " ;
 	cin >> n ;
	cout << " ENTER " << n << " INTEGER(S)\n " ;
	for (c = 0; c < n; c++)
 	cin >> array[c] ;
 	cout << " ENTER THE NUMBER TO SEARCH\N " ;
 	cin >> search;
	for (c = 0; c < n; c++)
 	{
		if (array[c] == search)	
		{
 			cout << search << " IS PRESENT AT LOCATION" << c+1 << " \n " ;
			break ;
 		}
 	}
	if (c == n)
 	cout << search << " IS NOT PRESENT IN ARRAY.\n " ;
}