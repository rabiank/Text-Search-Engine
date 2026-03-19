🔍 C Metin Arama Motoru (Text Search Engine)
Bu proje, yapılandırılmış metin dosyaları içerisinde hızlı ve etkili bir şekilde kelime araması yapmak için geliştirilmiş bir C programıdır. Dosya işleme (File I/O) ve string manipülasyonu yeteneklerini sergileyen bir öğrenci projesi çalışmasıdır.

✨ Özellikler
Dinamik Arama: Kullanıcıdan alınan herhangi bir anahtar kelimeyi dosya içerisinde arar.

Detaylı Raporlama: Kelimenin geçtiği tüm satır numaralarını tek tek listeler.

İstatistiksel Veri: Aramanın sonunda kelimenin toplamda kaç kez geçtiğini (frekansını) hesaplar.

Hata Yönetimi: Dosya yolu hatalarını veya bulunamayan dosyaları kullanıcıya bildirir.

🚀 Başlangıç
Projeyi yerel makinenizde çalıştırmak için aşağıdaki adımları izleyebilirsiniz:

Gereksinimler
Bir C derleyicisi (GCC, Clang veya MSVC).

VS Code veya herhangi bir metin düzenleyici.

Kurulum ve Çalıştırma
Bu depoyu bilgisayarınıza indirin veya klonlayın.

Proje klasöründe terminali açın.

Kodu derleyin:

Bash
gcc main.c -o arama_motoru
Programı çalıştırın:

Bash
./arama_motoru
📂 Kullanım
Program açıldığında sizden iki bilgi isteyecektir:

Aranacak Kelime: Bulmak istediğiniz terim.

Dosya Adı: Aramanın yapılacağı .txt dosyasının adı (örn: data.txt).

Not: Aramak istediğiniz metin dosyasının, programın .exe dosyası ile aynı klasörde olduğundan emin olun.

🛠️ Teknik Detaylar
Dil: C

Kütüphaneler: stdio.h, string.h, stdlib.h

Algoritma: strstr fonksiyonu kullanılarak satır bazlı tarama yapılmıştır.

👤 Hazırlayan
Rabia Nur KUZÇALI
Gıysasettin İNCE
Doğukan GÜNGÖR
Kerim TUNÇ