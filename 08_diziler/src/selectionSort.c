#include<stdio.h>
/* selection sort anlamak için 
https://www.youtube.com/watch?v=hFhf9djnM5A
vidosuna bakabilirsiniz
*/
int main()
{
    int dizi[] = {10,7,19,13,18,21,15,9};
    int enk;
    int temp;
    for(int i= 0;i < 8;i++)//sıralama döngüsü
    {
        enk = dizi[i];
        for(int j = i + 1;j < 8; j++)
        {
            if(enk > dizi[j])
            {
                enk = dizi[j];
                temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
            }
        }
    }
    for(int i = 0; i < 8;i++)//yazdırma döngüsü
    {
        printf("%d\t",dizi[i]);
    }
    printf("\n");
    return 0;
}

