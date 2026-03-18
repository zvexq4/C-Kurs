#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *sayilar, *max;
    int n;
    
    printf("Kaç Sayı Girilecek:");
    scanf("%d",&n);
    
    sayilar = malloc(n * sizeof(int));//malloc ile n sayısı kadar alan açıyorum 

    printf("Sayılarınızı giriniz =\n");//sayıların girişini dizine ekliyorum
    for(int i = 0; i < n;i++)
    {
        scanf("%d",&sayilar[i]);
    }

    max = sayilar; // sayının ilk adresini max pointerine tanımlıyorum 

    for(int i = 1;i < n;i++)//karsilastırma 1 index ten baslıyorum
    {
        if(sayilar[i] > *max)//yıldızın olma sabebi direk indexteki sayıyı almak 
        {
            max = &sayilar[i];
        }
    }
    printf("En Büyük sayi = %d\n", *max);
    printf("En büyük sayının adresi %p\n",max);
    
    return 0;
}



