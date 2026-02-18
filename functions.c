#include "functions.h" // Funcitons.h eklendi.
// Fonksiyon sayısı fazla olmadığı için fonksiyonlar birbirinden ayrılmadı.

void menu(){ // Menü yazdırma fonksiyonu.
    printf(">>> WORDLE <<<\n");
    printf("1- BASLA\n");
    printf("2- YARDIM\n");
    printf("3- CIKIS\n");
    printf("> SECIMINIZ: ");
}

void kurallar(){ // Kuralları yazdıran fonksiyon.
    printf("> KURALLAR <\n");
    printf("1- Kelimeyi 6 denemede bulmalisin!\n");
    printf("2- Her tahmin 5 harfli bir kelime olmali!\n");
    printf("3- Dogru ve yanlis harfler tahmin satirinda gorunecektir!\n");
    printf("Basarilar!\n");
    printf("-----------------------\n");
}

void kontrol(char *tahmin, const char *kelime, char *sondurum, char *yeriyanlis, char *tamyanlis){
    for(int i=0;i<5;i++){
        if(tahmin[i]==kelime[i]){
            sondurum[i]=tahmin[i]; // YEŞİL KUTUCUKLAR
        }
        else{ // Harfin bulunduğunu bildiren değişken.
            int geldi=0; // Harf var: 1 Harf yok: 0
            for(int j=0;j<MAX_UZ;j++){
                if(kelime[j]==tahmin[i]){
                    geldi=1; // Harf çıktıysa 1 olur.
                    break;     
                }
            }
                int uz;
                if(geldi == 1){
                    uz=strlen(yeriyanlis); // Dizi uzunluğunu ölçtü.
                    yeriyanlis[uz] = tahmin[i]; // Mesela ilk kelime yazılırken 0'dı o yüzden 0'a ilk yeri yanlış harfi yerleştirdi.
                    yeriyanlis[uz + 1] = '\0';
                }else{
                    uz=strlen(tamyanlis); // Yeri yanlışın tam yanlış harfler versiyonu.
                    tamyanlis[uz] = tahmin[i];
                    tamyanlis[uz + 1] = '\0';
                }
        }
    }
}

void durumyazdir(char *tahmin, const char *kelime, char *sondurum, char *yeriyanlis, char *tamyanlis){
    printf("> SON DURUM <\n"); // Son durumu yazdıran fonksiyon.
    printf("Son Durum: %s\n",sondurum);
    printf("Yeri Yanlislar: %s\n",yeriyanlis);
    printf("Hic Bulunmayanlar: %s\n",tamyanlis);
    printf(">---------------------<\n");
}
