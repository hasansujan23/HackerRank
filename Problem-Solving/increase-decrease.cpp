#include<bits/stdc++.h>
using namespace std;

void rec(int n){
cout<<n<<" ";
if(n<5)
    rec(n+1);
if(n<5)
    cout<<n<<" ";
}

int main()
{
    rec(1);
    return 0;
}

