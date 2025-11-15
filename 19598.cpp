#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

int N;
int s,e;
int room=0,cnt=0;
vector<pair<int,int>> meetings;
vector<pair<int,int>> graph;

int main()
{
    scanf("%d",&N);
    for (int i=0;i<N;i++)
    {
        scanf("%d %d",&s,&e);
        meetings.push_back(make_pair(s,e));
        graph.push_back(make_pair(s,1));
        graph.push_back(make_pair(e,-1));
    }
    sort(graph.begin(),graph.end());

    for (int i=0;i<N*2;i++)
    {
        room+=graph[i].second;
        cnt=(room>cnt)?room:cnt;
    }

    printf("%d\n",cnt);

    return 0;
}