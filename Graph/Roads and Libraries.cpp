#include<bits/stdc++.h>
using namespace std;
#define M 100010

vector<long long>v[M];
bool visit[M];
long long num=0;

void dfs(long long s){
    visit[s]=true;
    num++;
    for(long long i=0;i<v[s].size();i++){
        long long p=v[s][i];

        if(visit[p]==false){
            dfs(p);
        }
    }
}

int main()
{
    long long t;
    cin>>t;

    for(long long k=0;k<t;k++){
        long long n,m,l,r;
        cin>>n>>m>>l>>r;

        for(long long i=0;i<m;i++){
            long long x,y;
            cin>>x>>y;

            v[x].push_back(y);
            v[y].push_back(x);
        }

        long long sum=0;

        for(long long i=1;i<=n;i++){
            if(visit[i]==false){
                dfs(i);

                if(r>l){
                    sum+=(num*l);
                }
                if(l>r){
                    sum+=(l+(r*(num-1)));
                }
                num=0;
            }
        }

        cout<<sum<<endl;

        for(long long i=0;i<M;i++){
            v[i].clear();
            visit[i]=false;
        }

    }
    return 0;
}
