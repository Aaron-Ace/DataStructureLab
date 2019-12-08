//|--------------------|
//|	Made By Aaron-Ace  |
//|----410721303-------|
//|--------------------|
//|----0908-226-963----|
//|--------------------|
//|-ALLRIGHTS RESERVED-|
//|--------------------|

#include<iostream>
#include<algorithm>

using namespace std;

class data
{
    public:
        int x,y,k;
} ;

int n,m,tot,maxn,fa[305];

int find(int x)
{
    if(fa[x]==x)return x;
    return fa[x]=find(fa[x]);
}
bool cmp(data x,data y)
{
    return x.k<y.k;
}
int main()
{
    data e[10000];
    for(int i=1; i<=300; i++)
    {fa[i]=i;}
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        cin>>e[i].x>>e[i].y>>e[i].k;
    }

    cout<<n-1<<" ";
    sort(e,e+m,cmp);
    for(int i=1; i<=m; i++)
        if(find(e[i].x)!=find(e[i].y)) {
            fa[find(e[i].x)]=find(e[i].y);
            tot++;
            maxn=e[i].k;
            if(tot==n-1)
                break;
        }
    cout<<maxn;
}