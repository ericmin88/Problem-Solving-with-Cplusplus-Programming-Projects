#include <iostream>
using namespace std;

int main(){

	double inflationRate = 0;
	double PriceOfItem= 0;
	int years = 0;
	char repeat;


	cout << "PAYCHECK WITHHOLDINGS\n";
	cout << "\n";
	do{
		cout << "What is the price of the item now? (in dollars) \n";
		cin >> PriceOfItem;
		cout << "What is the inflation rate? (as a percent number) \n";
		cin >> inflationRate;
		cout << "How many years in the future will the item be purchased? \n";
		cin >> years;

		inflationRate = inflationRate / 100;
		
		for(int i = 1; i <= years ;i++){
			PriceOfItem = (PriceOfItem * inflationRate) + PriceOfItem;
		}

		cout.setf(ios::fixed);
    	cout.setf(ios::showpoint);
    	cout.precision(2);
		if(years == 1){
			cout << "After" << years << " year the price of the item will be $" << PriceOfItem << "\n";
		}
		else{
			cout << "After " << years << " years the price of the item will be $" << PriceOfItem << "\n";
		}

		cout << "\n";
		cout << "Would you like to enter other amounts? (Y/N)\n";
		cin >> repeat;
	}while(repeat == 'y'|| repeat == 'Y');

	return 0;
}

