#include <stdio.h>

// Function to implement strcmp function
int strcmp(const char *X, const char *Y)
{
	while(*X)
	{
		// if characters differ or end of second string is reached
		if (*X != *Y)
			break;

		// move to next pair of characters
		X++;
		Y++;
	}

	// return the ASCII difference after converting char* to unsigned char*
	return *(const unsigned char*)X - *(const unsigned char*)Y;
}

// Implement strcmp function in C
int main()
{
	char *X = "Techie";
	char *Y = "Tech";

	int ret = strcmp(X, Y);
	
	if (ret > 0)
		printf("%s", "X is greater than Y");
	else if (ret < 0)
		printf("%s", "X is less than Y");
	else
		printf("%s", "X is equal to Y");

	return 0;
}
