#include <stdio.h>

int main()
{
    int a,result=0;
    scanf("%d",&a);
    while(a>1)
    {
         result=result*10+a%10; 
         a=a/10;
    }
    
    printf("%d",result);
    return 0;
}