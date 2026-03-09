#include<stdio.h>
 int main()
 {
     char ifade1[] = "Merhaba";
     char ifade2[] = "merhaba";
     int i = 0;
     int flag = 0;
     while(ifade1[i] != '\0')
     {
         if(ifade1[i] != ifade2[i])
         {
             flag = 1;
             
         }
         i++;
     }
     if(flag == 1)
     {
         printf("Eşit Değildir\n");
     }
     else
     {
         printf("Eşittir\n");
     }
     return 0;
 }
