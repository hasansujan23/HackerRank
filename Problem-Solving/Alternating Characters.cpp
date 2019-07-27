#include<bits/stdc++.h>
using namespace std;

int countChar(string s){
    int ck=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1])
            ck++;
    }
    return ck;
}

int main()
{
    string s;
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        cin>>s;
        cout<<countChar(s)<<endl;
    }
    return 0;
}
