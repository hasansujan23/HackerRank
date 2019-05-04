#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;

    if(p-1<n-p){
        if(n==1)
            cout<<0<<endl;
        else{
            cout<<p/2<<endl;
        }
    }else{
        cout<<(n/2)-(p/2)<<endl;
    }


    return 0;
}
