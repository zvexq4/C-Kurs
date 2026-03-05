// kulanıcıdan alınan sayının asal syı olup olmadığını kontrol etme programı 
#include<stdio.h>
int main(){
    int sayi,i,flag = 0;//flag bir şartın içine girildimi diye kontol edicez
    printf("bir sayı giriniz = ");
    scanf("%d",&sayi);
    for(i = 2; i < sayi/2;i++){
        if(sayi % i == 0){
            printf("%d sayısı asal  değildir.\n",sayi);
            flag = 1; // bu şart gerçekleşirse flag değeri değişip yazılmicak 
            break; // eğer bölünüyorsa döngüyü bitiriyoruz 
        }
    
    }
    if (flag == 0){ // eğer şart gerçekleşmezse çıktı bu şarta geçer 
        printf("%d sayısı asaldır\n",sayi);
    } 
}