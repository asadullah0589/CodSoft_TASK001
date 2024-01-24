#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	int random_val,guess;

	srand(time(0));

	random_val = rand() % 10;

	int i = 0;

	cout << "Guess the random value between 1 and 10:";

	do {
		cout << "\nGuess " << i+1 << " :";
		cin >> guess;
		i++;

	} while (guess != random_val);

		cout << "Congratulation you have guess the correct number in " << i << " times";

	
	
	return 0;


}