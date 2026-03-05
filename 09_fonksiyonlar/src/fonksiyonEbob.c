#include<stdio.h>
int ebob(int sayi1,int sayi2);
//fonksiyonun prototibi 

int main(){
    int sayi1,sayi2,sonuc;
    printf("Sayılarınızı giriniz =\n");
    scanf("%d%d",&sayi1,&sayi2);
    sonuc = ebob(sayi1,sayi2);//donksiyondan kontrol 
    printf("%d ve %d sayılarının EBOB'u =%d\n",sayi1,sayi2,sonuc);
}

int ebob(int sayi1,int sayi2){
    int i,ebob;
    for(i = 1;i <= sayi1 && i <= sayi2;i++){
        if(sayi1 % i == 0 && sayi2 % i == 0){
            ebob = i;
        }
    }
    return ebob;
}