#include<bits/stdc++.h>
using namespace std;

int valleyCount(string s){
    int ck=0,sum=0;
    for(int i=0;i<s.size();i++){
            if(s[i]=='D'){
                if(sum==0){
                    ck++;
                }
                sum--;
            }else{
                sum++;
            }
    }
    return ck;
}

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<valleyCount(s)<<endl;
    return 0;
}
