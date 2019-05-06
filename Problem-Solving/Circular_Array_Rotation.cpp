#include<bits/stdc++.h>
using namespace std;

//int a[100005];
deque<int>d;
deque<int>::iterator it;

int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        d.push_back(x);
    }

    for(int i=0;i<k;i++){
        int temp=d.back();
        d.pop_back();
        d.push_front(temp);
    }

    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        cout<<d.at(x)<<endl;
    }
    return 0;
}
