#include <cstdio>

int N,opened;
char PS[51];

int main()
{
    scanf("%d",&N);
    for (int i=0;i<N;i++)
    {
        scanf("%s",PS);
        for (char j:PS)
        {
            if (j == '\0') break;
            else if (opened<0)
            {
                opened=1;
                break;
            }
            else if (j=='(') ++opened;
            else if (j==')') --opened;
        }
        printf("%s\n",(opened==0)?"YES":"NO");
        opened=0;
    }
}