#include<stdio.h>
int main(){
    // kulanıcıdan 2 değer alıp bunların değer değişkenlerini takaslayın
    int a, b, aracı;
    printf("a değişkeni giriniz = \n");
    scanf("%d",&a);

    printf("b değişkeni giriniz = \n");
    scanf("%d",&b); 

    aracı = a;
    a = b;
    b = aracı;

    printf("a değişkeni = %d\n",a);
    printf("b değişkeni = %d\n",b);



    return 0;
}