// kulanıcının girdiği 10 sayının kaçının çift kaçının tek olduğunu hesaplıyan program yazma.
#include<stdio.h>
int main(){
int i, sayi,tek=0,cift=0;
for(i = 1;i <= 10;i++){
	printf("%d. sayınızı giriniz = ",i);
	scanf("%d",&sayi);
	if(sayi % 2 == 0){
		cift++;
		}
	else{
		tek++;
	}
}
printf("çift sayılar = %d\n",cift);
printf("tek sayılar = %d\n",tek);

return 0;
}
