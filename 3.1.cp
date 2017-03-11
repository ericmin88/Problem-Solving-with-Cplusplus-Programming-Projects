#include <iostream>
using namespace std;

main(){
	char userOne;
	char userTwo;


	cout << "\n";
	cout << "ROCK PAPER SCISSORS\n";

	cout << "\n";
	cout << "R: rock\n";
	cout << "P: Paper\n";
	cout << "S: Scissors\n";
	cout << "\n";

	cout << "User One's turn\n";
	cin  >>  userOne;

	cout << "User Two's turn\n";
	cin  >>  userTwo;

    if (userOne == 'R' || userOne == 'r' && userTwo == 'S' || userTwo == 's'){
   		cout << "User one chose " << userOne << ", user two chose " << userTwo <<"\n";
    	cout << userOne << " beats " << userTwo << "\n";
    	cout << "User one wins";
    	cout << "\n";
    }else if(userOne == 'P' || userOne == 'p' && userTwo == 'R' || userTwo == 'r'){
    	cout << "User one chose " << userOne << ", user two chose " << userTwo <<"\n";
    	cout << userOne << " beats " << userTwo << "\n";
    	cout << "User one wins";
    	cout << "\n";
    }else if(userOne == 'S' || userOne == 's' && userTwo == 'P' || userTwo == 'p'){
    	cout << "User one chose " << userOne << ", user two chose " << userTwo <<"\n";
    	cout << userOne << " beats " << userTwo << "\n";
    	cout << "User one wins";
    	cout << "\n";
    }else{
    	cout << "User one chose " << userOne << ", user two chose " << userTwo <<"\n";
    	cout << userTwo << " beats " << userOne << "\n";
    	cout << "User two win";
    	cout << "\n";
    }
	cout << "\n";
	return 0;
}	