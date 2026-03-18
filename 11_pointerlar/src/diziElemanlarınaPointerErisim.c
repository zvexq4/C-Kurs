#include<stdio.h>
int main()
{
    int sayilar[] = {10,15,25,30,35};
    int *spr = sayilar;
    printf("spr adresi %p\n",spr);// sayilar dizininin adresini gösterir
    printf("sayilar adresi %p\n",sayilar);//sayılar dizinin adresi 
    
    /* pointer aritmetiği ile yazdırma mantığı
    printf(" 1. Eleman : %d\n",*spr);
    printf(" 2. Eleman : %d\n",*(spr + 1)); 
    printf(" 3. Eleman : %d\n",*(spr + 2)); 
    */

    /*index numaralarıyla yazdırma 
    printf(" 1. Eleman : %d\n",spr[0]);
    printf(" 2. Eleman : %d\n",spr[1]);
    printf(" 3. Eleman : %d\n",spr[2]);
    */
    
    for(int i = 0;i < 5;i++)
    {
        printf("%d. eleman = %d\n",i+1,*(spr + i));
    }
    return 0;
}
