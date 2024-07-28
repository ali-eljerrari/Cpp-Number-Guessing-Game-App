#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main(){
	cout << "Please choose a number between 1 and 10..." << endl;

	int userNumber;

	cin >> userNumber;

	cout << "The user chosen number is: " << userNumber << endl;

	// Seed the random number generator
	std::srand(std::time(0)); // Seed with current time to ensure different results each run

	// Generate and print a random number in the range [1, 10]
	int computerNumber = std::rand() % 10 + 1; // Generate a number from 1 to 10

	cout << "The computer chosen number is: " << computerNumber << endl;

	cout << "Comparing results..." << endl;

	if (userNumber == computerNumber){
		cout << "Win! You guessed right." << endl;
	}else{
		cout << "Loss! You guessed wrong." << endl;
	}
}
