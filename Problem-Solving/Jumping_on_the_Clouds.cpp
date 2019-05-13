#include<bits/stdc++.h>
using namespace std;

int a[110];

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>a[i];
    int sum=0;
    int i=0;
    while(1){
        if((i+2)<n && a[i+2]!=1){
            i+=2;
            sum++;
            //cout<<i<<endl;
        }else if((i+1)<n && a[i+1]!=1){
            i++;
            sum++;
            //cout<<i<<endl;
        }
        else
            i++;
        if(i>=n)
            break;
    }
    cout<<sum<<endl;
    return 0;
}
