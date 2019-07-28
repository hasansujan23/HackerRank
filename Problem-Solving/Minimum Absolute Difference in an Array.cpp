#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a[100010];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    long long mn=9999999999;

    for(int i=0;i<n-1;i++){
        mn=min(mn,abs(a[i]-a[i+1]));
    }

    cout<<mn<<endl;

    return 0;
}
