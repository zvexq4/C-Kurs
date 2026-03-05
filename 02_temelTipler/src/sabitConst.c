#include<stdio.h>
int main(){
    const float PI = 3.14159f ;
    // const : Sabit anlamına gelir. Değişkenin değerinin değiştirilmesini engeller.
    // Sabitler, programın çalışması sırasında değeri değişmeyen veri parçalarını temsil eder.
    // Sabitler, programın okunabilirliğini artırır ve hataların önlenmesine yardımcı olur.
    // Sabitler, genellikle büyük harflerle yazılır ve alt çizgi (_) ile ayrılır.
    // Sabitler, tanımlandıktan sonra değeri değiştirilemez.
    printf("Pi sayısı : %.5f", PI);
    return 0;
}  