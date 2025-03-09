#include <stdio.h>
#include <stdlib.h>

int main()
{int x, a, b;
    printf("Basamak sayisini giriniz: ");
    scanf("%d", &x);

    // Diziyi oluþturuyoruz (x+1 olmasýnýn sebebi dizinin 0. index'inin de olmasý gerektiðidir)
    int dizi[x+1];

    // Ýlk iki elemaný baþlatýyoruz
    a = 1;
    b = 1;
    dizi[0] = a;  // ilk eleman
    dizi[1] = b;  // ikinci eleman

    // Ýlk iki sayýyý yazdýrýyoruz
    printf("%d\n", a);  // ilk deðeri yazdýrýyoruz
    printf("%d\n", b);  // ikinci deðeri yazdýrýyoruz

    // Diziyi oluþturuyoruz (geriye kalan elemanlarý hesaplýyoruz)
    for (int i = 2; i < x; i++) {
        dizi[i] = a + b;  // önceki iki sayýnýn toplamý

        // Diziyi istediðiniz formatta yazdýrýyoruz
        printf("%d\t", a);  // ilk sayýyý yazdýrýyoruz
        for (int m = i; m < i + 1; m++) {
            printf("%d\t", dizi[m]);  // dizinin güncel elemanýný yazdýrýyoruz
        }
        printf("%d\n", b);  // ikinci sayýyý yazdýrýyoruz

        // sonraki iþlem için a ve b'yi güncelliyoruz
        a = b;
        b = dizi[i];
    }
    return 0;
}
