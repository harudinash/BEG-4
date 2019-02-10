#include <stdio.h>

#include <string.h>

 

void swap(int*, int *);

 

void main()

{

int a,b;

printf("\nInput : ");

scanf("%d %d",&a,&b);

printf("\nOutput : \n");

swap(&a, &b); 

printf("\n%d %d",a,b);
}

void swap(int *x, int *y)

{

*x = *x ^ *y;

*y = *x ^ *y;

*x = *x ^ *y;

}
