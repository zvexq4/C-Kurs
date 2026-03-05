//Çalışanın Maaşını hesaplama 
#include<stdio.h>
int main(){
float saatlikUcret,calismaSaati,toplamMaas,fazlaMesai = 0;
printf("saatlik kazancınızı giriniz = ");
scanf("%f",&saatlikUcret);
printf("toplam çalışma saatinizi giriniz = ");
scanf("%f",&calismaSaati);
if(calismaSaati > 40 ){
    fazlaMesai = calismaSaati - 40 ;
    calismaSaati = 40;
}
toplamMaas = (calismaSaati * saatlikUcret) +
             (fazlaMesai * saatlikUcret * 1.5);
printf("toplam Maaşınız = %.2fTL\n",toplamMaas);
return 0;
}