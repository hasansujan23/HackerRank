#include<bits/stdC++.h>
using namespace std;

int main()
{
    int n,m,s,q;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>n>>m>>s;
        cout<<((m+s-2)%n)+1<<endl;
    }
    return 0;
}
