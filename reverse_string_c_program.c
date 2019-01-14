#include<stdio.h>
#include<stdlib.h>

void reverse_string_and_print(char *str)
{
    char temp;
    int length = 0;
    int i=0;
    while(str[i] != '\0')
    {
        length += 1;
        i ++;
    }
    for(int j=0;j<length/2;j++)
    {
        temp = str[length-j-1];
        str[length-j-1] = str[j];
        str[j] = temp;
    }
    printf("%s", str);
}
int main()
{
  char data[] = "Hello World!";
  //char *data = "Hello World!";/*passing this as an argument will give segmentation fault*/
  reverse_string_and_print(data);
  return 0;
}
