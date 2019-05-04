#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int ck=0;
    int n,k,x;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(i<j && (v[i]+v[j])%k==0)
                ck++;
        }
    }

    cout<<ck<<endl;

    return 0;
}
