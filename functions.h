#include "header.h" // Header buraya da tanımlandı.

void menu(); // Fonksiyonlar bildirildi.
void kurallar();
void kontrol(char *tahmin, const char *kelime, char *sondurum, char *yeriyanlis, char *tamyanlis);
void durumyazdir(char *tahmin, const char *kelime, char *sondurum, char *yeriyanlis, char *tamyanlis);
int kazanmadurumu(int kazanmadurum, const char *kelime, char *tahmin, int denemesayisi);
