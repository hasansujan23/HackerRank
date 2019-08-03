#include<bits/stdc++.h>
using namespace std;

bool valid(vector<int>v,vector<int>v1,int k){
    for(int i=0,j=v1.size()-1;i<v.size(),j>=0;i++,j--){
        if(v[i]+v1[j]<k)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        vector<int>v;
        vector<int>v1;

        int n,k;
        cin>>n>>k;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v1.push_back(x);
        }

        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());

        if(valid(v,v1,k)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
