#include<bits/stdc++.h>
using namespace std;
#define M 11

int cell[M][M];
int visit[M][M];
int row=0,col=0;
int res=0;

int fx[]={-1,-1,-1,0,0,1,1,1};
int fy[]={0,-1,1,-1,1,0,-1,1};

bool valid(int x,int y){
    if(x>=0 && x<row && y>=0 && y<col && cell[x][y]==1){
        return true;
    }
    return false;
}

void dfs(int sx,int sy){
    visit[sx][sy]=1;
    res++;

    for(int i=0;i<8;i++){
        int tx=sx+fx[i];
        int ty=sy+fy[i];

        if(valid(tx,ty) && visit[tx][ty]==0){
            dfs(tx,ty);
        }
    }
}

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    row=n,col=m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>cell[i][j];
        }
    }

    int mx=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(visit[i][j]==0 && cell[i][j]==1){
                dfs(i,j);
                mx=max(mx,res);
                res=0;
            }
        }
    }

    cout<<mx<<endl;

    return 0;
}

