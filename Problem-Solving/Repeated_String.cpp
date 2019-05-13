#include<bits/stdc++.h>
using namespace std;

long long getCount(string s,long long len){
    long long ck=0;
    for(long long i=0;i<len;i++){
        if(s[i]=='a')
            ck++;
    }
    return ck;
}

int main()
{
    long long n,sum=0;
    string s;
    cin>>s;
    cin>>n;
    long long sz=s.size();
    if(n<=sz){
        sum=getCount(s,n);
    }
    else{
        sum=(getCount(s,sz)*(n/sz))+getCount(s,n%sz);
    }

    cout<<sum<<endl;
    return 0;
}
