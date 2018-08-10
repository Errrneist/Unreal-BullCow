/* 
Hongjun Wu
20180710
A program that plays the bull and cow game.
*/

#include <iostream> // Include standard stuff

using namespace std;

int main(){
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to bulls and cows, a fun word game!" << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I am thinking of?\n";
	return 0;
}


