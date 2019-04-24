#include<bits/stdc++.h>
using namespace std;


int main()
{
    int x1,x2,v1,v2;
    cin>>x1>>v1;
    cin>>x2>>v2;
    if((x2>x1 && v2>v1)||(x2>x1 && v2==v1))
        cout<<"NO"<<endl;
    else{
        if(abs(x1-x2)%abs(v1-v2)==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
