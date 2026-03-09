#include<stdio.h>

int main()
{
    char mesaj[] = {'M','E','R','H','A','B','A','\0'};// \0 dizimizin bitiğini gösterir
    char mesaj2[] = "Merhaba Dünya";//Bu şekil yazdığımızda \0 eklememize gerek yok 
    char mesaj3[30]; //burada 30 karakterlik dizi tanımladım 
    printf("3. karakter = %c\n",mesaj[2]);
    printf("Mesajın tamamı : %s\n",mesaj);
    printf("2. Mesajımız : %s\n",mesaj2);
    printf("Adınız Soyadınız = ");
    //scanf("%[^\n]s",mesaj3);// [^\n] demek yeni satır gelmeyene kadar kulanıcıdan bilgi al demek 
    fgets(mesaj3,sizeof(mesaj3),stdin);
    //sizeof ile boyut kontrolu yapıp stdin ile kılavye girişini yapıyoruz
    printf("%s",mesaj3);
    return 0;
}
