#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,s=0;
    printf("enter the no.");
    scanf("%d",&a);
    while(a!=0)
    {
        s=s*10;
        s=s+ a%10;
        a=a/10;
    }
    printf("reverse of no. is %d",s);
    return 0;

}
