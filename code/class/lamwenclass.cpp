#include<bits/stdc++.h>
using namespace std;
///lớp: class
///thuộc tính: attribute (thường để private)
///phương thức: method, behavior (thường để public)
///object: đối tượng
///constructor: hàm khởi tạo
///this poiter (this->a)
///-Encapsulation: đóng gói(thuộc tính, phương thức)
///-Access modifier: phạm vi thuộc tính
/// +private
/// +Public
/// +protected
///-static
///Friend function, friend class
///operator overloading
class sv{
private:
    string id, ten, ns;
    double gpa;
    static int dem;       //khong gan dem=0 dc vi day la bienstatic
public:
    ///sv();
    void xinchao();
    void dihoc();
    void nhap();
    void xuat();
    double getgpa();
    int getdem();
    int tangdem();
    ///~sv();
};
///sv::sv(){cout<<"tao\n"; }
///sv::~sv(){cout<<"huy\n";}
int sv::dem=0;
int sv::getdem()
{
    return dem;
}
int sv::tangdem()
{
    ++dem;
}
double sv::getgpa()
{
    return gpa;
}
bool cmp(sv a, sv b)
{
    return a.getgpa()>b.getgpa();
}
void sv::nhap()
{
    cin.ignore();
    cout<<"nhap id:";
    getline(cin,id);
    cout<<"nhap gpa:";
    cin>>gpa;
}
void sv::xuat()
{
    cout<<"\nid la:";
    cout<<id;
    cout<<"\ngpa la:";
    cout<<gpa;
}
void sv::xinchao(){
    cout<<"Hello\n";
}
void sv::dihoc(){
    cout<<"Dihoc\n";
}
int main()
{
    //int n; cin>>n;
    sv x,y;
    ///x.dihoc();
    ///x.xinchao();
    ///sv a[100];
    ///for(int i=0;i<n;i++)a[i].nhap();
    ///sort(a,a+n,cmp);
    ///for(int i=0;i<n;i++)a[i].xuat();
    x.tangdem();
    //x.getdem();
    cout<<y.getdem();
    return 0;
}
