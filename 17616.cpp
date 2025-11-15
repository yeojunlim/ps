#include <cstdio>
#include <vector>
#define MAXN 100001

using namespace std;

int N,M,X,A,B;
bool v[MAXN]; // visited
vector<int> graph[2][MAXN]; // 정방향, 역방향 인접 리스트

int dfs(int n, int j) // n번째 요소의 child수 + 1
{
    v[n] = 1;
    int rst = 1;
    for (int i : graph[j][n])
    {
        if (!v[i])
        {
            rst += dfs(i, j);
        }
    }
    return rst;
}

int main()
{
    scanf("%d %d %d", &N, &M, &X);
    for (int i=0;i<M;i++)
    {
        scanf("%d %d", &A, &B);
        graph[0][A].push_back(B);
        graph[1][B].push_back(A);
    }
    // 1. 역방향 인접 리스트 기준 child수 + 1 (자신보다 무조건 등수가 높은 것들의 수 + 1) (자신의 최소 등수)
    // 2. N - 정방향 인접 리스트 기준 child수 + 1 (전체 - 자신보다 무조건 아래 있는것들 + 1) (자신의 죄대 등수)
    printf("%d %d\n",dfs(X,1),N-dfs(X, 0)+1);
}