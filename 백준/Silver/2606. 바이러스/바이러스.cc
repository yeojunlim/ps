#include <cstdio>
#include <vector>
#define MAXC 101

using namespace std;

int C,P;
int A,B;
vector<int> graph[MAXC];

bool v[MAXC];
int dfs(int node)
{
    int cnt=1;
    v[node]=1;

    for (int n : graph[node])
    {
        if (!v[n])
        {
            cnt+=dfs(n);
        }
    }
    return cnt;
}

int main()
{
    scanf("%d\n%d", &C, &P);
    for (int i=0;i<P;i++)
    {
        scanf("%d %d", &A, &B);
        graph[A].push_back(B);
        graph[B].push_back(A);
    }

    printf("%d\n", dfs(1)-1);

    return 0;
}
