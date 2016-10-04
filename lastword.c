#include <stdio.h>

int lengthOfLastWord(char* str)
{
	// TO DO: Your code here
	return 0;
}

int main()
{
	char* str = "I want you to remember the one man who beat you";
	char* empty = "";

	if(lengthOfLastWord(str) == 3 && lengthOfLastWord(empty) == 0)
	{
		printf("Correct! You have completed the recitation.\n");
	}
	else
	{
		printf("Incorrect result.\n");
	}

	return 0;
}