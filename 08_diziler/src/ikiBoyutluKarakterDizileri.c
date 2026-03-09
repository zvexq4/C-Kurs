#include<stdio.h>
#include<string.h>//strlen komutu için dahil edilen kütüphane
int main()
{
    char renk[5][20];
    for(int i = 0;i < 5;i++)
    {
        printf("%d. kelimeyi giriniz = ",i+1);
        scanf("%s",renk[i]);
    }
    printf("\n------------\n");
    for(int i = 0;i < 5;i++)
    {
        printf("%d. kelime = %s\n",i+1,renk[i]);
    }
    for(int satir = 0;satir < 5;satir++)
    {
        for(int sutun = 0; sutun < strlen(renk[satir]);sutun++)//strlen kaç karakter var onu gösterir
        {
            printf("%c\n",renk[satir][sutun]);
        }
        printf("\n");
    }
    return 0;
}
