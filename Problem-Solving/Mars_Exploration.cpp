#include<bits/stdc++.h>
using namespace std;

int marsExploration(string s){
    int ck=0;
    for(int i=0;i<s.size()-2;i+=3){
        if(s[i]!='S')
            ck++;
        if(s[i+1]!='O')
            ck++;
        if(s[i+2]!='S')
            ck++;
    }

    return ck;
}

int main()
{
    string s;
    cin>>s;
    cout<<marsExploration(s)<<endl;
    return 0;
}
