#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,a,b;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>a>>b;
        if(a>b)
            swap(a,b);
        int sz=sqrt(b)+1;
        int sum=0;
        for(int i=1;i<sz;i++){
            if((i*i)>=a && (i*i)<=b)
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
