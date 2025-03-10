#include <stdio.h>

void  main() 
{
    int a,b,n;
    printf("length\n");
    scanf("%d",&n);
    a=1;b=1;
    if (n<=0) printf("Invalid input");
       if(n==1) printf("%d",a);
    if(n==2) printf("%d %d",a,b);
    if(n>2)
    {
        int c=0;
        printf("%d ",a);
        for(int i=3;i<=n;i++)
        {
            c=a+b;a=b;b=c;
            if(b%2==0)
            continue;
            else 
            if (a%2==1)
            printf("%d ",a);
            
        }
        if(b%2==1)
         printf("%d ",b);
        }
}
