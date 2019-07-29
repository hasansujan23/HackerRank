#include<bits/stdc++.h>
using namespace std;

stack<int>st1;
stack<int>st2;

void popValue(){
    if(!st2.empty()){
        st2.pop();
    }
    else{
        if(st1.empty()){
            //continue;
        }
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            st2.pop();
        }
    }
}

void topValue(){
    if(!st2.empty()){
        cout<<st2.top()<<endl;
    }
    else{
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        cout<<st2.top()<<endl;
    }
}

int main()
{
    int t;
    cin>>t;

    for(int k=0;k<t;k++){
        int x;
        cin>>x;

        if(x==1){
            int y;
            cin>>y;
            st1.push(y);

        }

        if(x==2)
            popValue();
        if(x==3)
            topValue();
    }

    return 0;
}
