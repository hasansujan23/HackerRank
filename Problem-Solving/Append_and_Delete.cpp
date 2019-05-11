#include<bits/stdc++.h>
using namespace std;

int var(string s,string s1){
    int ck=0,i=0;
    int mn=0;
    mn=min(s.size(),s1.size());
    for(i=0;i<mn;i++){
        if(s[i]!=s1[i])
            break;
    }
    if(s.size()>=s1.size()){
        ck=(s.size()-i)+(s1.size()-i);
    }else{
        ck=s.size()+s1.size();
    }

    return ck;
}

int main()
{
    int n;
    string s,s1;
    int sum=0;
    cin>>s>>s1>>n;

    sum=var(s,s1);
    //cout<<sum<<endl;

    if(sum<=n)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
