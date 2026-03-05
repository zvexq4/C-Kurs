//1 den 50 ye kadar hem çift hemde 3e bölünen sayıları yazan fonksiyonu yazınız 
#include<stdio.h>
void yazdir(int sayi);
int main(){
    yazdir(50);
    return 0;
}
void  yazdir(int sayi){
    int i;
    for(i = 1; i <= sayi;i++){
        if(i % 2 == 0 && i % 3 == 0){
            printf("%d\n",i);
        }
    }
} 