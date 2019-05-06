#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>a>>b>>c;
            if(abs(a-c)==abs(b-c))
                cout<<"Mouse C"<<endl;
            else if(abs(a-c)<abs(b-c))
                cout<<"Cat A"<<endl;
            else
                cout<<"Cat B"<<endl;
    }

    return 0;
}
