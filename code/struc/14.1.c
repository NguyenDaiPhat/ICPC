#include<stdio.h>
typedef struct
{
    int ngay, thang, nam;
}ntn;
void nhap(ntn *sv)
{
        static int dd=0;
        dd++;
        printf("nhap ngay thu %d\n",dd);
        do{
            printf("nhap nam (>0) ");
            scanf("%d",&sv->nam);
        }while(sv->nam<=0);
        do{
            printf("nhap thang (>=1 va <=12) ");
            scanf("%d",&sv->thang);
        }while(!(sv->thang>=1 && sv->thang<=12));
        int d=1;
        printf("nhap ngay ");
        do{
            scanf("%d",&sv->ngay);
            if(sv->ngay<=0)printf("nhap lai ngay(>0) ");
            else{
                if(sv->thang==2) {
                    if (sv->ngay>29){d=1;printf("nhap lai(thang 2 <= 29ngay) ");}
                    else d=0;
                }
                else if(sv->thang==4 || sv->thang==6 || sv->thang==9 || sv->thang==11 ){
                    if(sv->ngay>30){d=1;printf("nhap lai(thang %d <= 30ngay) ",sv->thang);}
                    else d=0;
                }
                else{
                    if(sv->ngay>31){d=1;printf("nhap lai(thang %d <= 31ngay) ",sv->thang);}
                    else d=0;
                }
            }
        }while(d==1);
}
int sosanh(ntn sv, ntn sv1)
{
    int kq;
    if (sv.nam < sv1.nam)
        kq = -1;
    else if (sv.nam > sv1.nam)
        kq = 1;
    else if (sv.thang < sv1.thang)
        kq = -1;
    else if (sv.thang > sv1.thang)
        kq = 1;
    else if (sv.ngay < sv1.ngay)
        kq = -1;
    else if (sv.ngay > sv1.ngay)
        kq = 1;
    else
        kq = 0;
    return kq;
}
int main()
{
    ntn sv,sv1;
    nhap(&sv);
    nhap(&sv1);
    int n=sosanh(sv,sv1);
    if(n==0)printf("trung ngay");
    else if(n==1)printf("ngay 1 sau ngay 2");
    else printf("ngay 1 truoc ngay 2");
    return 0;
}
