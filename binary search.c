#include <stdio.h>
int main()

{
int array[100];
int search, c, n;

  printf("\n\n");
  printf("Jumlah Elemen Array : ");
  scanf("%d", &n);

  printf("Masukan %d Integer \n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Masukan Integer yang akan anda cari : ");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      printf("\n\n%d ada pada baris ke %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("\n\n%d tidak dapat ditemukan.\n", search);
    return 0;
}

// Pencarian linier mengambil setiap elemen array satu per satu dalam urutan logis dan memeriksa keberadaan elemen yang diinginkan.
// Jika Anda mengakses semua item dan tidak dapat menemukan item yang Anda cari, pencarian akan gagal.
// Dalam kasus terburuk, jumlah rata-rata kasus yang dipindai adalah setengah dari ukuran array (n / 2).
// Oleh karena itu, pencarian linier dapat didefinisikan sebagai metode melintasi array untuk menemukan elemen tertentu.

