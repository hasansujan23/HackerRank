#include<bits/stdc++.h>
using namespace std;

int a[26];
vector<int>v;

void validate(string s){
    int cnt=1;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            cnt++;

        }else{

            cnt=1;
            //i=i-1;
        }
        a[s[i]-'a']=max(a[s[i]-'a'],cnt);
    }
}

int main()
{
    string s;
    cin>>s;
    s+='#';
    validate(s);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,ck=0;
        cin>>x;
        for(int i=0;i<26;i++){
            if(x%(i+1) == 0){
                int r = x/(i + 1);
                if(r <= a[i]){
                    ck = 1;
                    break;
                }

            }
        }
        if(ck==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        ck=0;
    }

    return 0;
}
