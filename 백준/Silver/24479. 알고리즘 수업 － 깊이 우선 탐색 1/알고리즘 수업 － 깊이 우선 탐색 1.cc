#include <cstdio>
#include <set>
#define MAXN 100001
using namespace std;

int N,M,R,u,v;
set<int> graph[MAXN];
bool visited[MAXN];
int order[MAXN];
int cnt=1;

void dfs(int node)
{
    visited[node]=true;
    order[node]=cnt++;
    for (int nxt:graph[node])
    {
        if (!visited[nxt])
        {
            dfs(nxt);
        }
    }
}

int main()
{
    scanf("%d %d %d",&N,&M,&R);
    for (int i=0;i<M;i++)
    {
        scanf("%d %d",&u,&v);
        graph[u].insert(v);
        graph[v].insert(u);
    }

    dfs(R);
    for (int i=1;i<N+1;i++)
    {
        printf("%d\n", order[i]);
    }

    return 0;
}
