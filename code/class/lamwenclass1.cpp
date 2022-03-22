#include<bits/stdc++.h>
using namespace std;
///nhap xuat class
///nap chong toan tu operator
class sv
{
private:
    string ten,masv;
    double diem;
public:
    friend istream& operator >> (istream& in,sv &a);
    friend ostream& operator << (ostream& out,sv a);
    ///bool operator < (sv a);
    friend bool operator < (sv a, sv b);
};
bool operator < (sv a, sv b)
{
    return a.diem<b.diem;
}
///bool sv::operator< (sv a)
///{
///    return diem<a.diem;   /// this->diem<a.diem;
///}
istream& operator >> (istream& in, sv& a)
{
    cin.ignore();
    cout<<"nhap id ";
    getline(in,a.masv);
    cout<<"nhap ten ";
    getline(in,a.ten);
    cout<<"nhap diem ";
    in>>a.diem;
    return in;
}
ostream& operator << (ostream& out, sv a)
{
    cout<<"id la: "<<a.masv<<endl<<"ten la: "<<a.ten<<endl<<"diem la: "<<fixed<<setprecision(2)<<a.diem;
    return out;
}
int main()
{
    int n; cin>>n;
    sv a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(sv x:a){
        cout<<x<<" ";
    }
    return 0;
}
