#include<bits/stdc++.h>
using namespace std;

#define M 1005

vector<int>v[M];
queue<int>q;
int visit[M];
int dist[M];

void sPath(int s){
    memset(visit,0,sizeof(visit));
    memset(dist,0,sizeof(dist));

    q.push(s);
    visit[s]=1;
    dist[s]=0;

    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<v[u].size();i++){
            int p=v[u][i];
            if(visit[p]==0){
                visit[p]=1;
                dist[p]=dist[u]+6;
                q.push(p);
            }
        }
    }
}


int main()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n,e;
        cin>>n>>e;
        for(int j=0;j<e;j++){
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
            //cost[x].push_back(6);
            //cost[y].push_back(6);
        }
        int sorce;
        cin>>sorce;
        sPath(sorce);

        for(int i=1;i<=n;i++){
            if(i==sorce){
                continue;
            }
            else{
                if(dist[i]==0)
                    cout<<"-1";
                else
                    cout<<dist[i];

                if(i<n)
                cout<<" ";
            }

        }
        cout<<endl;

        for(int i=0;i<M;i++){
            v[i].clear();
            //cost[i].clear();
        }
    }
    return 0;
}
