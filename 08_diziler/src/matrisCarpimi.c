#include<stdio.h>
int main()
{
    int A[2][3] = {{1,2,3},{4,5,6}};
    int B[3][2] = {{7,8},{9,10},{11,12}};
    int C[2][2];
    int i,j,k;// i = satır j = sutun k = gezinme
    
    for(i = 0;i < 2;i++)//hesaplama döngüsü
    {
        for(j = 0;j < 2;j++)
        {
            C[i][j] = 0; //C matrisimi boşaltıyorum bazen ram de dolu geliyor 
            for(k = 0;k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    for(i = 0; i < 2;i++)//sonuç yazdırma döngüsü
    {
        for(j = 0; j < 2;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
