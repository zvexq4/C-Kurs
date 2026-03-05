/*
Soru : Kulanıcının girmiş olduğu 7 sayıdan en büyük ve en küçük olanını bulan C
programını yazınız.
*/
#include<stdio.h>
int main(){
	int dizi[7];
	int max,min;
	for(int i = 0;i < 7; i++){
		printf("%d. sayıyı giriniz =",i+1);
		scanf("%d",&dizi[i]);
	}
	for(int i = 0; i < 7; i++){
		printf("%d ",i);
	}
	printf("\n");
	max = dizi[0];
	min = dizi[0];
	for(int i = 1;i < 7;i++){
		if(max < dizi[i]){
			max = dizi[i];
		}
		if(min > dizi[i]){
			min = dizi[i];
		}
	}
	printf("%d-%d aralığında\n",min,max);

return 0;
}
