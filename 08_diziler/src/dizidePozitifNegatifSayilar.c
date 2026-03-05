/*
bir dizi içerisinde yer alan sayılardan pozitif ve negatif sayıların adedini
bulan c kodunu yazınız.
*/
#include<stdio.h>
int main(){
	int sayilar[] = {10,-5,36,-47};
	int pozitifAdet = 0, negatifAdet = 0,notrAdet = 0;

	for(int i = 0;i < 4; i++){
		if(sayilar[i] > 0){
			pozitifAdet++;
		}
		else if(sayilar[i] < 0){
			negatifAdet++;
		}
		else{
		notrAdet++;
		}
	}
	printf("pozitif sayılar = %d tane\n",pozitifAdet);
	printf("negatif sayılar = %d tane\n",negatifAdet);
	printf("nötr sayılar = %d  tane\n", notrAdet);
	
	
return 0;
}	
