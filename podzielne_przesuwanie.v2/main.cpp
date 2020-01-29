#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>

int main() {
  const int n = 100;
  int tab[n];
  srand(time(NULL));
  // srand(123); // stała sekwencja pseudo-losowa

  puts("Tablica źródłowa\n");

  for (int i=0; i < n; i++) {
    tab[i] = 1 + round(rand()*25.0 / RAND_MAX);
    printf("%d ", tab[i]);
  }

  int ilosc_usun = 0;
  for (int i=0; i < n; i++) {
    if (i < n - ilosc_usun) {
      tab[i] = tab[i + ilosc_usun];
      if ((tab[i] % 7 == 0) || (tab[i] % 13 == 0)) {
        tab[i] = tab[i + 1 + ilosc_usun];
        ilosc_usun++;
        i--; // kolejny element do analizy to ten obecnie następny, przesunięty w lewo
      }
    } else {
      tab[i] = 0;
    }
  }

  puts("\n\nTablica po filtrowaniu\n");
  for (int i=0; i < n; i++) {
    printf("%d ", tab[i]);
  }

  puts("\n\nBez elementów = 0:\n");
  int ile = 0;
  for (int i=0; i < n; i++) {
    if (tab[i] != 0) {
      printf("%d ", tab[i]);
      ile++;
    }
  }

  printf("\n\nZostało %d elementów\n", ile);
}