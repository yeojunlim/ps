#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

int N;
int s,e;
vector<pair<int,int>> meetings,room;

bool cmp(const pair<int,int>& i,const pair<int,int>& j) { return (i.second!=j.second)?i.second<j.second:i.first<j.first; }

int main()
{
    room.push_back(make_pair(0,0));
    scanf("%d",&N);
    for (int i=0;i<N;i++)
    {
        scanf("%d %d",&s,&e);
        meetings.push_back(make_pair(s,e));
    }
    // 빨리 끝나는 순
    sort(meetings.begin(),meetings.end(),cmp);

    for (int i=0;i<N;i++)
    {
        if (room[room.size()-1].second <= meetings[i].first)
        {
            room.push_back(meetings[i]);
        }
    }

    printf("%lu\n",room.size()-1);

    return 0;
}