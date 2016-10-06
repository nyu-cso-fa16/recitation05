#include <stdio.h>

int countVowels(char* str)
{
	// TO DO: Your code here
	return 0;
}

int main()
{
	char str[32] = "We could have changed the world... now look at us...I've\
				become a political liability...and you...you're a joke...\
				I want you to remember, Clark...In all the years to come...\
				in your most private moments... I want you to remember my hand at your throat...\
				I want you to remember the one man who beat you...";

	char* empty = "";

	if(countVowels(str) == 94 && countVowels(empty) == 0)
	{
		printf("Correct! You can now move to the next exercise.\n");
	}
	else
	{
		printf("Incorrect result.\n");
	}

	return 0;
}