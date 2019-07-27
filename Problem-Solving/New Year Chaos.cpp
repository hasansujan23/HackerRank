#include<bits/stdc++.h>
using namespace std;
#define M 100010

int a[M];
void initiat(){
    for(int i=0;i<M;i++){
        a[i]=0;
    }
}

int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n;
        cin>>n;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[i]=abs((x-1)-i);
        }

        int ck=0;
        int c1=0,c2=0,c0=0;

        for(int i=0;i<n;i++){
            if(a[i]>2){
                ck=1;
                break;
            }

            if(a[i]==1)
                c1++;
            if(a[i]==2)
                c2++;
            if(a[i]==0)
                c0++;
        }

        if(ck==1){
            cout<<"Too chaotic"<<endl;
        }else{
            if(c0==n)
                cout<<"0"<<endl;
            else
                cout<<(c1/2)+c2<<endl;
        }

        initiat();
    }
    return 0;
}
