#include<stdio.h>
int snt(int n)
{
    if(n<2)return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return 0;
    else return 1;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a=1,b=1,c=0;
    //int i=1;
    while(1){

        if(c>n)
        {if(c<m) printf("%d ",c);
        else break;}
        c=a+b;
        b=a;a=c;

    }
    //printf("%d");
    //printf("%d",a);
    return 0;
}
