#include<bits/stdc++.h>
using namespace std;

int a[1010];

int main()
{
    int n,x,mx=99999;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        a[i]=x;
        mx=min(mx,x);
    }
    int sum=0,ck=0;
    vector<int>v;
    for(int j=0;j<n;j++){
        int temp=99999;
        for(int i=0;i<n;i++){
            if(a[i]>0){
                a[i]=a[i]-mx;
                sum++;
                if(a[i]>0)
                    temp=min(temp,a[i]);
            }else{
                ck++;
            }
        }
        if(ck==n)
            break;

        v.push_back(sum);
        sum=0;
        ck=0;
        mx=temp;
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}
