#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    vector<int>v;
    int sum=0,sum2=0,ck=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(y==1){
            sum+=x;
            ck++;
            v.push_back(x);
        }else{
            sum2+=x;
        }
    }


    sort(v.begin(),v.end());

    if(k>=ck){
        cout<<sum+sum2<<endl;
    }else{
        for(int i=0;i<ck-k;i++){
            sum-=(2*v[i]);
        }
        cout<<sum+sum2<<endl;
    }

    return 0;
}
