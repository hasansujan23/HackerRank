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
    int mx=0,sum=0;
    for(int i=1;i<=100;i++){
        if(a[i]>0){
            sum+=a[i];
        }
        mx=max(mx,a[i]);
    }
    cout<<abs(sum-mx)<<endl;
    return 0;
}
