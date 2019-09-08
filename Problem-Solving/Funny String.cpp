#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    int sz=s.size();

    for(int i=0,j=sz-1;i<sz-1,j>0;i++,j--){
        if(abs((s[i]-'a')-(s[i+1]-'a'))!=abs((s[j]-'a')-(s[j-1]-'a'))){
            return false;
        }

    }
    return true;
}

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        cin>>s;

        if(check(s))
            cout<<"Funny"<<endl;
        else
            cout<<"Not Funny"<<endl;
    }

    return 0;
}
