#include<bits/stdc++.h>
using namespace std;

int a[10005];

int main()
{
    int n,d,sum=0;
    cin>>n>>d;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            if(abs(a[i]-a[j])==d){
                for(int k=j+1;k<n;k++){
                    if(abs(a[j]-a[k])==d){
                        sum++;
                    }
                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
