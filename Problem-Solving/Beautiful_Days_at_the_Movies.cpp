#include<bits/stdc++.h>
using namespace std;

int rev(int x,int m){
    int temp=x;
    string s=to_string(x);
    string s1;
    for(int i=s.size()-1;i>=0;i--){
        s1+=s[i];
    }
    int n=stoi(s1);
    int ck=0;
    if(abs(temp-n)%m==0)
        ck=1;
    else
        ck=0;
    return ck;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    for(int i=a;i<=b;i++){
        if(rev(i,c))
            sum++;
    }

    cout<<sum<<endl;
    return 0;
}
