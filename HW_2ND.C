#include<stdio.h>
void main()
{
int a,b,i,j,n=0,c=0,e=0,t=0,h;
clrscr();
scanf("%d%d",&a,&b);
//printf("%d ",a);
t=a;
n=0;
for(i=a;i<b;i++)
 {
  c=0;
  e=0;
  if(i>1)
  {
  //printf(" %d",i);
  for(j=2;j<i;j++)
   { h=i%j;
    if(h==0)
     {
      c=1;
      break;
      }
     }
   if((c==0)||(i==2))
    {
      printf(" f=%d ",t);
     printf(" p=%d ",i);




 t=t+n;
 n=t-n;
   }
   }
}
   getch();


	     }

