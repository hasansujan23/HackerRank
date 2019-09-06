#include<bits/stdc++.h>
using namespace std;

struct node{
    long long x,y;
    node(long long _x,long long _y){
        x=_x;
        y=_y;
    }
    node(){}
};

bool operator < (node a,node b){
    return a.y<b.y;
}


vector<node>v;

long long minLoss(){
    sort(v.begin(),v.end());

    long long sz=v.size();

    long long mn=99999999999999999;

    for(long long i=1;i<sz;i++){
        if(v[i-1].x>v[i].x){
            mn=min(mn,v[i].y-v[i-1].y);
        }
    }

    return mn;
}

int main()
{
    long long n;
    cin>>n;

    for(long long i=0;i<n;i++){
        long long x;
        cin>>x;
        v.push_back(node(i+1,x));
    }

    cout<<minLoss()<<endl;

    return 0;
}
