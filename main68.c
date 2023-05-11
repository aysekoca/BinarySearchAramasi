

                 //VER�LEN D�Z� �ZER�NDE B�NARY SEARCH �LE ARAMA ��LEM� //
#include <stdio.h>
// Insertion sort fonksiyonu: bir tamsay� dizisini artan s�rada s�ralar.
void insertionSort(int arr[], int n) {
    int i, key, j;

    // Dizinin ikinci eleman�ndan ba�layarak, �nceki elemanlarla kar��la�t�r�l�r.
    for (i = 1; i < n; i++) {
        key = arr[i];   // Ge�erli eleman� bir de�i�kene kaydedilir.
        j = i - 1;      // �nceki eleman�n indeksini belirlenir.

        // Ge�erli elemandan b�y�k t�m elemanlar� bir sa�a kayd�r�r.
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Ge�erli eleman� s�ralanm�� alt-dizinin do�ru pozisyonuna yerle�tirir.
        arr[j + 1] = key;
    }
}

// Binary search fonksiyonu: s�ralanm�� bir dizide bir tamsay� arar.
int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // E�er orta eleman aranan de�ere e�itse, indeksini d�nd�r�r.
        if (arr[mid] == x)
            return mid;

        // E�er orta eleman aranan de�erden k���kse, sa� yar�m�nda aramaya devam eder.
        if (arr[mid] < x)
            left = mid + 1;

        // E�er orta eleman aranan de�erden b�y�kse, sol yar�m�nda aramaya devam eder.
        else
            right = mid - 1;
    }

    // E�er aranan de�er bulunamazsa, -1 de�erini d�nd�r�r.
    return -1;
}

// ��levi g�stermek i�in yaz�lm�� ana fonksiyon.
int main() {
    int dizi[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
    int n = sizeof(dizi) / sizeof(dizi[0]);   // Dizinin boyutunu hesaplar.
    int x = 47;

    insertionSort(dizi, n);   // Insertion sort fonksiyonunu kullanarak diziyi s�ralar.

    // Binary search fonksiyonunu kullanarak s�ralanm�� dizide x de�erini arar.
    int sonuc = binarySearch(dizi, 0, n - 1, x);

    // E�er aranan de�er bulunamazsa, bir mesaj yazd�r�r.
    if (sonuc == -1)
        printf("Sayi bulunamadi.");

    // E�er aranan de�er bulunursa, dizideki indeksini yazd�r�r.
    else
        printf("Aranan sayi dizinin %d. indisinde bulundu.", sonuc);

    return 0;
}
