/*
R0 = 1
while(1)
{
    R0 = R0 + 1
}
*/

#include <stdio.h>
void main()
{
    int R0 = 1;
    LOOP:
        R0 = R0 + 1;
        print("R0 = %d\n", R0);
        goto LOOP;
}