#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cstring>

void funkcja(int *w, int m, int k) {
  for (int i = m-1; i >= 0; i--) {
    if (i >= k) {
      w[i] = w[i-k];
    } else {
      w[i] = 0;
    }
  }
}

void wypisz(int *w, int m) {
  int ile = 0;
  for (int i=0; i < m; i++) {
      printf("%d ", w[i]);
    if (w[i] != 0) {
      ile++;
    }
  }
    printf("\n\nZostało %d niezerowych elementów\n\n", ile);
}

int main() {

  int w[6] = {53, 12, 745, 18, 26, -34};

  funkcja(w, 6, 3);

  wypisz(w, 6);

  int tab_zr[100];
  srand(time(NULL));

  for (int i=0; i < 100; i++) {
    tab_zr[i] = 1 + round(rand()*26.0 / RAND_MAX);
  }

  int tab[100];

  memcpy(tab, tab_zr, sizeof(int) * 100);


  for (int i=0; i < 100; i++) {
    printf("%d ", tab[i]);
  }
  puts("\n\n\n");

    funkcja(tab, 100, -3);
  wypisz(tab, 100);
  memcpy(tab, tab_zr, sizeof(int) * 100);

  funkcja(tab, 100, 3);
  wypisz(tab, 100);
  memcpy(tab, tab_zr, sizeof(int) * 100);

  funkcja(tab, 100, 98);
  wypisz(tab, 100);
  memcpy(tab, tab_zr, sizeof(int) * 100);

  funkcja(tab, 100, 99);
  wypisz(tab, 100);
  memcpy(tab, tab_zr, sizeof(int) * 100);

  funkcja(tab, 100, 100);
  wypisz(tab, 100);
  memcpy(tab, tab_zr, sizeof(int) * 100);

  funkcja(tab, 100, 10000);
  wypisz(tab, 100);
  memcpy(tab, tab_zr, sizeof(int) * 100);


}