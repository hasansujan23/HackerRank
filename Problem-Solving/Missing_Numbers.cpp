#include<bits/stdc++.h>
using namespace std;
#define M 100005
int a[M];
int b[M];

int main()
{
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        b[x]++;
    }

    vector<int>v;
    for(int i=0;i<M;i++){
        if(a[i]!=b[i])
            v.push_back(i);
    }

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i<v.size()-1)
            cout<<" ";
    }
    cout<<endl;
    return 0;
}
