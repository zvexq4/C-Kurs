#include<stdio.h>
/* buble shortu iyi anlamak için 
https://www.youtube.com/watch?v=Iv3vgjM8Pv4
videosunu inceleyebilirsiniz.
*/
int main()
{
    int dizi[] = {10,7,19,13,18,21,15,9};
    int temp;

    for(int i = 0; i < 8; i++)//sıralama döngüsü 
    {
        for (int i = 0; i < 7; i++)//burda bilerek elean sayısından bir eksik yazdık nedeni  i + 1 kulanmak.
        {
            if(dizi[i] > dizi[i+1])
            {
                temp = dizi[i];
                dizi[i] = dizi[i+1];
                dizi[i+1] = temp;
            }
        }
    }
    for(int i = 0;i < 8;i++)//diziyi ekranan yazdıran döngü 
    {
        printf("%d\t",dizi[i]);
    }
    printf("\n");
    return 0;
}
