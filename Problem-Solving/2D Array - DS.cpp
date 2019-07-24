#include<bits/stdc++.h>
using namespace std;

int a[6][6];
int fx[]={0,-1,1,-1,-1,1,1};
int fy[]={0,0,0,1,-1,1,-1};

int sum(int x1,int y1){
    int ck=0;
    for(int i=0;i<7;i++){
        int x2=x1+fx[i];
        int y2=y1+fy[i];
        ck+=a[x2][y2];
    }
    return ck;
}

int main()
{
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>a[i][j];
        }
    }

    int mx=-10000;
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            mx=max(mx,sum(i,j));
        }
    }

    cout<<mx<<endl;

    return 0;
}
