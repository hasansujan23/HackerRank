#include<bits/stdc++.h>
using namespace std;

int b[3][3];

int main()
{
    int a[8][3][3]={
        {
            {8,1,6},{3,5,7},{4,9,2}
        },
        {
            {6,1,8},{7,5,3},{2,9,4}
        },
        {
            {4,9,2},{3,5,7},{8,1,6}
        },
        {
            {2,9,4},{7,5,3},{6,1,8}
        },
        {
            {8,3,4},{1,5,9},{6,7,2}
        },
        {
            {4,3,8},{9,5,1},{2,7,6}
        },
        {
            {6,7,2},{1,5,9},{8,3,4}
        },
        {
            {2,7,6},{9,5,1},{4,3,8}
        }
    };

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    int mn=100,sum=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                //cout<<a[i][j][k]<<" ";
                sum+=(abs(a[i][j][k]-b[j][k]));
            }
            //cout<<endl;
        }
        mn=min(mn,sum);
        sum=0;
        //cout<<endl;
    }

    cout<<mn<<endl;

    return 0;
}
