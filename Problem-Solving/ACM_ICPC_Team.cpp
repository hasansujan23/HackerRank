#include<bits/stdc++.h>
using namespace std;

int a[550];

int main()
{
    string s[510];
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            string s1,s2;

            s1=s[i];
            s2=s[j];
            //cout<<s1<<" "<<s2<<endl;
            sum=0;
            for(int k=0;k<m;k++){
                if(s1[k]=='1' || s2[k]=='1'){
                    sum++;
                }
            }
            //cout<<sum<<endl;
            a[sum]++;

        }
    }
    int ck=0,mx=0;
    for(int i=1;i<=500;i++){
        if(a[i]!=0){
            mx=i;
            ck=a[i];
        }
    }

    cout<<mx<<endl;
    cout<<ck<<endl;

    return 0;
}
