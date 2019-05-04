#include<bits/stdc++.h>
using namespace std;

string convert(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=(s[i]-'A')+'a';
        }
    }
    return s;
}

int getLength(string s){
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'){
            mp[s[i]]++;
        }
    }
    return mp.size();
}

int main()
{
    string s,s1;
    int l=0;
    getline(cin,s);
    s1=convert(s);
    //cout<<s1<<endl;
    l=getLength(s1);
    //cout<<l<<endl;
    if(l==26)
        cout<<"pangram"<<endl;
    else
        cout<<"not pangram"<<endl;
    return 0;
}
