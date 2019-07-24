#include<bits/stdc++.h>
using namespace std;
#define M 100010

int a[M];

int main()
{
    int n,m;
    cin>>n>>m;
    m=m%n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;            /// numberOfRotation=[given rotate number % totalNumber]
        a[(n-m+i)%n]=x;   /// [totalNumber-numberOfRotation+index]%totalNumber
    }

    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i<n-1)
            cout<<" ";
    }
    cout<<endl;

    return 0;
}
