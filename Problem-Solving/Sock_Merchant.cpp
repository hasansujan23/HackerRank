#include<bits/stdc++.h>
using namespace std;

int a[105];

int main()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }

    int ck=0;

    for(int i=1;i<=100;i++){
        if(a[i]>1){
            ck+=a[i]/2;
        }
    }

    cout<<ck<<endl;

    return 0;
}
