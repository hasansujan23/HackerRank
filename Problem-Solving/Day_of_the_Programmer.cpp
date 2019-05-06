#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin>>y;
    if(y<=1917){
        if(y%4==0){
            cout<<256-244<<".09."<<y<<endl;
        }else{
            cout<<256-243<<".09."<<y<<endl;
        }
    }else{
        if(y==1918){
            cout<<(256-243)+13<<".09."<<y<<endl;
        }
        else if((y%4==0 && y%100!=0)||(y%400)==0){
            cout<<256-244<<".09."<<y<<endl;
        }else{
            cout<<256-243<<".09."<<y<<endl;
        }
    }
    return 0;
}
