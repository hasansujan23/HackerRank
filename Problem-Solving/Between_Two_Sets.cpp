#include<bits/stdc++.h>
using namespace std;

int a[105],b[105];

int main()
{
    int n,m;
    vector<int>v;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        //v.push_back(a[i]);
    }
    for(int i=0;i<m;i++)
        cin>>b[i];

    sort(b,b+m);
    for(int i=1;i<=b[0];i++){
        int ck=0;
        for(int j=0;j<n;j++){
            if(i%a[j]==0){
                ck++;
            }else{
            ck=0;
            break;
            }
        }

        if(ck==n)
            v.push_back(i);
    }

    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());

    int sum=0;
    for(int i=0;i<v.size();i++){
        int c=0;
        for(int j=0;j<m;j++){
            if(b[j]%v[i]==0){
                c++;
            }
        }
        if(c==m)
            sum++;
    }

    cout<<sum<<endl;

    return 0;
}
