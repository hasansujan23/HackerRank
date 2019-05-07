#include<bits/stdc++.h>
using namespace std;

int a[100];

int main()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }

    for(int i=0;i<100;i++){
        cout<<a[i];
        if(i<99)
            cout<<" ";
    }
    cout<<endl;
    return 0;
}
