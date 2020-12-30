### mult
* picture

![](picture/mult.png)
* code

```
@5
D=A
@0
M=D
@5
D=A
@1
M=D
@2
M=0
(loop)
@1
D=M
@exit
D;JEQ
@0
D=M
@2
M=M+D
@1
M=M-1       
@loop
0;JMP
(exit)
@exit
0;JMP
```