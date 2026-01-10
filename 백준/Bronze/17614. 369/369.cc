#include <cstdio>
#include <string>

int N,ans;

int main()
{
        scanf("%d",&N);

        for (int i=0;i<=N;i++)
        {
                std::string s = std::to_string(i);
                for (auto c : s)
                {
                        if (c == '3' || c == '6' || c == '9')
                        {
                                ans++;
                        }
                }
        }
        printf("%d\n", ans);

        return 0;
}