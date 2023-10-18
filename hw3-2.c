#include <stdio.h>
#include <stdlib.h>

int main()
{
int part11,part12,part21,part22,part31,part32,cars;
scanf("%d %d",&part11,&part12);
scanf("%d %d",&part21,&part22);
scanf("%d %d",&part31,&part32);
cars=1;
if(part11==part12||part21==part22||part31==part32){
        printf("格式錯誤");
}
else{
if(part12<=part21||part22<=part31||part12<=part22||part21<=part12)
{
    cars=cars+1;
}
else{
        cars=1;

}
}
printf("%d", cars);
}
