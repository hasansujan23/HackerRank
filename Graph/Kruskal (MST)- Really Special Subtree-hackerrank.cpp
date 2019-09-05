#include<bits/stdc++.h>
using namespace std;
#define M 3010

int parent[M];
int ranks[M];

struct node{
    int x,y,c;
    node(int _x,int _y,int _c){
        x=_x;
        y=_y;
        c=_c;
    }
    node(){}
};

bool operator < (node a,node b){
    return a.c<b.c;
}


vector<node>v;

void initialize(int n){
    for(int i=0;i<=n;i++){
        parent[i]=i;
        ranks[i]=0;
    }
}

int findParent(int x){
    if(x!=parent[x])
        return parent[x]=findParent(parent[x]);
    else
        return x;
}

void setUnion(int x,int y){
    int px=findParent(x);
    int py=findParent(y);

    if(px==py)
        return;

    if(ranks[px]>ranks[py]){
        parent[py]=px;
    }
    else if(ranks[py]>ranks[px]){
        parent[px]=py;
    }
    else{
        parent[py]=px;
        ranks[px]++;
    }
}

int krushkal(int n){
    initialize(n);

    sort(v.begin(),v.end());
    int sum=0;
    int sz=v.size();
    for(int i=0;i<sz;i++){
        int px=findParent(v[i].x);
        int py=findParent(v[i].y);

        if(px!=py){
            setUnion(v[i].x,v[i].y);
            sum+=v[i].c;
        }
    }
    return sum;
}


int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int x,y,c;
        cin>>x>>y>>c;
        v.push_back(node(x,y,c));
    }

    cout<<krushkal(n)<<endl;

    return 0;
}
