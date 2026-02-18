#include "header.h" // Header buraya da tanımlandı.

const char kelime[6]="ALTAN"; // Global değişken tanımlandı.

void menu(); // Fonksiyonlar bildirildi.
void kurallar();
void kontrol(char *tahmin, const char *kelime, char *sondurum, char *yeriyanlis, char *tamyanlis);
void durumyazdir(char *tahmin, const char *kelime, char *sondurum, char *yeriyanlis, char *tamyanlis);
