#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1[3],a2[3],a=0,b=0;
    for(int i=0;i<3;i++)
        cin>>a1[i];
    for(int i=0;i<3;i++)
        cin>>a2[i];
    for(int i=0;i<3;i++){
        if(a1[i]>a2[i])
            a++;
        else if(a2[i]>a1[i])
            b++;
        else
            continue;
    }
    cout<<a<<" "<<b<<endl;

    return 0;
}
