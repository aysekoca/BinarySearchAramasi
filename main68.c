

                 //VERÝLEN DÝZÝ ÜZERÝNDE BÝNARY SEARCH ÝLE ARAMA ÝÞLEMÝ //
#include <stdio.h>
// Insertion sort fonksiyonu: bir tamsayý dizisini artan sýrada sýralar.
void insertionSort(int arr[], int n) {
    int i, key, j;

    // Dizinin ikinci elemanýndan baþlayarak, önceki elemanlarla karþýlaþtýrýlýr.
    for (i = 1; i < n; i++) {
        key = arr[i];   // Geçerli elemaný bir deðiþkene kaydedilir.
        j = i - 1;      // Önceki elemanýn indeksini belirlenir.

        // Geçerli elemandan büyük tüm elemanlarý bir saða kaydýrýr.
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Geçerli elemaný sýralanmýþ alt-dizinin doðru pozisyonuna yerleþtirir.
        arr[j + 1] = key;
    }
}

// Binary search fonksiyonu: sýralanmýþ bir dizide bir tamsayý arar.
int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Eðer orta eleman aranan deðere eþitse, indeksini döndürür.
        if (arr[mid] == x)
            return mid;

        // Eðer orta eleman aranan deðerden küçükse, sað yarýmýnda aramaya devam eder.
        if (arr[mid] < x)
            left = mid + 1;

        // Eðer orta eleman aranan deðerden büyükse, sol yarýmýnda aramaya devam eder.
        else
            right = mid - 1;
    }

    // Eðer aranan deðer bulunamazsa, -1 deðerini döndürür.
    return -1;
}

// Ýþlevi göstermek için yazýlmýþ ana fonksiyon.
int main() {
    int dizi[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
    int n = sizeof(dizi) / sizeof(dizi[0]);   // Dizinin boyutunu hesaplar.
    int x = 47;

    insertionSort(dizi, n);   // Insertion sort fonksiyonunu kullanarak diziyi sýralar.

    // Binary search fonksiyonunu kullanarak sýralanmýþ dizide x deðerini arar.
    int sonuc = binarySearch(dizi, 0, n - 1, x);

    // Eðer aranan deðer bulunamazsa, bir mesaj yazdýrýr.
    if (sonuc == -1)
        printf("Sayi bulunamadi.");

    // Eðer aranan deðer bulunursa, dizideki indeksini yazdýrýr.
    else
        printf("Aranan sayi dizinin %d. indisinde bulundu.", sonuc);

    return 0;
}
