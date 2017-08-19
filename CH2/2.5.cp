#include <iostream>
using namespace std;

int main(){

	int occupancy  = 0;
	int actualOccupancy = 0;
	char repeat;

	cout << "ROOM CAPACITY FIRE LAW REGULATIONS PROGRAM\n";
	cout << "\n";
	do{
		cout << "What is the maximum occupancy? \n";
		cin >> occupancy;
		cout << "How many people are attending the meeting? \n";
		cin >> actualOccupancy;

		if(occupancy > actualOccupancy){
			occupancy = occupancy - actualOccupancy;
			if(occupancy == 1){
				cout << "You are within government regulations for occupancy. You can add " << occupancy << " more person.\n";
			}else{
				cout << "You are within government regulations for occupancy. You can add " << occupancy << " more people.\n";
			}
		}else if(occupancy < actualOccupancy){
			occupancy = actualOccupancy - occupancy;
			if (occupancy == 1){
				cout << "You are in violation of government regulations for occupancy. You need to remove " << occupancy << " person.\n";
			}else{
				cout << "You are in violation of government regulations for occupancy. You need to remove " << occupancy << " people.\n";
			}
		}else{
			cout << "The room is at maximum occupancy. No more people can be added to the meeting unless one or more people withdaw. \n";
		}

		cout << "\n";
		cout << "Would you like to enter other amounts? (Y/N)\n";
		cin >> repeat;
	}while(repeat == 'y'|| repeat == 'Y');

	return 0;
}

