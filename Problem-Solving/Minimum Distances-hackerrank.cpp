#include<bits/stdc++.h>
using namespace std;

struct node{
    int x,y;
    node(int _x,int _y){
        x=_x;
        y=_y;
    }
    node(){}
};

bool operator < (node a,node b){
    return a.x<b.x;
}

void minDistance(vector<node>v){
    int mn=INT_MAX;
    int sz=v.size()-1;
    sort(v.begin(),v.end());

    for(int i=0;i<sz;i++){
        if(v[i].x==v[i+1].x){
            mn=min(mn,abs(v[i].y-v[i+1].y));
        }
    }

    if(mn==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<mn<<endl;
    }
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector<node>v;
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v.push_back(node(x,i));
    }

    minDistance(v);

    return 0;
}


