/*
aşağıdaki görseli oluşturan kodu yazınız 

*
**
***
****
*****
****
***
**
*

*/

#include<stdio.h>

int main(){
    int i, k;

    // Yukarı doğru artan kısım
    for(i = 1; i <= 5; i++){
        for(k = 1; k <= i; k++){
            printf("*");
        }
        printf("\n");
    }

    // Aşağı doğru azalan kısım
    for(i = 4; i >= 1; i--){
        for(k = 1; k <= i; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}