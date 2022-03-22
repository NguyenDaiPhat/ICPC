#include<stdio.h>

int main()
{
    char s[100],s1[100];
    int dem=0,dem1=0;
    gets(s);
    gets(s1);
    strlwr(s1);
    char b[100];
    strcpy(b,strrchr(s1,' ')+1);
    printf("%s%c",b,s1[0]);

    for(int i=0;i<strlen(s1);i++)
    if(s1[i]==' ')dem++;
    for(int i=0;i<strlen(s1);i++)

        if(s1[i]==' ')
            {dem1++;if(dem1<dem)printf("%c",s1[i+1]);else break;}

    printf(".%s@ptit.edu.vn",s);
    return 0;
}
