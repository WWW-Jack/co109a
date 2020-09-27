### Not 
* picture

![](picture/Not.png)
* code

```
Nand(a=in, b=in, out=out);
```
### And
* picture

![](picture/And.png)
* code

```
Nand(a=a, b=b, out=AnandB);
Not(in=AnandB, out=out);
```
### Or
* picture

![](picture/Or.png)
* code

```
Not(in=a, out=na);
Not(in=b, out=nb);
Nand(a=na, b=nb, out=out);
```
