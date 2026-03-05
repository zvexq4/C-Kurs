#include<stdio.h>

void listele(int n);//fonksiyon prototipi

int main(){// main programın çalıştığı bölüm
    int sayi;
    printf("bir sayi giriniz = ");
    scanf("%d",&sayi);
    listele(sayi);// listele fonksiyonunu çağırarak sonucu ekrana yazdırır

}
void listele(int n){//fonksiyon yapısı
    if(n == 0){
        return;
    }
    printf("%d  ",n);
    listele(n-1);// rekürsif durum, fonksiyon kendisini çağırıyor.
    //printf("%d  ",n); // bu satır eklenirse sayılar tersten yazdırılır.
    //neden çünkü fonksiyon kendisini çağırdıktan sonra sıradaki işlemi yapar.
}