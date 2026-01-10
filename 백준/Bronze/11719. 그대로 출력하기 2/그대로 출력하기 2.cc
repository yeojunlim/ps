#include <cstdio>

int main()
{
    char input[101];
    for (int i = 0; i < 100; i++) {
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;
        }
        printf("%s", input);
    }
    return 0;
}
