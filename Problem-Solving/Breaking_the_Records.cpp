#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,hi=0,lw=0;
    long long mx=-1,mn=1000000001,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>mx){
            mx=x;
            hi++;
        }
        if(x<mn){
            mn=x;
            lw++;

        }
    }
    cout<<hi-1<<" "<<lw-1<<endl;
    return 0;
}
