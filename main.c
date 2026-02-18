#include "header.h" // .h dosyaları eklendi.
#include "functions.h"

const char kelime[6]; // Global değişken tanımlandı.
const char *havuz[]= {"ATLAS", "HAMZA", "GITAR", "CIZIM", "HALIC"};

int main(){
    char tahmin[6]; // Her tahminde değişecek değişkenler tanımlandı.
    char tamyanlis[26]; // 5x5=25 +1 tane boşluk satırı tüm tahminlerdeki tüm harfler
    char yeriyanlis[26]; // yanlış seçilirse diye ayarlandı.
    char sondurum[6]; // Kelimenin son durumu.
    
    int secim; // Menü seçimi.
    int kazanmadurum;
    int denemesayisi;
    int indeks;

    while(1){
    menu();
    scanf("%d",&secim); // Oyun öncesi ekranı.
    while ((getchar()) != '\n'); // Buffer temizliği.

    switch(secim){
        case 1: strcpy(sondurum, "_____");
                strcpy(tamyanlis, "");
                strcpy(yeriyanlis, "");
                denemesayisi = 0;
                kazanmadurum = 0; // Önce her şeyi sıfırlandı.

                srand(time(NULL));
                indeks=rand() % 5;
                const char *kelime = havuz[indeks];
                printf("> OYUN BASLIYOR...\n");
                for(int i=0;i<MAX_DENEME;i++){
                    printf("Tahmininiz: ");
                    fgets(tahmin,6,stdin); // Tahmini alan kısım.
                    while ((getchar()) != '\n'); // Buffer temizliği.

                    for(int j=0;j<MAX_UZ;j++){
                        tahmin[j]=toupper(tahmin[j]);
                    }

                    if(strlen(tahmin)!=MAX_UZ){
                        printf("Gecersiz uzunluk!\n");
                        i--; // Tahmin hakkı gitmesin diye konuldu.
                        continue;
                    }

                    kontrol(tahmin,kelime,sondurum,yeriyanlis,tamyanlis); // Kontrol fonksiyonu.
                    kazanmadurum=kazanmadurumu(kazanmadurum,kelime,tahmin,denemesayisi); // Kazanma kontrolü fonksiyonu.
                    if (kazanmadurum==1) break;
                    durumyazdir(tahmin,kelime,sondurum,yeriyanlis,tamyanlis); // Son durum fonksiyonu.
                    denemesayisi++;
                }
                break;
        case 2: kurallar();
                break;
        case 3: printf("> CIKIS YAPTINIZ...\n");
                system("pause");
                return 0;
        default: printf("> YANLIS GIRIS...\n");
    }
}
}

