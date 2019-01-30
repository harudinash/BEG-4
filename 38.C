#include <stdio.h>

int main()
{
   int a[10],i,d,j,k,l,m,n;
printf("Input :");

  
for(i=0;i<10;i++)
  {
   scanf("%d",&a[i]);
   }
    printf("output :\n");
     d=1;
for(i=0;i<10;i++)
{
  for(j=i+1;j<10;j++)
    {
        if(a[i]>a[j])
        {
            m=a[i];
            a[i]=a[j];
            a[j]=m;
        }
    }
    

}
printf("%d",a[9]);
return 0;
    
}
