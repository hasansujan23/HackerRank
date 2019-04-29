#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int ck=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z')
            ck++;
    }
    cout<<ck+1<<endl;
    return 0;
}
