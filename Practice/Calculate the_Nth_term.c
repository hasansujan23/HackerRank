#include<stdio.h>
int a[100];
int sum(int i,int x,int y,int z){
     if(i==x)
        return x;
     if(i==y)
        return y;
     if(i==z)
        return z;
     return sum(i-1,x,y,z)+sum(i-2,x,y,z)+sum(i-3,x,y,z);
}

int main()
{
    int n,a,b,c,ck=0;
    scanf("%d",&n);
    scanf("%d%d%d",&a,&b,&c);
    ck=sum(n,a,b,c);
    printf("%d\n",ck);
    return 0;
}
