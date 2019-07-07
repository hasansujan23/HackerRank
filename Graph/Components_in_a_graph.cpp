#include<bits/stdc++.h>
using namespace std;
#define M 50010

vector<long long>v[M];
long long visit[M];

long long bfs(long long s){
    queue<long long>q;
    q.push(s);
    visit[s]=1;
    long long ck=0;

    while(!q.empty()){
        long long u=q.front();
        q.pop();

        for(long long i=0;i<v[u].size();i++){
            long long p=v[u][i];
            //ck++;
            if(visit[p]==0){
                visit[p]=1;
                ck++;
                q.push(p);
            }
        }
    }
    return ck+1;
}

//void dfs(long long s){
//    if(visit[s]==1)
//        return;
//    visit[s]=1;
//    for(long long i=0;i<v[s].size();i++){
//        component[s]++;
//        dfs(v[s][i]);
//    }
//}

int main()
{
    long long n,e,mx=0,mn=INT_MAX;
    cin>>e;
    for(long long i=0;i<e;i++){
        long long x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for(long long i=1;i<=2*e;i++){
        if(visit[i]==0){
            long long temp=bfs(i);
            mx=max(mx,temp);
            if(temp>1){
                mn=min(mn,temp);
            }
            //cout<<temp<<endl;
        }
    }

    cout<<mn<<" "<<mx<<endl;

    return 0;
}

