#include<bits/stdc++.h>
using namespace std;

int a[26];

int maxSize(){
    int mx=0;
    for(int i=0;i<26;i++){
        mx=max(mx,a[i]);
    }
    return mx;
}

int maxNumber(){
    int mx=0,ck=0,val=0;
    for(int i=0;i<26;i++){
        if(a[i]>0){
            for(int j=0;j<26;j++){
                if(a[i]==a[j]){
                    ck++;
                }
            }
            if(ck>mx){
                mx=ck;
                val=a[i];
            }
            ck=0;
        }
    }

    int var=0;

    for(int i=0;i<26;i++){
        if(a[i]==val){
            var+=a[i];
        }
        if(a[i]>val){
            var+=val;
        }
    }

    return var;
}

int main()
{
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++;
    }

    int mx=max(maxSize(),maxNumber());

    int num=s.size()-mx;

    if(num<=1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
