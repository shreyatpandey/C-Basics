/*const pointer gets stored in read-only part of data segment, that is .ro segment. */
/*Changing the value will through an exception. So make use of pointer to change const variable*/

#include<stdio.h> 
#include<stdlib.h> 
int main() 
{ 
    const int var = 10; 
  
    int *ptr = &var; 
    *ptr = 12; 
  
    printf("var = %d\n", var); 
  
    return 0; 
} 
