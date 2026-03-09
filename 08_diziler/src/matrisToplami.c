#include<stdio.h>

int main()
{
    int matris1[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int matris2[4][3] = {{13,14,15},{16,17,18},{19,20,21},{22,23,24}};
    int matrisTop[4][3];
    int satir,sutun;
    for(satir = 0;satir < 4;satir++)//matris toplamı bulma döngüsü
    {
        for(sutun = 0;sutun < 3;sutun++)
        {
            matrisTop[satir][sutun] = matris1[satir][sutun] + matris2[satir][sutun];
        }
    }
    for(satir = 0;satir < 4; satir++)//toplam yazdırma komutu
    {
        for(sutun = 0;sutun < 3;sutun++)
        {
            printf("%d\t",matrisTop[satir][sutun]);
        }
        printf("\n");
    }
    return 0;
}

