#include<bits/stdc++.h>
using namespace std;
#define M 10010

struct node{
    int x,y;
    node(int _x,int _y){
        x=_x;
        y=_y;
    }
    node(){}
};

bool operator < (node a,node b){
    return a.y<b.y;
}

void solve(vector<node>v,int k){
    int l=0;
    int h=v.size()-1;

    sort(v.begin(),v.end());

    while(l<=h){
        if(v[l].y+v[h].y==k)
            break;
        else if(v[l].y+v[h].y>k)
            h--;
        else
            l++;
    }

    int x=v[l].x;
    int y=v[h].x;

    if(x>y)
        swap(x,y);

    cout<<x<<" "<<y<<endl;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>m>>n;
        vector<node>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(node(i+1,x));
        }

        solve(v,m);

    }
    return 0;
}
