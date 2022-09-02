#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b,t,a,res=0,res2=0,res3=0;
    cin>>t;
    for(int j=1;j<=t;j++)

    {
        int stp;
        cin>>stp;

    for(int i=1;i<stp;i++)
    {

        cin>>a>>b;
        res=a;
       res2=(res2+res)-b;
       if(res3<res2){
        res3=res2;

       }

    }

        cout<<"Case "<<j<<": "<<res3<<endl;
res2=0;
res3=0;


    }

}
