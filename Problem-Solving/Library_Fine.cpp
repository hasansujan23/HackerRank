#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d1,m1,y1,d2,m2,y2;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;

    int fine=0;

    if(y1>y2){
        fine=(y1-y2)*10000;
    }
    else if(y1<y2){
        fine=0;
    }
    else if(m1>m2)
        fine=(m1-m2)*500;
    else if(m1<m2)
        fine=0;
    else if(d1>d2)
        fine=15*(d1-d2);
    else
        fine = 0;

    cout<<fine<<endl;
    return 0;
}
