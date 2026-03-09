#include<stdio.h>
const float pi = 3.14;
//global bir değiştirilemez değişken tanımladım
void menu();
float ucgen();
int dortgen();
float daire();
//yukaridakıler fonksiyonlar için prototipler.

int main(){
    int secenek;
    menu();//menümü çağırdım
    printf("Bir Seçenek Giriniz = ");
    scanf("%d",&secenek);
    if(secenek == 4){//cıkış tuşlaması için mesaj verdim
        printf("Güle Güle Dostum...");
        }
    while(secenek != 4){//proram döngümü başlattım.
       switch (secenek)
       {
       case 1:{ //case lerde süslü parantez kulanmamın sebebi değişken dönüşümlerinden dolayı.
        float sonuc = ucgen();
        printf("Üçgenin Alanı = %.2f\n",sonuc);
        break;
       }
       case 2:{
          int sonuc = dortgen();
        printf("Dortgenin Alanı = %d\n",sonuc);
       break;
       }
       case 3:{
        float sonuc = daire();
        printf("Dairenin Alanı = %.2f\n",sonuc);
        break;
       }
       
       default://yanlış yada esik menu tuşlamasında default mesaj içeriğim.
        printf("Eksik yada Hatalı tuşladınız Lütfen tekrar Deneyiniz.\n");
        break;
       }
       printf("\n");
       menu();
       printf("Bir Seçenek Giriniz = ");
       scanf("%d",&secenek);
       if(secenek == 4){
        printf("Güle Güle Dostum...");
       }
       
    }
    return 0;
}

void menu(){
    printf("----Alan Hesaplama Programı---\n");
    printf("1 - Üçgenin Alanı\n");
    printf("2 - Dörtgenin Alanı\n");
    printf("3 - Dairenin Alanı\n");
    printf("4 - Çıkış\n");
}

float ucgen(){
float taban,yukseklik,Alan;
printf("Taban uzunluğunu giriniz = ");
scanf("%f",&taban);
printf("yüksekliği giriniz =");
scanf("%f",&yukseklik);
Alan = yukseklik*taban/ 2;
return Alan;
}
int dortgen(){
    int kenar1,kenar2;
    printf("kenar uzunluklarını giriniz =\n");
    scanf("%d%d",&kenar1,&kenar2);
    return kenar1 * kenar2;
}
float daire(){
    float r;
    printf("Dairenin Yarıçapını giriniz =");
    scanf("%f",&r);
    return pi*(r*r);
    // πr²
}