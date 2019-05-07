#include<bits/stdc++.h>
using namespace std;

int divisor(int n){
    int temp=n;
    int r=0;
    int sum=0;
    while(temp!=0){
        r=temp%10;
        temp=temp/10;
        if(r!=0){
            if(n%r==0)
                sum++;
        }
    }
    return sum;
}

int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        cout<<divisor(n)<<endl;
    }
    return 0;
}
