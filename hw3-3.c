#include <stdio.h>

    int digitk(int n)
{
    int k=0;
    while (n>0)
{
    k += n%10;
    n /=10;
    }
    return k;
}
    int main()
 {
    int a, b;
    scanf("%d %d", &a, &b); 
    int kA = digitk(a);
    int kB = digitk(b);
     if (kA<kB||(kA==kB&&a<b)
{
        printf("%d", a);
}
else 
{
        printf("%d", b);
}
}