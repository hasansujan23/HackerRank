#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            s.erase(i,2);
            if(s.size()==0)
                break;
            i=-1;
        }
    }

    if(s.size()!=0)
        cout<<s<<endl;
    else
        cout<<"Empty String"<<endl;
    return 0;
}
