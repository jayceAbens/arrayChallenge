#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
	int array[100];
	int evenOddArray[100];
	int tempArrayElement;

	srand(time(0));

	cout << "Unsorted Array: \n";
	for (int i = 0; i < 100; i++)
	{	
		array[i] = rand();
		cout << array[i] << endl;
	}

	//sorting algorithm goes through each element of the array and compares it to every other.
	for (int i = 0; i < 100; i++)
	{
		for (int j = i + 1; j < 100; j++)
		{
			if (array[j] < array[i]) // comparison between two array elements is made, if first is greater than second, the values are swapped
			{
				tempArrayElement = array[i]; // the first integer of the comparison is stored in a temporary variable
				array[i] = array[j]; //the first element is set as the second element
				array[j] = tempArrayElement; // the second element is set as the first element
			}
		}
	}

	cout << "\n\nSorted Array: \n";
	for (int i = 0; i < 100; i++)
	{
		cout << array[i] << endl;
	}


	return 0;
}