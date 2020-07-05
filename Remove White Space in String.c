#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char BufArray[256] = " Hi World Dirty";
    int iSpaceIndex = 0;
    int LoopCounter = 0;
    for ( ; LoopCounter<strlen(BufArray);LoopCounter++)
    {
        if ( BufArray[LoopCounter] != ' ')
        {
            BufArray[iSpaceIndex++] = BufArray[LoopCounter];
        }
    }
    BufArray[iSpaceIndex] = '\0';
    printf("BufArray:%s\n",BufArray);

    return 0;
}
