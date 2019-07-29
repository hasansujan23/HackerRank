#include<bits/stdc++.h>
using namespace std;

int valid(string s){
    //int ck=0;
    stack<char>st;

    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return 0;
            }
            else{
                char c=st.top();
                if((s[i]==')' && c=='(') || (s[i]=='}' && c=='{') || (s[i]==']' && c=='[')){
                    st.pop();
                }
                else{
                    return 0;
                }
            }
        }
    }


    if(st.empty())
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(valid(s)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
