#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long b,w,bc,wc,z,t;

    cin>>t;
    for(int i=0;i<t;i++){
        long long sum=0,ck=0;
        cin>>b>>w;
        cin>>bc>>wc>>z;
        if(bc==wc){
            sum=(b*bc)+(w*wc);
        }
        else if(z>bc && z>wc){
            sum=(b*bc)+(w*wc);
        }
        else{
                if(bc>wc){
                    if(bc<(wc+z))
                        sum=(b*bc)+(w*wc);
                    else
                        sum=(b*wc)+(w*wc)+(b*z);
                }else{
                    if(wc<(bc+z))
                       sum=(b*bc)+(w*wc);
                    else
                        sum=(b*bc)+(w*bc)+(w*z);
                }
        }
        cout<<sum<<endl;
    }

    return 0;
}
