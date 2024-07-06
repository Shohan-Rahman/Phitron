#include <stdio.h>
int char_to_ascii(char x)
{
    return x; 
}
int main()
{
    char n;
    scanf("%c",&n);
    int p=char_to_ascii(n);
    printf("%d",p);
    return 0;
}