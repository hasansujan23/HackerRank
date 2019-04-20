#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arra[100][100],sum1=0,sum2=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arra[i][j];
        }
    }
    for(int i=0,j=n-1;i<n;i++,j--){
        sum1+=arra[i][i];
        sum2+=arra[i][j];
    }
    cout<<abs(sum1-sum2)<<endl;
    return 0;
}
