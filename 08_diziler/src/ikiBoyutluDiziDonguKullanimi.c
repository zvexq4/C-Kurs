#include<stdio.h>
int main()
{
    int ogrenci[4][3] = {{127,90,80},
                         {354, 80, 70},
                         {485, 95, 90},
                         {687, 100, 90}
    };
    printf("Dizinin İlk Hali");
    int satir,sutun;
    //dizi elemanlarını yazdırma
    for(satir = 0;satir < 4;satir++)
    {
        for(sutun = 0;sutun < 3;sutun++)
        {
            printf("%d\t",ogrenci[satir][sutun]);
        }
        printf("\n");
    }
    //dizi elemanlarını güncelleme
    for(satir = 0; satir < 4;satir++)
    {
        for(sutun = 0;sutun < 3; sutun++)
        {
            ogrenci[satir][sutun] += 100;
        }
    }
    //dizi elemanlarını yazdırma
    printf("\n\n Dizi elemanlarının Son Hali");
     for(satir = 0;satir < 4;satir++)
      {
          for(sutun = 0;sutun < 3;sutun++)
          {
              printf("%d\t",ogrenci[satir][sutun]);
          }
          printf("\n");
      }

    

    return 0;
}
