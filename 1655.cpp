#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, k;
    int lv, gv;
    priority_queue<int> ls;
    priority_queue<int, vector<int>, greater<int>> gr;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> k;
        if (ls.size() == gr.size()) ls.push(k);
        else gr.push(k);

        if (!gr.empty() && gr.top() < ls.top())
        {
            lv = ls.top();
            gv = gr.top();
            ls.pop();
            gr.pop();
            ls.push(gv);
            gr.push(lv);
        }

        cout << ls.top() << '\n';
    }

    return 0;
}