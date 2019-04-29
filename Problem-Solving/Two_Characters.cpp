#include<bits/stdc++.h>
using namespace std;
int strValidate(string s1);

int removeChar(string s1,char c1,char c2){
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=c1 && s1[i]!=c2){
            s1.erase(i,1);
            i=-1;
        }
    }

    int ck=strValidate(s1);
    if(ck==0)
        return ck;
    else
        return s1.size();

}

int strValidate(string s1){
    int ck=1;
    for(int i=0;i<s1.size()-1;i++){
        if(s1[i]==s1[i+1]){
            ck=0;
            break;
        }
    }

    return ck;
}

int main()
{
    map<char,int>mp;
    map<char,int>::iterator it,it1;
    vector<char>v;
    int ck=0,mx=0;
    int n;
    cin>>n;

    string s,sc;
    cin.ignore();
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }

        for(it=mp.begin();it!=mp.end();it++){
            v.push_back((*it).first);
        }

        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                sc=s;
                ck=removeChar(sc,v[i],v[j]);
                if(ck>mx)
                    mx=ck;
            }
        }
        cout<<mx<<endl;
    return 0;
}
