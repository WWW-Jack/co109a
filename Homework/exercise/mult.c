#include<stdio.h>
int main()
{
    int R0=5;
    int R1=5;
    int R2=0;
    LOOP:
        if(R1==0)
            goto EXIT;
        R2+=R0;
        R1--;
        goto LOOP;
    EXIT:
        print("%d", R2);
        return 0;
}