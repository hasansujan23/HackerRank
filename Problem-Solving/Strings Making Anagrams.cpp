#include<bits/stdc++.h>
using namespace std;

int a[26];
int b[26];

int anagram(string s,string s1){
    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++;
    }
    for(int i=0;i<s1.size();i++){
        b[s1[i]-'a']++;
    }

    int ck=0;

    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            ck+=abs(a[i]-b[i]);
        }
    }

    return ck;
}

int main()
{
    string s,s1;
    cin>>s;
    cin>>s1;
    cout<<anagram(s,s1)<<endl;
    return 0;
}
