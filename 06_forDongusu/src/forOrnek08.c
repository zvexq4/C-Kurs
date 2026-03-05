#include<stdio.h>
int main(){
    int i,k,cift=0,tek=0,toplam=0,sayi,buyuk50=0;
    for(i=1;i<=10;i++){
        printf("%d. sayıyı giriniz = ",i);
        scanf("%d",&sayi);
        if(sayi%2==0){
            cift++;
        }
        if(sayi%2!=0){
            tek++;
        }
        if(sayi>50){
            buyuk50++;
        }
        
        toplam += sayi;
        
    }
    printf("\n");
    printf("çift sayılar (tane)= %d\n",cift);
    printf("tek sayılar (tane) = %d\n",tek);
    printf("50 den büyükler (tane) = %d\n",buyuk50);
    printf("sayıların toplamı = %d\n",toplam);
    printf("ortlaması = %.2f\n",toplam/10.0); 
    return 0;
}