/**************************************************************************
 * *Author: Paul Leone
 * *Date: 1/20/2019
 * *Description: This program asks the uder how many integers they would
 * 		 like to enter. The program will then display the largest
 * 		 and smallest of those numbers.
 *************************************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	//Declare integer variables
	int min;
	int max;
	int number = 1;
	
	//Declare user input values
	int userAmount;
	int userValue;
	int counter = 0;

	//Ask user for number of integers
	cout << "How many integers would you like to enter?\n";
	cin >> userAmount;

	//Ask user for the amount of integers given
	cout << "Please enter " << userAmount << " integers.\n";
	
	//run for loop that starts from number >=1 then checks
	//for min and max values against each user value.
	for (int number = 1; number <= userAmount; number++)
	{
		//Ask for user input value
		cin >> userValue;

		//check if userValue is less than min
		//then set userValue as min
		if (counter == 0)
		{
			max = userValue;
			min = userValue;
		}
		else
		{
			if (userValue < min)
				min = userValue;
			else if (userValue > max)
				max = userValue;
		}
		counter++;
	}
	
	//Print min and max value
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;

	return 0;
}
