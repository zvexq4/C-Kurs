#include<stdio.h>
int main()
{
    char metin[15];
    int i = 0;
    printf("Bir mesaj giriniz : ");
    fgets(metin, sizeof(metin),stdin);
    while(metin[i] != '\0')
        {
            printf("%c\n",metin[i]);
            i++;
        }
    return 0;
}
