#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,p=0,n=0,z=0,q;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>x;
        if(x>0)
            p++;
        else if(x<0)
            n++;
        else
            z++;
    }
    printf("%0.6lf\n",(double)p/q);
    printf("%0.6lf\n",(double)n/q);
    printf("%0.6lf\n",(double)z/q);
    return 0;
}
