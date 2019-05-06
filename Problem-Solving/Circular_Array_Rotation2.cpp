#include<bits/stdc++.h>
using namespace std;

int a[100005];

int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    k=k%n;
    for(int i=0;i<q;i++)
     {
        int x;
        cin>>x;

        int index=(n-k+x)%n;
        cout<<a[(n-k+x)%n]<<endl;
    }
    return 0;
}
