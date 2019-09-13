#include<bits/stdc++.h>
using namespace std;
#define M 110

int cell[M][M];
int row=0;
int col=0;

int fx[]={-1,1,0,0};
int fy[]={0,0,-1,1};

bool valid(int x,int y,int val){
    if(x>=0 && x<row && y>=0 && y<col && (cell[x][y]>=val || cell[x][y]==-1)){
        return true;
    }
    return false;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    cin>>n;

    row=col=n;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<n;j++){
            cell[i][j]=s[j]-'0';

        }
    }

    for(int i=1;i<n-1;i++){
        for(int j=1;j<n-1;j++){
            int ck=1;

            for(int k=0;k<4;k++){
                int tx=i+fx[k];
                int ty=j+fy[k];

                if(valid(tx,ty,cell[i][j])){
                    ck=0;
                    break;
                }
            }

            if(ck==1){
                cell[i][j]=-1;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(cell[i][j]==-1){
                cout<<"X";
            }
            else{
                cout<<cell[i][j];
            }
        }
        cout<<endl;
    }

    return 0;
}
