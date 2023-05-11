# BİNARY SEARCH ARAMA ALGORİTMASI
 Verilen dizi sıralı olmadığı için ilk önce "insertionSort" fonksiyonu eklenerek dizinin önce sıralanması sağlanmıştır. Daha sonra, sıralanmış dizi "binarySearch" fonksiyonuna gönderilerek arama işlemi gerçekleştirilmiştir. Bu sayede, aranan elemanın dizide var olup olmadığı doğru şekilde belirlenebilecektir.
Verilen dizi üzerinde Binary Search ile arama işlemi şu şekilde gerçekleştirilir:
 
İlk olarak, dizinin ortasındaki elemanı belirleyin. Bu eleman, dizinin ilk ve son elemanlarının ortalamasıdır.

Ortadaki eleman, aradığımız sayıya eşitse, arama işlemi tamamlanmıştır ve ortadaki elemanın indisini döndürürüz.

Eğer ortadaki eleman, aradığımız sayıdan küçükse, dizinin sağ yarısında aramaya devam ederiz.

Eğer ortadaki eleman, aradığımız sayıdan büyükse, dizinin sol yarısında aramaya devam ederiz.

Bu işlem, aradığımız sayı bulunana kadar tekrarlanır. Eğer sayı bulunamazsa, -1 değerini döndürürüz.
