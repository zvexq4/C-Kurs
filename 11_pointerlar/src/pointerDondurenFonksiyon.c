#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *metniTersCevir(char *str);//fonksiyon prototibi
int main()
{
    char *metin = "merhaba";
    printf("Orjinal metin %s\n",metin);
   
    char *tersmetin;
    tersmetin = metniTersCevir(metin);//metni fonksiyona gönderiyoruz

    printf("metnin ters hali = %s\n",tersmetin);


    return 0;
}
char *metniTersCevir(char *str)
{
    int uzunluk = strlen(str);//burada metnin boyutunu alıyoruz
    char *ters = malloc(uzunluk + 1); //malloc ile alan açıyoruz (1 eklemem nul karakterinden dolayı)
    for(int i = 0;i < uzunluk;i++)
    {
        ters[i] = str[uzunluk - i -1];//döngüyle karakterleri tersine çeviriyoruz
    }
    ters[uzunluk] = '\0';//son karakter olarak null ekliyoruz
    return ters;
}