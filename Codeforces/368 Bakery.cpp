#include "iostream"
using namespace std;
const int N = 100005;
const int inf = 1000000007;
bool vis[N];
int u[N],v[N],l[N];
int main()
{
    int n,m,k,i,a,ans=inf;
    scanf("%d%d%d",&n,&m,&k);
    for(i=0;i<m;i++)
        scanf("%d%d%d",&u[i],&v[i],&l[i]);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a);
        vis[a]=true;
    }
    for(i=0;i<m;i++)
        if((vis[u[i]]&&!vis[v[i]])||(!vis[u[i]]&&vis[v[i]]))
            ans=min(ans,l[i]);
    if(ans!=inf)
        printf("%d\n",ans);
    else
        puts("-1");
    return 0;
}