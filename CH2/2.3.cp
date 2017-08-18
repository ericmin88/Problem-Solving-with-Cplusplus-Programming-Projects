#include <iostream>
using namespace std;

main(){
	
	const float increase = .076;
	float previousAnnual = 0;
	float previousMonthly = 0;
	float retroPay = 0;
	float retroMonths = 0;
	float newAnnualPay = 0;
	float newMonthly = 0;

	cout << "\n";
	cout << "What is the previous annual salary: \n";
	cin >> previousAnnual;
	cout << "How many months of retro active pay: \n";
	cin >> retroMonths;

	previousMonthly = previousAnnual / 12;
	retroPay = previousMonthly * retroMonths * increase;
	newAnnualPay = previousAnnual + retroPay;
	newMonthly = newAnnualPay / 12;



	cout << "\n";
	cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
	cout << "The retroactive pay is: $" << retroPay << "\n";
	cout << "The new annual pay is: $" << newAnnualPay << "\n";
	cout << "The new monthly pay is: $" << newMonthly << "\n";
	cout << "\n";

}

