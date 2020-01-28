#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>

int main() {
  int tab[100];
  srand(time(NULL));

  for (int i=0; i < 100; i++) {
    tab[i] = round(rand()*26.0 / RAND_MAX);
    printf("%d ", tab[i]);
  }
  puts("\n\n\n");

  for (int i=0; i < 100; i++) {
    if ((tab[i] % 7 == 0) || (tab[i] % 13 == 0)) {
      for (int j=i; j < 100; j++) {
        if (j < 99) { // jeżeli j to nie jest indeks ostatniego elementu tablicy (tablica ma 100 elementów)
          tab[j] = tab[j+1];
        } else {
          tab[j] = 0;
        }
      }
    }
  }

  int ile = 0;
  for (int i=0; i < 100; i++) {
    if (tab[i] != 0) {
      printf("%d ", tab[i]);
      ile++;
    }
  }

  printf("Zostało %d elementów\n", ile);
}