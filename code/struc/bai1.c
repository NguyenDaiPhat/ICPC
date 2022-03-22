#include<stdio.h>
typedef struct
{
    char hoten[50],gioitinh[10],kq[10];
    float py,c,dtb;
}sinhvien;
void ke()
{
    printf("|------------------------------------------------------------------|\n");
}
void tieude()
{
    printf("|         Ho ten         |Gioi tinh |Diem Py|Diem C|Diem Tb|Ket qua|\n");
}
void in()
{
    printf("|%-25s|%10s|%7.2f|%6.2f|%7.2f|%7.2f|\n",sv[i].hoten,sv[i].gioitinh,sv[i].py,sv[i].c,sv[i].dtb,sv[i].kq);
}
void menu()
{
    printf("|------------------------------------------------------------------------------|\n");
    printf("| 1.Nhap | 2.Xuat | 3.Sapxep | 4.Timkiem | 5.Dau | 6.Truot | 7.Dtb>8 | 8.Thoat |\n");
    printf("|------------------------------------------------------------------------------|\n");
}
void nhapN(int *n)
{
    do{
            printf("nhap so hoc vien: ");
            scanf("%d",n);
    }while(*n<0);
}
void nhap(sinhvien *sv, int n)
{
    fflush(stdin);
    for(int i=0;i<n;i++)
    {
        printf("nhap thong tin hoc vien thu %d",i+1);
        do{
            printf("name: ");
            gets(sv[i].hoten);
        }while(strlen(sv[i].hoten)==0);
        do{
            printf("sex: ");
            gets(sv[i].gioitinh);
        }while(strcmp(sv[i].gioitinh,"Nam")==0 || strcmp(sv[i].gioitinh,"Nu")==0);
        do{
            printf("diem C: ");
            scanf("%f",&sv[i].c);
        }while(!(sv[i].c>=0 && sv[i].c<=10));
        do{
            printf("diem C: ");
            scanf("%f",&sv[i].c);
        }while(!(sv[i].c>=0 && sv[i].c<=10));
    }
}
void tb(sinhvien *sv,int n)
{
    for(int i=0;i<n;i++)
        sv[i].dtb=(sv[i].c*2+sv[i].py)/3;
}
void kq(sinhvien *sv, int n)
{
    for(int i=0;i<n;i++)
    if(strcmp(sv[i].gioitinh,"Nu")==0)strcpy(sv[i].kq,"Dau");
    else{
        if(sv[i].dtb>=5)strcpy(sv[i].kq,"Dau");
        else strcpy(sv[i].kq,"Truot");
    }
}
void xuat(sinhvien *sv, int n)
{
    ke();
    tieude();
    for(int i=0;i<n;i++)in();
    ke();
}
void sapxep(sinhvien *sv,int n)
{
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    if(sv[i].dtb<sv[j].dtb){
        sinhvien tg=sv[i];
        sv[i]=sv[j];
        sv[j]=tg;
    }
}
void timkiem(sinhvien *sv, int n)
{
    printf("Nhap ten hoc vien can tim: ");
    char s[50];
    int d=0;
    gets(s);
    for(int i=0;i<n;i++)if(strcmp(s,sv[i].hoten)==0){d=1;break;}
    if(d==1)
    {
        ke();tieude();
        for(int i=0;i<n;i++)
        if(strcmp(s,sv[i].hoten)==0)in();
        ke();
    }
    else printf("khong co hoc vien nao\n")
}
void dau(sinh vien *sv, int n)
{
    printf("nhung hoc sinh dau la: ");
    for(int i=0;i<n;i++)
}
int main()
{

    return 0;
}
