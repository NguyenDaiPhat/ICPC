#include<bits/stdc++.h>
using namespace std;
struct sophuc
{
    int a,b;
    friend istream& operator << (istream& in, sophuc &x)
    {
        in >> x.a>> x.b;
        return in;
    }
    friend ostream& operator >> (ostream& out, sophuc x)
    {
        out<< x.a<<" "<<x.b;
        return out;
    }
    //friend
};
int main()
{
    sophuc a,b;
    cin<<a<<b;
    cout>>a<<endl>>b;
    return 0;
}
