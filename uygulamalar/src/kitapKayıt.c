#include<stdio.h>
#include<string.h>//strcmp() kulanımı için gerekli kütüphane

typedef struct//struct şablon tanımlaması yaptık.
{
    char kitapAdi[100];
    char yazar[100];
    char isbnNo[20];
    int sayfaSayisi;
}Kitap;

void kitapEkle(Kitap kitaplar[], int *kitapSayisi); //fonksiyon prototibi
void kitapListele(Kitap kitaplar[],int kitapSayisi);//fonksiyon prototibi
void kitapAra(Kitap kitaplar[],int kitapSayisi);//fonksiyon prototibi
void kitapSil(Kitap kitaplar[], int *kitapSayisi);//fonksiyon prototibi
void kitapGuncelle(Kitap kitaplar[],int kitapSayisi);//fonksiyon prototibi

int main()
{
    Kitap kitaplar[100];//100 kitap kaydı tutmalık alan açtık
    int secim = 0;
    int kitapSayisi = 0;

    while(secim != 6)// 6 Harici proje çalışacaktır.
    {
        printf("\n------Kitap Menusu------\n");
        printf("1. Kitap Ekle\n");
        printf("2. Kitap Listele\n");
        printf("3. Kitap Ara\n");
        printf("4. Kitap Sil\n");
        printf("5. Kitap Güncelle\n");
        printf("6. Çıkış :(\n");
        printf("\nSeçiniz : ");
        scanf("%d",&secim);

        switch(secim)
        {
            case 1:
                //kitap sayısı güncel kalsın diye fonksiyona adressini atıyorum.
                kitapEkle(kitaplar,&kitapSayisi);
                break;
            case 2:
                //burada kitap sayısında değişiklik olmicağı için sadece bilgisini gönderdim.
                kitapListele(kitaplar,kitapSayisi);
                break;
            case 3:
                kitapAra(kitaplar,kitapSayisi);
                break;
            case 4:
                kitapSil(kitaplar,&kitapSayisi);
                break;
            case 5:
                kitapGuncelle(kitaplar,kitapSayisi);
                break;
            case 6:
                printf("\n-->Programdan Çıkılıyor<--\n");
                break;
            default:
                printf("\n-->Hatalı Tuşlama Yaptınız Tekrar Deneyiniz<--\n");
                break;
        }
    }

    return 0;
}

void kitapEkle(Kitap kitaplar[], int *kitapSayisi)//kitap ekleme fonksiyonu 
{
    printf("Kitap Adı :");
    scanf(" %[^\n]s", kitaplar[*kitapSayisi].kitapAdi);
    
    printf("Yazar Adı : ");
    scanf(" %[^\n]s", kitaplar[*kitapSayisi].yazar);

    printf("İSBN No : ");
    scanf(" %[^\n]s", kitaplar[*kitapSayisi].isbnNo);

    printf("Kaç Sayfa : ");
    scanf("%d", &kitaplar[*kitapSayisi].sayfaSayisi);
    (*kitapSayisi)++;
    printf("\nKitap Başarıyla Eklendi\n");
}

void kitapListele(Kitap kitaplar[],int kitapSayisi)//kitap listeleme fonksiyonu
{
    if(kitapSayisi == 0)//kitap sayısı 0 ise listeleme yapmicaktır.
    {
        printf("\nListelenecek Kitap Bulunmamaktadır.\n");

    }
    else//eğer varsa for döngüsüyle listelicektir.
    {
        for(int i = 0;i < kitapSayisi; i++)
        {
            printf("\n------%d.Kitap------\n",i+1);

            printf("Kitap Adi    : %s\n",kitaplar[i].kitapAdi);

            printf("Kitap Yazarı : %s\n",kitaplar[i].yazar);

            printf("İSBN  No.    : %s\n",kitaplar[i].isbnNo);

            printf("Sayfa Sayısı : %d\n",kitaplar[i].sayfaSayisi);
            printf("\n\n");
        }
    }
}

void kitapAra(Kitap kitaplar[],int kitapSayisi)//kitap arama fonksiyonu
{
    char kitapAdi[100];//karşılaştırmak için 
    printf("Kitap Adı Giriniz : ");
    scanf( " %[^\n]s",kitapAdi);
    for(int i = 0; i < kitapSayisi; i++)
    {
        if(strcmp(kitaplar[i].kitapAdi,kitapAdi) == 0)//strcmp ile karşılaştrıma yapıyoruz.
        {
            printf("\n---Kitap Bulundu---\n");
           
            printf("Kitap Adi    : %s\n",kitaplar[i].kitapAdi);

            printf("Kitap Yazarı : %s\n",kitaplar[i].yazar);

            printf("İSBN  No.    : %s\n",kitaplar[i].isbnNo);

            printf("Sayfa Sayısı : %d\n",kitaplar[i].sayfaSayisi);

            return;//kitap bulunduğunda fonksiyondan çıkıyoruz.
        }
        
        
    }
    printf("\n-->Kitap Bulunamadı<--\n");//bulunamazsa ekrana bunu yazdırıcak.
}

void kitapSil(Kitap kitaplar[],int *kitapSayisi)//kitap silme fonksiyonu
{
    char kitapAdi[100];
    printf("Silinecek Kitap Adı : ");
    scanf(" %[^\n]s",kitapAdi);
    for(int i = 0; i < *kitapSayisi;i++)
    {
        if(strcmp(kitapAdi,kitaplar[i].kitapAdi) == 0)
        {
            for(int j = i; j < *kitapSayisi;j++)
            {
                kitaplar[j] = kitaplar[j+1];
            }
            (*kitapSayisi)--;
            printf("\n-->Kitap Başarıyla Silindi<--\n");
            return;//kitap bulunduğu için fonksiyondan çıkıyoruz.
        }
    }
    printf("\n-->Kitap Bulunamadı<--\n");//if blogu çalışmaz ise
}

void kitapGuncelle(Kitap kitaplar[],int kitapSayisi)
{
    char kitapAdi[100];
    printf("Güncelenecek Kitap Adını Giriniz : ");
    scanf(" %[^\n]s",kitapAdi);
    for(int i = 0; i < kitapSayisi;i++)
    {
        if(strcmp(kitapAdi,kitaplar[i].kitapAdi)== 0)
        {
            printf("Yeni Kitap Adı :");
            scanf(" %[^\n]s",kitaplar[i].kitapAdi);

            printf("Yeni Yazar Adı :");
            scanf(" %[^\n]s",kitaplar[i].yazar);

            printf("Yeni İSBN No :");
            scanf(" %[^\n]s",kitaplar[i].isbnNo);

            printf("Yeni Sayfa Adedi : ");
            scanf("%d",&kitaplar[i].sayfaSayisi);
            printf("\n-->Kitap Başarıyla Günelendi<--\n");
            return;
        }
    }
    printf("\n-->Kitap Bulunamadı<--\n");
}                                      
