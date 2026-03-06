#include<stdio.h>
int elemanAra(int arr[],int elemanSayisi,int aranan);// fonksiyon prototipi
int main()
{
    int dizi[] = {10,20,30,40,50};
    int elemanSayisi;
    int aranan,flag;
    elemanSayisi = sizeof(dizi) / sizeof(dizi[0]);
    do{
        printf("sorgulamak istediğiniz sayiyi giriniz = ");
        scanf("%d",&aranan);
        flag = elemanAra(dizi,elemanSayisi,aranan);//fonksiyon değerini flag atama
        if(flag)// fonksiyon 1 ifadesini gönderirse çalışıcak 
        {
            printf(" girdiğiniz sayi bulunuyor\n");
        }
        else
        {
            printf("Girdiğiniz Sayi bulunmuyor\n");
        }
    }while(flag ==0);// bulunamadığı sürece döngü devam eder

return 0;
}
int elemanAra(int arr[],int elemanSayisi, int aranan) // fonksiyon yapısı
{
    for(int i = 0; i < elemanSayisi; i++)
    {
        if(arr[i] == aranan)
        {
        return 1; // eleman bulundu 
        }
    }
    return 0; // eleman bulunamadı 
}
