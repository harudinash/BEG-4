#include <stdio.h>

int main()
{
   int a,b=1,c=0,e,f,i,g,h;
   char s[100000],d[100000];
   printf("Input :");
   for(i=0;i<100000;i++)
   s[i]='\0';
   gets(s);
   printf("Output :");
   for(f=0;s[f]!='\0';f++);
   for(i=0;i<f;i++)
   {
       if(s[i]==' ')
       c++;
   }
   printf("%d",c);
    return 0;
}
