#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,c=0;
    cin>>n;
    while(n--)
    {
        cin>>x;

         if(x>=90&&x<=100)
        {
            cout<<"Student "<<c+1<<": "<<"A+"<<endl;
            c+=1;
        }
                else if(x>=80&&x<=89)
        {
            cout<<"Student "<<c+1<<": "<<"A"<<endl;
            c+=1;
        }
                else if(x>=70&&x<=79)
        {
            cout<<"Student "<<c+1<<": "<<"A-"<<endl;
            c+=1;
        }
                else if(x>=60&&x<=69)
        {
            cout<<"Student "<<c+1<<": "<<"B+"<<endl;
            c+=1;
        }
                else if(x>=50&&x<=59)
        {
            cout<<"Student "<<c+1<<": "<<"B-"<<endl;
            c+=1;
        }
                else if(x>=40&&x<=49)
        {
            cout<<"Student "<<c+1<<": "<<"C"<<endl;
            c+=1;
        }
            else if(x>=35&&x<=39)
        {
            cout<<"Student "<<c+1<<": "<<"D"<<endl;
            c+=1;
        }
            else
        {
            cout<<"Student "<<c+1<<": "<<"F"<<endl;
            c+=1;
        }
    }
    return 0;
}
