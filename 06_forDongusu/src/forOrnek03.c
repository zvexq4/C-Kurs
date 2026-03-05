// kulanıcının girdiği 10 sayıdan sadecce çiftlerin toplamını yapan programı yazınız
#include<stdio.h>
int main(){
    int i, sayi, toplam = 0;
    for(i = 1; i<=10;i++){
        printf("%d. Sayıyı giriniz = ",i);
        scanf("%d",&sayi);
        if(sayi%2 == 0){
            toplam += sayi;
        }
        
    }
    printf("çift toplam = %d\n",toplam);

    return 0;
}