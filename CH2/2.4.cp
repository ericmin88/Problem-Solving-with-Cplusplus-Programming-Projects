#include <iostream>
using namespace std;

int main(){

	float amountWanted = 0;
	float interestRate = 0;
	float durationOfTheLoan = 0;
	float loanAmount = 0;
	float monthlyPayment;
	char repeat;

	cout << "CONSUMER LOAN PROGRAM\n";
	cout << "\n";
	do{
		cout << "How much does the consumer need? \n";
		cin >> amountWanted;
		cout << "What is the interest rate in percent? \n";
		cin >> interestRate;
		cout << "What is the duration of the loan in months? \n";
		cin >> durationOfTheLoan;

		interestRate = interestRate/100;

		durationOfTheLoan = durationOfTheLoan/12;

		loanAmount = (amountWanted/(1-(interestRate*durationOfTheLoan)));

		monthlyPayment = loanAmount/(durationOfTheLoan*12);

		cout.setf(ios::fixed);
    	cout.setf(ios::showpoint);
    	cout.precision(2);
		cout << "The loan amount needs to be $" << loanAmount << "\n";
		cout << "The monthly payment will be $" << monthlyPayment << "\n";
		cout << "\n";
		cout << "Would you like to enter other amounts? (Y/N)";
		cin >> repeat;
	}while(repeat == 'y'|| repeat == 'Y');

	return 0;
}

