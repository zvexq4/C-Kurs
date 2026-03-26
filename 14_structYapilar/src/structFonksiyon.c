#include<stdio.h>

typedef struct
{
    int x;
    int y;
}MyStruct;

MyStruct degistir(MyStruct my);

int main()
{
    MyStruct m = {15,25};
    m = degistir(m);
    
    printf("%d\n%d",m.x,m.y);

    return 0;
}
MyStruct degistir(MyStruct my)
{
    my.x = 75;
    my.y = 85;

    return my;
}
