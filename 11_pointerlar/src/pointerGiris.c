#include<stdio.h>
int main()
{
    int a = 15;
    int *pt = &a;
    
    printf("A değişkenin değeri %d\n",*pt);
    printf("A değişkenin adresi %p\n",pt);// %p yazarak 16 sayı tabanında adresi görüyoruz %d ile 10 sayı aralığı 
    
    *pt = 10;
    printf("A değişkenin değeri %d\n",*pt);
    printf("A değişkenin adresi %p\n",pt);
    
    return 0;
}
