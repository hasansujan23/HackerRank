#include<bits/stdc++.h>
using namespace std;

string strValidation(string s){
    int ck=0;
    string s1="hackerrank";

    for(int i=0;i<s.size();i++){
        if(s1[i]!=s[ck]){
            s.erase(i,1);
            i--;
            //cout<<s<<endl;
        }
        else{
            ck++;
        }
    }

    return s;
}

int main()
{
    int q;
    string s,s1;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>s;
        s1=strValidation(s);
        if(s1=="hackerrank")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
