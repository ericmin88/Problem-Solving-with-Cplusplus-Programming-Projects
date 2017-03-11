#include <iostream>
using namespace std;

main(){
	int a;
	int b;
	int sum;
	int product;

	cout << "Enter a number and hit enter\n";
	cin >> a;

	cout << "Enter a second number and hit enter\n";
	cin >> b;

	sum = a + b;
	product = a * b;

	cout << "The sum of the two numbers is: " << sum << "\n";
	cout << "The product of the two numers is: " << product << "\n";
	return 0;
}