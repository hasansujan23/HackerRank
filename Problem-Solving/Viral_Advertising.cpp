#include<bits/stdc++.h>
using namespace std;

int liked(int n){
    int sum=0;
    int l=0,v=5;
    for(int i=1;i<=n;i++){
        l=floor(v/2);
        sum+=l;
        v=l*3;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<liked(n)<<endl;
    return 0;
}
