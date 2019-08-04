#include<bits/stdc++.h>
using namespace std;
#define M 1000010

vector<int>v[M];
int dist[M];
int visit[M];
int node[M];
map<int,int>mp;

void bfs(int s,int a,int n){
    visit[s]=1;
    dist[s]=0;

    queue<int>q;
    int mn=INT_MAX;
    q.push(s);

    while(!q.empty()){
        int u=q.front();
        q.pop();

        for(int i=0;i<v[u].size();i++){
            int p=v[u][i];

            if(visit[p]==0){
                visit[p]=1;
                dist[p]=dist[u]+1;
                q.push(p);

                if(node[p]==a){
                    mn=min(mn,dist[p]);
                }
            }
        }
    }

    cout<<mn<<endl;
}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        mp[x]++;
        node[i]=x;
    }

    int a;
    cin>>a;

    if(mp[a]>1){
        int s=0;

        for(int i=1;i<=n;i++){
            if(node[i]==a){
                s=i;
                break;
            }
        }

        bfs(s,a,n);
    }
    else{
        cout<<"-1"<<endl;
    }

    return 0;
}
