//while dongusu koşul belirtildigi sürece çalışır
//for döngüsünden farkı koşul sağlanmazsa hiç çalışmaz
#include <stdio.h>
int main(){
    int i=0;
    while(i<10){
        printf("%d\n",i);
        i++;
    }
    return 0;
}