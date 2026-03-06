int elemanSil(int arr[],int boyut,int index);//fonksiyon prototibi 
#include<stdio.h>
int main()
{
    int dizi[] = {10,20,30,40,50};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);//dizinin kaç elamandan oluştuğunu buluyoruz
    int index = 3;
    printf("Dizimizin İlk Hali\n");
    for(int i = 0;i < boyut;i++)//dizi ilk hal yazdırma 
    {
        printf("%d ",dizi[i]);
    }
    printf("\n\n");
    boyut = elemanSil(dizi,boyut,index);//fonksiyon çağırı
    printf("Dizinin Son Hali\n");
    for(int i = 0;i < boyut;i++)
    {
        printf("%d  ",dizi[i]);
    }
    printf("\n\n");
    return 0;
}

int elemanSil(int arr[],int boyut,int index) // fonksiyon yapısı
{
    if(index >= 0 && index < boyut)//index numarası kontrol
    {
    for(int i = index; i < boyut; i++)
    {
        arr[i] = arr[i+1];
    }
    return boyut - 1;
    }
    else
    {
        printf("Hatalı İndex Numarası\n");
        return boyut;
    }
}
