#include<stdio.h>
int main(){
    //kulanıcıdan değer alıp bunların değer değişkenlerini takaslayın (aracı kullanmadan)
    int a,b;
    printf("a değişkenini giriniz =\n");
    scanf("%d",&a);
    printf("b değişkenini girniz =\n");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a değişkenini =%d\n",a);
    printf("b değişkeni = %d\n",b);
    

    return 0;
}