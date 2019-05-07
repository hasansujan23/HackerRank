#include<bits/stdc++.h>
using namespace std;

int a[30];

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int e=100;
    int i=0;
    if(a[0]==0)
        e--;
    else
        e-=3;
    while(1){
        i=i+k;
        if(i>=n)
            break;
        else{
            if(a[i]==0){
                e--;
                //cout<<e<<endl;
            }

            else{
                 e-=3;
                 //cout<<e<<endl;
            }
        }
    }
    cout<<e<<endl;
    return 0;
}
