//mouse - 35 grams
//artificial sweatner to kill a mouse - 5 grams
//weight of person 45400
//soda can 350 grams
//diet soda contains 35 grams of artificial sweatner

#include <iostream>
using namespace std;

main(){
	int weight = 0;
	int weightInGrams = 0;
	float cans = 0;
	int lethal = 0;

	cout << "Enter Weight in pounds \n";
	cin >> weight;
	
	weightInGrams = weight * 454;
	lethal = weightInGrams / 7;

	cans = lethal * .35; 

	cout << "\n";
	cout << "Your weight is " << weight << "\n";
	cout << "The amount of cans of diet soda you can have before it becomes lethal is: " << cans << "\n";
}
