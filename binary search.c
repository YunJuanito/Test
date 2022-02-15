#include <stdio.h>
int main()
{
  int c, first, last, middle, n, search, array[100];

  printf("Masukan Jumlah Elemen : ");
  scanf("%d", &n);

  printf("Masuka %d Integer : \n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Masukan angka yang akan ditemukan\n");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d ada pada barisan ke %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Tidak dapat menemukan, %d tidak ada dalam data\n", search);

  return 0;
}
