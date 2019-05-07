#include<bits/stdc++.h>
using namespace std;

int a[1005];

int main()
{

    int v,n,i;
    cin>>v;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==v)
            break;
    }
    cout<<i<<endl;
    return 0;
}
