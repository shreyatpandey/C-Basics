/*Length of string using pointers */
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *input_string = "Hello World";
	int length_string = 0;
	while(*input_string != '\0')
	{
		length_string += 1;
		*input_string++;
	}
	printf("Length of string:%ld\n",length_string);
	
}
