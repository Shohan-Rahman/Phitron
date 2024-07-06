#include <stdio.h>
char small_to_capital(char x)
{
    char s=(int)x-32;
    return s;
}
int main()
{
    char n;
    scanf("%c",&n);
    char p=small_to_capital(n);
    printf("%c",p);
    return 0;
}