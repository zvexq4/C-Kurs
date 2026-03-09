#include<stdio.h>
int main(){
    //kulanıcıdan bir üçgenin tabanı ve yüksekliğini alın ve alanını hesaplayın.
    //Alan = (Taban * Yükseklik)/2 ayrıca çevresi için kenar uzunluklarını alıp çevresini hesaplayın.
    int  taban, yukseklik,cevre, kenar1,kenar2,kenar3;
    float alan;
    printf("Alan hesaplama için taban ve yükseklik giriniz = \n");
    scanf("%d%d",&taban,&yukseklik);
    alan = (taban * yukseklik)/2.0;
    printf("şimdi çevre hesaplama için kenar uzunluklarını giriniz = \n");
    scanf("%d%d%d",&kenar1,&kenar2,&kenar3);
    cevre = kenar1 +kenar2 + kenar3;
    printf("Alanı = %.2f\n",alan);
    printf("çevresi = %d\n",cevre);

    return 0;
}