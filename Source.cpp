/******************************************
* YAHYA CEYLANÝ
* 25.06.2018
* This program  creates a pyramid with factorials of numbers in an order
* Factorial calculation is performed with memoization
*******************************************/


#include<iostream>


// declare temp array to store intermediate result set
// this array will store values of calculated factorials
// if we need a calculated value we just get it from the array
// no need calculate again and again
unsigned long long int temp[100];

// function to calculate the factorial  
unsigned long long int factorial(int number) { // unsigned long long to  handle very big numbers

	if (number == 0 || number == 1) {
		return 1;
	}else {
		if (temp[number] != 0)
			return temp[number];
		else
			return temp[number] = (number * factorial(number - 1));
	} // end else, if

} // end function


int main() {

	int enteredNumber = 5;
	int counter = 1;


	for (unsigned int i = 1; i <= enteredNumber; i++){
		for (unsigned int j = 0; j < i; j++){
			std::cout << factorial(counter) << " ";
			counter++;
		} // end nested for
		std:: cout << std::endl;
	} // end for

	return 0;
}