#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

void metinAra(const char *dosyaAdi, const char *arananKelime) {
    FILE *fp = fopen(dosyaAdi, "r");
    char satir[MAX_LINE_LENGTH];
    int satirNumarasi = 0;
    int toplamTekrar = 0;
    int kelimeBulunduMu = 0;

    if (fp == NULL) {
        printf("Hata: Dosya acilamadi (%s)\n", dosyaAdi);
        return;
    }

    printf("\n--- Arama Sonuclari ---\n");

    while (fgets(satir, MAX_LINE_LENGTH, fp)) {
        satirNumarasi++;
        char *ptr = satir;

        // Satir icinde kelimeyi ara (bir satirda birden fazla gecebilir)
        while ((ptr = strstr(ptr, arananKelime)) != NULL) {
            if (!kelimeBulunduMu) {
                printf("Kelimenin gectigi satirlar: ");
                kelimeBulunduMu = 1;
            }
            
            printf("%d ", satirNumarasi);
            toplamTekrar++;
            ptr += strlen(arananKelime); // Arama konumunu ilerlet
        }
    }

    if (toplamTekrar > 0) {
        printf("\nToplam tekrar sayisi: %d\n", toplamTekrar);
    } else {
        printf("Kelime dosya icerisinde bulunamadi.\n");
    }

    fclose(fp);
}

int main() {
    char dosyaAdi[100];
    char arananKelime[50];

    printf("Aranacak kelimeyi girin: ");
    scanf("%s", arananKelime);

    printf("Dosya adini girin (orn: metin.txt): ");
    scanf("%s", dosyaAdi);

    metinAra(dosyaAdi, arananKelime);

    return 0;
}