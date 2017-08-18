#include <iostream>
using namespace std;

main(){
	int quarters;
	int dimes;
	int nickels;
	double total;

	cout << "\n";
	cout << "How many quarters?\n";
	cin  >>  quarters;

	cout << "How many dimes?\n";
	cin  >>  dimes;

	cout << "How many nickels?\n";
	cin  >>  nickels;

	total = (quarters * .25) + (dimes * .10) + (nickels * .05);

	cout.precision(2);
	
	cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
	cout << "The amount of money you have is: $" << total << "\n";
	
	cout << "\n";
	return 0;
}	
