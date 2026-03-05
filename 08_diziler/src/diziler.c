/*
1. Dizi nedir?
Dizi, aynı türden elemanları hafızada ardışık bir şekilde saklamak için kullanılan bir veri yapısıdır.
Örneğin, bir tam sayı dizisi (int), bir char dizisi (string) olabilir.

2. Dizi Tanımlama
Bir diziyi tanımlarken, eleman türünü, dizi adını ve boyutunu belirlemeliyiz.

3. Dizi Elemanlarına Erişim
Dizinin elemanlarına, indeks numaralarıyla erişilir, Diziler 0' dan başlayarak 
numaralandırılır.
4. Diziler Ve Bellek
C' de diziler sabit boyutludur; bir kez tanımlandıktan sonra boyutları değiştirilemez.
Ayrıca diziler, belekte ardışık alanlara sahip olduğundan  dizi sınırları dışına çıkma
(buffer overflow) sorunlarına dikkat etmeliyiz.

*/

int main(){
    //veriTipi dizininAdi[elemanSayisi];
    //     int listele[10];
    int listele[] = {5,10,15}; // diziyi tanımlarken elemanları da atayabiliriz
    // eleman sayısını belirtmeye gerek yoktur, derleyici otomatik olarak eleman sayısını belirler.

    //dizinin elemanlarına indeks numarasıyla erişilir
    listele[0] = 5;
    listele[1] = 10;
    listele[2] = 15;

    //dizinin elemnalarını for döngüsü ile yazdırma
    //istersek for döngüsü ile atama yapabiliriz
    for(int i = 0; i < 3; i++){
        printf("%d ", listele[i]);
    }

}