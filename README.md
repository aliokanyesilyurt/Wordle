# 📝 Wordle Projesi - C Terminal Oyunu

Bu proje, C dili kullanılarak geliştirilmiş bir terminal tabanlı Wordle oyunudur. Kullanıcıdan alınan tahminleri analiz eder ve harflerin doğruluk durumuna göre geri bildirim verir.

## 🚀 Öne Çıkan Özellikler

* **Genişletilmiş Kelime Havuzu**: Oyun her başladığında önceden tanımlanmış kelime havuzundan rastgele bir kelime seçer.
* **Anlık Geri Bildirim**: Harflerin doğru yerde (Yeşil), yanlış yerde (Sarı) veya kelimede yok (Gri) olma durumlarını takip eder.
* **Hata Denetimi**: Kullanıcının girdiği kelime uzunluğunu ve karakter tipini kontrol eder.

## 📂 Dosya Yapısı

* `main.c`: Oyunun ana döngüsünü, kelime havuzu seçimini ve kullanıcı arayüzünü içerir.
* `functions.c` / `header.h`: Harf kontrol algoritmalarını ve yardımcı fonksiyonları barındırır.

## 🛠️ Derleme ve Çalıştırma

Proje, PowerShell veya CMD üzerinden **GCC** derleyicisi kullanılarak çalıştırılabilir.

### Derleme:
```powershell
gcc main.c functions.c -o wordle.exe
(Eğer dosyaları tek bir main.c içinde birleştirdiyseniz sadece gcc main.c -o wordle.exe yazmanız yeterlidir.)

Çalıştırma:
PowerShell
.\wordle.exe

🎓 Geliştirici Notları
Derleme sırasında ObjectNotFound hatası alınıyorsa, gcc'nin sistem PATH değişkenlerine eklendiğinden emin olunmalıdır.
