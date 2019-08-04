#include <stdio.h>
#include<string.h>
#include<stdlib.h>

void reverse_words(char *input_string,int start_index,int final_index)
{
    char temp;
    while(start_index < final_index)
    {
        temp = input_string[start_index];
        input_string[start_index] = input_string[final_index];
        input_string[final_index] = temp;
        start_index += 1;
        final_index -= 1;
    }
}

void reverse_string(char *input_string)
{
    char *temp_string = input_string;
    int length_index = 0;
    int i =0;
    while(input_string[i] != '\0')
    {
        if(input_string[i] == ' ')
        {
            reverse_words(input_string,length_index,i-1);
            length_index = i + 1;
        }
        i++;
            
    }
    reverse_words(input_string,length_index,i-1);
}

int main()
{
    char input_string[] = "Hello World Cat";
    reverse_string(input_string);
    printf("reverse_string:%s\n",input_string);
    return 0;
}
//Output:
//reverse_string:olleH dlroW taC       
