#include <bits/stdc++.h>
using namespace std;

bool comp(int a ,int b){

        return (a<b);

}


int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int f1=a+b*c;
    int f2=a*(b+c);
    int f3=a*b*c;
    int f4=(a+b)*c;

    cout<<max({f1,f2,f3,f4},comp)<<endl;


}
