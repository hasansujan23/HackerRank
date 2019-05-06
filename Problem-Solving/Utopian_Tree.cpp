#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,sum=1;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n==0)
            cout<<1<<endl;
        else{
            for(int i=1;i<=n;i++){
                if(i&1)
                    sum*=2;
                else
                    sum+=1;
            }
            cout<<sum<<endl;
            sum=1;
        }
    }
    return 0;
}
