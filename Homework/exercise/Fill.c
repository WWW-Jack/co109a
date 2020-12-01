// WHILE1:
// int i=16384;
//     WHILE2:
//         if(i>=24576)
//             goto WEND2;
//         int color=0;
//         if(M[24576]==0)
//             goto NEXT;
//         color=-1;
//     NEXT:
//         M[i]=color;
//         i++;
//         goto WHILE2;
//     WEND2:
//     goto WHILE1;