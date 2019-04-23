#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        if(m<38)
            cout<<m<<endl;
        else{
            if((((m/5)+1)*5)-m<3)
                cout<<((m/5)+1)*5<<endl;
            else
                cout<<m<<endl;
        }
    }
    return 0;
}
