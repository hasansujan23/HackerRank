#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3;
    int n,ck;
    cin>>s1;
    s2=s1[0];
    s2+=s1[1];
    //cout<<s2<<endl;
    n=atoi(s2.c_str());
    if(s1[8]=='A'){
        if(n==12)
            s3="00";
        else{
            if(n>9)
                s3=to_string(n);
            else{
                s3="0";
                s3+=to_string(n);
            }
        }
        }
        else{
            if(n==12)
                s3="12";
            else
               s3=to_string(n+12);
        }
    for(int i=2;i<8;i++)
    {
        s3+=s1[i];
    }
    cout<<s3<<endl;
    return 0;
}
