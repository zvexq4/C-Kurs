/* bir m  tamsayısının değerini okuyan ve m o' dan büyük olduğunda n' nin değerini 1,m 0
olduğunda 0 ve m 0' dan küçük olduğunda -1 yazdıran bir program yaıcaz*/
#include<stdio.h>
int main(){
    int m,n;
    printf("bir sayı giriniz = ");
    scanf("%d",&m);
    
    if(m > 0){
        n = 1;
    }

    else if(m == 0){
        n = 0;    
    }
  
    else{
        n = -1;   
    }
    printf("%d\n",n);
    return 0;
}