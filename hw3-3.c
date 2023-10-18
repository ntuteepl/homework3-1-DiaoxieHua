#include <stdio.h>

int main(){
int a, b;
scanf("%d %d", &a, &b);
int sa= 0;
int sb= 0;
int ta=a;
int tb=b;
    while ( ta>0 ){
    sa+=ta%10;
    ta/=10;
}
    while ( tb>0 ){
    sb+=tb%10;
    tb/=10;
}
    if (sa<sb||(sa==sb&&a<b)) {
    printf("%d\n", a);
}
    else
{
    printf("%d\n", b);
}
}
