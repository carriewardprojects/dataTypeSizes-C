// dataTypeSizes.cpp : A simple C++ program that displays the byte size for various data types
//

#include <iostream>
using namespace std;


int main()
{
	/* You have been given a job as a programmer on a Cyborg supercomputer. 
	 * In order to survive there, you need to know how many bytes the following data types use:
	 *      char   int   float   double
	 * The following program determines the amount of memory used by these data types.
	 */
	
	int apple;

	// Use the sizeof() function to determine the byte size. Display the results
	cout << "\nInteger size: \t" << sizeof(int) << " byte(s).\n";
	cout << "Double size: \t" << sizeof(double) << " byte(s).\n";
	cout << "Float size: \t" << sizeof(float) << " byte(s).\n";
	cout << "Char size: \t" << sizeof(char) << " byte(s).\n\n";

	return 0;
}

