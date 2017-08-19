#include <iostream>
using namespace std;

int main(){

	float stereoSystemCost = 1000;
	float interest = 0;
	float totalInterest = 0;
	float numberOfYears;
	double month = 0;
	char repeat;


	cout << "LOAN SCHEDULE\n";
	cout << "\n";
		
		while(stereoSystemCost > 0){
			interest = (stereoSystemCost * .015) + interest;
			stereoSystemCost -= 50;

			month++;
		}
		numberOfYears = month/12; 

		cout.setf(ios::fixed);
    	cout.setf(ios::showpoint);
    	cout.precision(2);
		cout << "The number of years that it will take to pay off the loan is " << numberOfYears << " years. \n";
		cout << "The total amount payed in interest is $" << interest << "\n";
		cout << "\n";

	return 0;
}