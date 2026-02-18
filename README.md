# 🚀 Wordle-CLI Projesi

Bu proje, popüler kelime tahmin oyununun **C dili** ile geliştirilmiş, komut satırı tabanlı (CLI) bir versiyonudur. Proje, modüler programlama prensiplerine uygun olarak `.h` ve `.c` dosyalarına bölünmüş yapıdadır.

## 👤 Geliştirici Bilgileri
* **Ad Soyad:** Ali Okan YEŞİLYURT
* **Öğrenci Numarası:** 25011067
* **Bölüm:** Bilgisayar Mühendisliği



## 🛠️ Teknik Altyapı
Proje geliştirilirken aşağıdaki teknik detaylar üzerinde durulmuştur:

| Özellik | Açıklama |
| :--- | :--- |
| **Bellek Yönetimi** | String sonu işaretleri (`\0`) ile bellek taşmaları (buffer overflow) önlenmiştir. |
| **Giriş Temizliği** | `scanf` ve `fgets` sonrası buffer temizliği yapılarak "Enter" tuşu hataları giderilmiştir. |
| **Harf Algoritması** | "ALTIN - ALTAN" senaryosu gibi karmaşık harf eşleşmeleri hatasız çalışmaktadır. |
| **Tekrarsız Liste** | `strchr` ile denenen harfler listelerde sadece bir kez gösterilir. |



## 🕹️ Kurulum ve Derleme
Bilgisayarınızda **GCC** derleyicisi kurulu olmalıdır. Terminal üzerinden aşağıdaki komutlarla projeyi ayağa kaldırabilirsiniz:

1. **Derleme:**
   ```powershell
   gcc main.c functions.c -o wordle
Çalıştırma:

PowerShell
.\wordle
🎮 Oyun Mantığı
Kullanıcıya toplam 6 tahmin hakkı verilir.

Tahminler 5 harf uzunluğunda olmalıdır.

Yeşil: Harf doğru yerde.

Sarı: Harf kelimede var ama yeri yanlış.

Gri: Harf kelimede bulunmuyor.
