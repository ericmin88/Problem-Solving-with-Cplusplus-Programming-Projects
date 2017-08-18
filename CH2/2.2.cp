#include <iostream>
using namespace std;

main(){
	float previousAnnualSalary = 0;
	float newAnnualSalary = 0;
	float sixMonth = 0;
	float retroActiveSixMonth = 0;
	const float increase = .076;
	float monthly = 0;


	cout << "\n";
	cout << "What is the previous annual salary: \n";
	cin >> previousAnnualSalary;

	sixMonth = (previousAnnualSalary / 2);
	retroActiveSixMonth = sixMonth * increase;
	newAnnualSalary = previousAnnualSalary + retroActiveSixMonth;
	monthly = newAnnualSalary / 12;

	cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
	cout << "\n";
	cout << "The retroactive pay is: $" << retroActiveSixMonth <<"\n";
	cout << "The new annual salary is: $" << newAnnualSalary << "\n";
	cout << "The new monthly pay is: $" << monthly << "\n";
	cout << "\n";
}
