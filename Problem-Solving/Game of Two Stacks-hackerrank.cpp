#include<bits/stdc++.h>
using namespace std;

int score(vector<int> a, vector<int> b, int x) {
    int sum = 0,i=0,j=0,ii=a.size(),jj=b.size() , cnt=0;
    while(i<ii && sum+a[i]<=x)
        sum+=a[i++];
    cnt = i;
    while(i>=0 && j<jj)
        {
            sum+=b[j++];
            while(sum>x && i>0)
                sum-=a[--i];
            if(sum<=x && (i+j)>cnt)
                cnt = i+j;
        }
    return cnt;
}

int main()
{

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        vector<int>v1;
        vector<int>v2;

        int n,m,k;
        cin>>n>>m>>k;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v1.push_back(x);
        }

        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            v2.push_back(x);
        }

        cout<<score(v1,v2,k)<<endl;
    }
    return 0;
}
