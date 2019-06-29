
#include <stdio.h>


int min(int a,int b)
{
    if(a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int count(int a,int b)
{
    int i;int m;int c=0;
    m=min(a,b);
    for(i=1;i<=m;i++)
    {
        if(a%i==0 && b%i==0)
        {
            c++;
        }
    }
    return c;

}
int main()
{
    int a,b;
    printf("\n enter the value of 1st no. a \n");
    scanf("%d",&a);
    printf("\n enter the value of 2nd no. b \n");
    scanf("%d",&b);
    if(a>=1 && b<=1000000000000)
    {
        printf("%d : is the count of common factors",count(a,b));
    }
    else
    {
        printf("\n wrong input \n");

    }
    return 0;
}
