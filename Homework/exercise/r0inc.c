/*
R0 = 0
while(1)
{
    R0 = R0 + 1
}
*/

#include <stdio.h>
void main()
{
    int R0 = 1;
    //while(1)
    //{
    LOOP:
        R0 = R0 + 1;
        if(R0 == 10) 
            goto EXIT;
        printf("R0 = %d\n", R0);
        goto LOOP;
    //}
    EXIT:
}