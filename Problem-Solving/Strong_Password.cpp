#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d=0,l=0,c=0,sp=0,n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9')
            d=1;
        else if(s[i]>='a' && s[i]<='z')
            l=1;
        else if(s[i]>='A' && s[i]<='Z')
            c=1;
        else
            sp=1;
    }
    int res=d+l+c+sp;
    if(s.size()+(4-res)<6)
        cout<<(6-(s.size()+(4-res)))+(4-res)<<endl;
    else
        cout<<4-res<<endl;

    return 0;
}
