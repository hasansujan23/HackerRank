#include<bits/stdc++.h>
using namespace std;
long long arra[5];
int main()
{
    long long x,sum=0,mn=0,mx=0,ck=0;
    for(int i=0;i<5;i++){
        cin>>x;
        sum+=x;
        arra[i]=sum;
    }
    mn=arra[4];
    for(int i=0;i<5;i++){
        if(i==0)
            ck=arra[4]-arra[0];
        else
            ck=arra[4]-(arra[i]-arra[i-1]);

        if(ck<mn)
            mn=ck;
        if(ck>mx)
            mx=ck;
    }

    cout<<mn<<" "<<mx<<endl;
    return 0;
}
