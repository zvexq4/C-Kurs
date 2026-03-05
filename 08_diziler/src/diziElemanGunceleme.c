#include<stdio.h>
int main(){
    int dizi[]= {10,20,30,40,50};

    printf("dizimizin ilk hali \n");
    for(int i = 0;i < 5; i++){
        printf("%d ",dizi[i]);
    }
    printf("\n");
    printf("\n");
    
    dizi[2] = 100;

    printf("dizimizin Son Hali \n");
    for(int i = 0;i < 5; i++){
        printf("%d ",dizi[i]);
    }
    printf("\n");
    return 0;
}