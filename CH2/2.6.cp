#include <iostream>
using namespace std;

int main(){

	float workedHoursInWeek  = 0;
	float overTimepay = 0;
	float grossPay = 0;
	float socialSecurity = 0;
	float federalIncomeTax = 0;
	float stateIncomeTax = 0;
	float takeHomePay = 0;
	int numberOfDependents = 0;
	char repeat;


	cout << "PAYCHECK WITHHOLDINGS\n";
	cout << "\n";
	do{
		cout << "How many hours were worked? \n";
		cin >> workedHoursInWeek;
		cout << "How many dependents does the employee have? \n";
		cin >> numberOfDependents;
		
		if(workedHoursInWeek > 40){
			overTimepay = (workedHoursInWeek - 40) * (16.78 * 1.5);

		}else{
			overTimepay = 0;
		}
		grossPay = (40 * 16.78) + overTimepay;
		socialSecurity = grossPay * .06;
		federalIncomeTax = grossPay * .14;
		stateIncomeTax = grossPay * .05;

		cout.setf(ios::fixed);
    	cout.setf(ios::showpoint);
    	cout.precision(2);
		cout << "Gross Pay: $" << grossPay << "\n";
		cout << "Social Security: $" << socialSecurity << "\n";
		cout << "Federal Income Tax: $" << federalIncomeTax << "\n";
		cout << "State Income Tax: $" << stateIncomeTax << "\n";
		cout << "Union Dues: $10.00 \n";
		if(numberOfDependents >= 3){
			cout << "Dependent Withholdings: $35.00 \n"; 
			takeHomePay = grossPay - (socialSecurity + federalIncomeTax + stateIncomeTax + 10.00 + 35.00);
			cout << "Take Home Pay: $" << takeHomePay << "\n";

		}else{
			cout << "Dependent Withholdings: $00.00 \n";
			takeHomePay = grossPay - (socialSecurity + federalIncomeTax + stateIncomeTax + 10.00);
			cout << "Take Home Pay: $" << takeHomePay << "\n";
		}

		cout << "\n";
		cout << "Would you like to enter other amounts? (Y/N)\n";
		cin >> repeat;
	}while(repeat == 'y'|| repeat == 'Y');

	return 0;
}

