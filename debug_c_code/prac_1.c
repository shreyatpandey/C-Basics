#include <stdio.h>
int main(void)
{
int ref[] = {8, 4, 0, 2};
int *ptr;
int index;
for (index = 0, ptr = ref; index < 4; index++, ptr++)
{
  printf("%d %d\n", ref[index], *ptr); //same output :- 8 8, 4 4,0 0,2 2
  printf("Address of each:%p\n",(void *)&ptr);
}
 return 0;
}

Output:-
8 8                                                                                                                     
Address of each:0x7ffeb9798bc8                                                                                          
4 4                                                                                                                     
Address of each:0x7ffeb9798bc8                                                                                          
0 0                                                                                                                     
Address of each:0x7ffeb9798bc8                                                                                          
2 2                                                                                                                     
Address of each:0x7ffeb9798bc8 

