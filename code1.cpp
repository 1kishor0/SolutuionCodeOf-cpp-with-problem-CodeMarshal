#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int t=10;
    while(t--)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }

else{
    long long int d=n%10;
    n=n/10;
    double mul=0;
    mul=(n-(5*d))%17;

    if(mul==0)
    {
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
}


    }
}
