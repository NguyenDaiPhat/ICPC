#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
    for(int j=1;j<=i;j++)printf("%d",2*j-1);
    else for(int j=1;j<=i;j++)printf("%d",2*j);
    printf("\n");
    }
    return 0;
}


