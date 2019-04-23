#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=i;j<n;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}
