#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    for(long long k=0;k<t;k++){
    map<long long,long long>mp;
    map<long long,bool>mp1;
    map<long long,long long>::iterator it;
    vector<long long>v;
    long long n,c;
    cin>>n>>c;

    for(long long i=0;i<c;i++){
        long long x;
        cin>>x;
        mp[x]=i;
        mp1[x]=true;
        v.push_back(x);
    }

    //sort(v.begin(),v.end());

    long long a,b;

    for(long long i=0;i<v.size();i++){
        long long temp=n-v[i];

        if(temp>0){
            if(mp1[temp] && mp[temp]!=i){
               a=i;
               b=mp[temp];
               break;
            }
        }
    }

    if(a>b)
        swap(a,b);

    cout<<a+1<<" "<<b+1<<endl;

    }
    return 0;
}
