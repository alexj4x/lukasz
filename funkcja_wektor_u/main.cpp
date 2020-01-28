#include "funkcja_a.h"

double funkcja_b(float* u, int n) {
  return u[0]*n;
} // deklaracja z definicją (typ zwracany, nazwa, typy parametrów, ich kolejność i nazwy) oraz IMPLMEMENTACJA funkcji


int main() {
  float tab[2] = {123.43, 432.43};
  funkcja_a(tab, 2); // wywołanie funkcji (nazwa funkcji i wyrażenia odpowiadające jej parametrom, rodzielone przecinkami)
  funkcja_b(tab, 2);
  return 0;
}