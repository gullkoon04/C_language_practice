#include <stdio.h>

int main(void)
{
    int i;
    FILE* fp = fopen("data.txt", "wt");
    for(i=0; i<26; i++)
    {
        fputc('A'+i, fp);
    }
    fputs("\nHello World!", fp);
    return 0;
}