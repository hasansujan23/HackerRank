#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>v){
    int sz=v.size();

    int mx=0;
    int area=0;
    int i=0;

    stack<int>s;

    while(i<sz){
        if(s.empty() || v[s.top()]<=v[i]){
            s.push(i++);
        }
        else{
            int top=s.top();
            s.pop();

            if(s.empty()){
                area=v[top]*i;
            }
            else{
                area=v[top]*(i-s.top()-1);
            }

            mx=max(mx,area);
        }
    }

    while(!s.empty()){
        int top=s.top();
        s.pop();

        if(s.empty()){
            area=v[top]*i;
        }
        else{
            area=v[top]*(i-s.top()-1);
        }

        mx=max(mx,area);
    }
    return mx;
}

int main()
{
    int n;
    vector<int>v;

    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<maxArea(v)<<endl;

    return 0;
}
