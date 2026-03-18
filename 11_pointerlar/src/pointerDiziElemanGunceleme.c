#include<stdio.h>

int main()
{
    int sayilar[] = {10,15,20,25,30};
    int *pr = sayilar; // pointerimi atadım

    printf("dizinin İlk Hali\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d. sayı  = %d\n",i+1,*(pr + i));//pointer aritmetiği ile yazdırma
    }
    for(int i = 0; i < 5; i++)
    {
        *(pr + i) += 30;
    }
    printf("Dizinin Son Hali\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d. sayı = %d\n",i+1,pr[i]);//index numarası ile yazdırma
    }
    
    return 0;
}
