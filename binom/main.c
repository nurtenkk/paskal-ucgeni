#include <stdio.h>
#include <stdlib.h>

int main()
{int x, a, b;
    printf("Basamak sayisini giriniz: ");
    scanf("%d", &x);

    // Diziyi olu�turuyoruz (x+1 olmas�n�n sebebi dizinin 0. index'inin de olmas� gerekti�idir)
    int dizi[x+1];

    // �lk iki eleman� ba�lat�yoruz
    a = 1;
    b = 1;
    dizi[0] = a;  // ilk eleman
    dizi[1] = b;  // ikinci eleman

    // �lk iki say�y� yazd�r�yoruz
    printf("%d\n", a);  // ilk de�eri yazd�r�yoruz
    printf("%d\n", b);  // ikinci de�eri yazd�r�yoruz

    // Diziyi olu�turuyoruz (geriye kalan elemanlar� hesapl�yoruz)
    for (int i = 2; i < x; i++) {
        dizi[i] = a + b;  // �nceki iki say�n�n toplam�

        // Diziyi istedi�iniz formatta yazd�r�yoruz
        printf("%d\t", a);  // ilk say�y� yazd�r�yoruz
        for (int m = i; m < i + 1; m++) {
            printf("%d\t", dizi[m]);  // dizinin g�ncel eleman�n� yazd�r�yoruz
        }
        printf("%d\n", b);  // ikinci say�y� yazd�r�yoruz

        // sonraki i�lem i�in a ve b'yi g�ncelliyoruz
        a = b;
        b = dizi[i];
    }
    return 0;
}
