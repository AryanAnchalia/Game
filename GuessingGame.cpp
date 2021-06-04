#include <iostream>

using namespace std;

int main()
{
	int secretnum = 7;
	
	int guess = 0;
	int guessCount = 0;
	int guessLimit = 3;
	bool outOfGuesses = false ; 
	
	while(guess != secretnum)
	{
		if(guessCount < guessLimit)
		{
			cout<<"Enter guess"<<endl;
			cin>>guess;
			guessCount++;
		
	
			if(guess == secretnum)
			{
				cout<<"You win!!"<<endl;
				break;
			}
		}
		else
		{
			cout<< "You loose";
			break;
		}
	}
	
		
	
	
	
	return 0;
}
