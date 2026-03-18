/*
malloc = Programın çalışma anında belirli bir bellek alanını tahsis eder

calloc = Programın çalışma anında belirli bir bellek alanını tahsis eder
ve bu alanı sıfırlar

realloc =  malloc ve calloc ile tahsis edilen bellek alanını büyütmek veya
kü.ültmek için kullanılır

free = Tahsis edilen bellek alanını serbest bırakır
*/
#include<stdio.h>
#include<stdlib.h>//gerekli araçlar için kulanıla kütüphane
int main()
{
    /*
    int *p;
    //malloc byte cinsinden bilgi girişi yapılmalıdır.
    p = malloc(10 * sizeof(int));//burda 10 birimlik integer değer açıp sıfırlamıyor
    p[0] = 10;
    p[1] = 20;
    for(int i = 0;i < 10;i++)
    {
        printf("%d. p pointer  sayısı = %d\n",i+1,p[i]);
    }
    printf("\n\n");
    int *a;
    a = calloc(10,sizeof(int));//burda 10 birimlik integer alan açıp sıfırlıyor
    a[0] = 12;
    a[1] = 23;
    for(int i = 0; i < 10;i++)
    {
        printf("%d. a parametre sayısı = %d\n",i+1,a[i]);
    }
    */
    int n;
    int *p;
    printf("Kaç sayı gireceksiniz = ");
    scanf("%d",&n);
    p = calloc(n, sizeof(int));
    printf("Sayılarınızı giriniz =\n");
    for(int i = 0; i < n;i++)
    {
        scanf("%d",&p[i]);
    }
    int ekleme;
    printf("kaç eleman ekliceksiniz =");
    scanf("%d",&ekleme);
    printf("sayılarınızı giriniz = ");
    p = realloc(p,(n + ekleme) * sizeof(int));
    for(int i = n; i < n+ekleme;i++)
    {
        scanf("%d",&p[i]);
    }
    for(int i = 0; i < n+ekleme;i++)
    {
        printf("%d. sayı = %d\n",i+1,p[i]);
    }
    free(p);//beleği burada serbest bırakıyoruz
    return 0;
}
