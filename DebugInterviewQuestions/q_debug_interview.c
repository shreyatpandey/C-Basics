#include <stdio.h>
#include<stdlib.h>

char *copy_string(char *input_string)
{
    char *return_string = malloc(sizeof(strlen(input_string)));
    printf("input_string: %s\n",input_string); // output : HELLO
    char *ptr = return_string; // This change has to be required 
    while(*input_string != '\0')
    {
        *return_string++ = *input_string++;
        printf("input_string: %c\n",*input_string); //Output: e,l,l,o
        printf("return_string: %c\n",*return_string); //Output : empty
        
    }
    printf("return_string_after_while: %s\n",return_string);//Output: empty
    printf("input_string_after_while: %s\n",input_string); // Output: empty
    *return_string = '\0';
    printf("final_string: %s\n",ptr);
    return ptr; // Returning return_string will not achieve the desired result
}

int main()
{
    char *example_string = "Hello";
    char *disp_string = copy_string(example_string);
    printf("Final_Result: %s\n",disp_string);
    return 0;
}
