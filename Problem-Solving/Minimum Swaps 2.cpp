#include<bits/stdc++.h>
using namespace std;

#define M 100010

int orgArray[M];
int sortArray[M];

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        orgArray[i]=x;
        sortArray[i]=x;
    }

    sort(sortArray,sortArray+n);

    int ck=0;

    for(int i=0;i<n;i++){
        if(orgArray[i]!=sortArray[i]){
            int temp=orgArray[i]-1;

            swap(orgArray[i],orgArray[temp]);
            ck++;
            i--;
        }
    }

//    for(int i=0;i<n;i++){
//        cout<<orgArray[i]<<" ";
//    }

    cout<<ck<<endl;

    return 0;
}
