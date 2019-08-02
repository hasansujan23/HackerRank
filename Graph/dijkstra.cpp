#include<bits/stdc++.h>
using namespace std;

#define M 3010

long long cost[M][M];
long long v[M][M];

struct pr{
    long long x,y;
    pr(long long _x,long long _y){
        x=_x;
        y=_y;
    }
    pr(){}
};

bool operator < (pr a,pr b){
    return a.y>b.y;
}

void dijkstra(long long s,long long n){
    long long dist[M];
    long long visit[M];

    for(long long i=0;i<=n;i++){
        dist[i]=9999999999999;
        visit[i]=0;
    }

    priority_queue<pr>pq;
    dist[s]=0;
    visit[s]=1;

    pq.push(pr(s,dist[s]));

    while(!pq.empty()){
        pr top= pq.top();
        pq.pop();

        long long u=top.x;

        for(long long i=1;i<=n;i++){

            if(v[u][i]==1){
                if((dist[u]+cost[u][i])<dist[i]){
                    dist[i]=dist[u]+cost[u][i];
                    pq.push(pr(i,dist[i]));
                    visit[i]=1;
                }
            }

        }
    }

     for(long long i=1;i<=n;i++){
            if(i!=s){
                if(visit[i]==1){
                    cout<<dist[i];
                }
                if(visit[i]==0){
                    cout<<"-1";
                }

                if(i<n){
                    cout<<" ";
                }
            }
        }
        cout<<endl;
}


int main()
{
    long long t;
    cin>>t;

    for(long long k=0;k<t;k++){
        long long n,m;
        cin>>n>>m;

        for(long long i=0;i<m;i++){
            long long x,y,c;
            cin>>x>>y>>c;

            v[x][y]=1;
            v[y][x]=1;
            if(cost[x][y]==0 || cost[y][x]==0){
                cost[x][y]=c;
                cost[y][x]=c;
            }
            else{
                cost[x][y]=min(cost[x][y],c);
                cost[y][x]=min(cost[y][x],c);
            }
        }

        long long s;
        cin>>s;

        dijkstra(s,n);

        for(long long i=0;i<=n;i++){
            for(long long j=0;j<=n;j++){
                cost[i][j]=0;
                v[i][j]=0;
            }
        }
    }

    return 0;
}
