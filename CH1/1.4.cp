#include <iostream>
using namespace std;

main(){
	int distance;
	int time;
	int acceleration = 32;

	cout << "\n";
	cout << "How much time in seconds is the object falling?\n";
	cin  >>  time;

	distance = ((acceleration *(time * time))/2);

	cout << "The object will fall " << distance << " feet.";
	
	cout << "\n";
	return 0;
}	
