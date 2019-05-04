#include<bits/stdc++.h>
using namespace std;

int a[6];

int main()
{

    int n,x,ck=0,mx=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }

    for(int i=1;i<=5;i++){
        if(a[i]>mx){
            mx=a[i];
            ck=i;
        }
    }

    cout<<ck<<endl;

    return 0;
}
