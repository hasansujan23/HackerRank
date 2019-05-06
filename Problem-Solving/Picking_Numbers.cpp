#include<bits/stdc++.h>
using namespace std;

int a[105];

int main()
{
    int n,x,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }
    int mx=0;
    for(int i=1;i<100;i++){
        if(a[i]>0 && a[i+1]>0){
            sum=a[i]+a[i+1];
            mx=max(mx,sum);
        }
        else if(a[i]>0)
            mx=max(mx,a[i]);
        else
            continue;
    }

    cout<<mx<<endl;

    return 0;
}
