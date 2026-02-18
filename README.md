📝 C-Wordle Game (CLI Based)
Bu proje, popüler Wordle kelime oyununun C dili kullanılarak terminal üzerinden oynanabilen bir versiyonudur. YTÜ Bilgisayar Mühendisliği dersi kapsamında geliştirilmiştir.

🚀 Özellikler
Dinamik Geri Bildirim: Tahmin edilen harflerin hedef kelimede olup olmadığını ve yerlerinin doğruluğunu anlık olarak gösterir.

Harf Takibi: Denenen harfleri "Yeri Yanlışlar" ve "Hiç Bulunmayanlar" olarak listeler; her harfi sadece bir kez göstererek ekran kalabalığını önler.

Akıllı Harf Kontrolü: "ADANA - ALTAN" gibi çift harf içeren senaryolarda doğru eşleşme mantığını uygular.

Hata Yönetimi: Geçersiz uzunluktaki (5 harf olmayan) girişleri tespit eder ve hakkınızdan düşmez.

Güvenli Giriş: Bellek taşmalarını (Buffer Overflow) önlemek için kısıtlı giriş ve tampon temizliği (Buffer Cleaning) kullanır.

🛠️ Kurulum ve Çalıştırma
Projenin bilgisayarınızda derlenebilmesi için GCC derleyicisinin yüklü olması gerekmektedir.

Terminali Açın: Proje dosyalarının (main.c, functions.c, header.h) bulunduğu klasöre gidin.

Derleyin:

Bash
gcc main.c functions.c -o wordle
Çalıştırın:

Bash
./wordle
(Windows için .\wordle)

🎮 Nasıl Oynanır?
Menüden 1 tuşuna basarak oyunu başlatın.

5 harfli bir kelime tahmini yapın.

Son Durum: Harf doğru yerdeyse yerinde görünür (Örn: A__A_).

Yeri Yanlışlar: Harf kelimede var ama yeri yanlışsa bu listede görünür.

Hiç Bulunmayanlar: Kelimede hiç olmayan harfler burada listelenir.

Toplam 6 hak içinde kelimeyi bulmaya çalışın!

💻 Teknik Detaylar
Diller: C

Bellek Yönetimi: Karakter dizileri için Null Terminator (\0) kullanımı ile bellek güvenliği sağlanmıştır.

Kütüphaneler: stdio.h, string.h, ctype.h, stdlib.h.
