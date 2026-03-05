#include<stdio.h>
int main(){
    int sayi;
    printf("bir sayı giriniz = ");
    scanf("%d",&sayi);
    if(sayi < 0){
        printf("sayınız negatiftir\n  ");
    }
    else if(sayi > 0){
        if(sayi % 2 == 0){
            printf("girilen sayı pozitif ve çifttir.\n");
        }
        else{
            printf("girilen sayı pozitif ve tekdir.\n");
        }
    }
    else{
        printf("sayınız sıfırdır\n");
        
    }
    return 0;
}