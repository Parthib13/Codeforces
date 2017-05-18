#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int a, b, i;
    char s[105];
    scanf("%s", s);
    b = strlen(s);

    for (a = 0; a < b; ++a)
        s[a] = tolower(s[a]);
    for(a = 0; a < b; ++a) {
        if(s[a] == 'a' || s[a] == 'e' || s[a] == 'i' || s[a] == 'o' || s[a] == 'u' || s[a] == 'y')
            continue;
                printf(".%c", s[a]);
    }

    return 0;

}
