//while dongusu ile faktoryel hesaplama  
#include<stdio.h>
int main()
{
    int sayi,faktoriel = 1,i = 1;
    printf("bir sayı giriniz = ");
    scanf("%d",&sayi); 
    if(sayi < 0){
        printf("negatif sayıların faktoryeli olmaz.\n");
        
    }
    else{
         while(i <= sayi){
            faktoriel *= i;
            i++;
         }
         printf("%d! = %d\n",sayi,faktoriel);
    }
  
    return 0; 
}