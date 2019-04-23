#include<bits/stdc++.h>
using namespace std;
int arra[100001];

int main()
{
    int mx=0,n,x,ck=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>mx)
            mx=x;
        arra[i]=x;
    }
    for(int i=0;i<n;i++){
        if(arra[i]==mx)
            ck++;
    }
    cout<<ck<<endl;
    return 0;
}
