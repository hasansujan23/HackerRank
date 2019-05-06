#include<bits/stdc++.h>
using namespace std;

int a[26];

int main()
{
    int mx=0;
    for(int i=0;i<26;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        mx=max(mx,a[s[i]-'a']);
    }

    cout<<s.size()*mx<<endl;
}
