#include <stdio.h>
 
#define new_sizeof(var) (char *)(&var+1) - (char *)(&var)
 
int main() {
    int i;
    double f;
 
    printf("Integer size from sizeof : %d bytes\n", sizeof(i));
    printf("Integer size from my_sizeof : %d bytes\n", new_sizeof(i));
    printf("Float size from sizeof : %d bytes\n", sizeof(f));
    printf("Float size from my_sizeof : %d bytes\n", new_sizeof(f));
    return 0;
}
