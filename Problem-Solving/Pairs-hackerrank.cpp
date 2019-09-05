#include<bits/stdc++.h>
using namespace std;
#define M 100010

int a[M];

bool binarySearch(int l,int h,int key){
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]<key){
            l=mid+1;
        }
        if(a[mid]>key){
            h=mid-1;
        }
        if(a[mid]==key){
            return true;
        }
    }
    return false;
}

int main()
{
    int n,k;
    cin>>n>>k;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    int sum=0;
    for(int i=0;i<n;i++){
        if(binarySearch(0,n-1,a[i]-k)){
            sum++;
        }
    }

    cout<<sum<<endl;

    return 0;
}
