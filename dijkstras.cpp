#include<stdio.h>
#include<iostream>
#include<algorithm>
#define M 100001
using namespace std;
struct tree{
int num1,num2;
};
bool compare(tree lhs,tree rhs)
{
    return lhs.num1 < rhs.num1;
}
int dist[M];
int main()
{
    int n,i,j,k,l,m;
    scanf("%d %d",&n,&m);
    tree a[n];
    for(i=0;i<m;i++)
        scanf("%d %d",&a[i].num1,&a[i].num2);
    int s[n],v[n],dist[n];
    for(i=0;i<n;i++)
    {
        s[i]=-1;   // path
        v[i]=i+1;    // vertices list
        dist[i]=M;
    }
    dist[0]=0;
    int u=0;
    while(true)
    {
        for(i=0;i<n;i++)
            if(v[i]!=-1)
            break;
        if(i==n)
            break;
        // check if v is empty
        int min_v,min_i;
        for(j=0;j<n;j++)
        {
            if(v[j]!=-1 && min_v>dist[j])
                {min_v=dist[j];
                min_i=j;}
        }
        s[u]=v[min_i];
        u++;
        v[min_i]=-1;
        for(i=0;i<n;i++)
        {
        for(j=0;j<m;j++)
        {
            if(s[i]==a[j].num1)
                dist[a[j].num2]=min(dist[a[j].num2-1],dist[s[i]]);
            if(s[i]==a[j].num2)
                dist[a[j].num1]=min(dist[a[j].num1-1]+1,dist[s[i]]);
        }
        for(i=0;i<n;i++)
            printf("%d %d\n",s[i],v[i]);

        }
    }

    return 0;
}
