// üs hesaplıyan fonksiyonu yapınız 
#include<stdio.h>
void usAlma(int taban,int us);
int main(){
    int taban,us;
    printf("tabanı giriniz = ");
    scanf("%d",&taban);
    printf("üssü giriniz = ");
    scanf("%d",&us);
    usAlma(taban,us);

    return 0;
}
void usAlma(int taban, int us){
    int i,sonuc = 1;
    for(i=1;i<=us;i++){ 
        sonuc*=taban;
    }
    printf("cevap = %d\n",sonuc);
}