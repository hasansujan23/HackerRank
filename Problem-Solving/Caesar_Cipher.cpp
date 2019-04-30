#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    string s;
    cin>>s;
    cin>>k;

    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z')
            printf("%c",(((s[i]-'A')+k)%26)+'A');
        else if(s[i]>='a' && s[i]<='z')
            printf("%c",(((s[i]-'a')+k)%26)+'a');
        else
            printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}
