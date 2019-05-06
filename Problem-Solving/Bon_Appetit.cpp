#include<bits/stdc++.h>
using namespace std;

int a[100005];

int main()
{
    int n,k,x,sum=0;
    cin>>n>>k;

    for(int i=1;i<=n;i++){
        cin>>x;
        sum+=x;
        a[i]=sum;
    }

    int c;
    cin>>c;

    int pay=((a[n]-a[k+1])+a[k])/2;
    if(pay==c){
        cout<<"Bon Appetit"<<endl;
    }else{
        cout<<abs(c-pay)<<endl;
    }
    return 0;
}
