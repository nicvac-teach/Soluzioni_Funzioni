#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

void riempiVettore(vector<int> & v, int n, bool generaPari) {
  int i;

  for (i = 0; i <= n - 1; i++) {
    int x;
    bool xPari;

    // Assegno a x il numero casuale
    x = rand() % (n * 10);

    // xPari è vero se x è pari
    xPari = (x % 2 == 0);
    if (generaPari) {
      // Ho chiesto di generare i pari
      if (xPari) {
        // x è pari
        v[i] = x;
      } else {
        // x+1 è pari
        v[i] = x + 1;
      }
    } else {
      // Ho chiesto di generare i dispari
      if (xPari) {
        // x+1 è dispari
        v[i] = x + 1;
      } else {
        // x è dispari
        v[i] = x;
      }
    }
  }
}

void ordinaVettore(vector<int> & v, int n) {
  int i, j, t;

  for (i = 0; i <= n - 1; i++) {
    for (j = 0; j <= n - 2; j++) {
      if (v[j] > v[j + 1]) {
        t = v[j];
        v[j] = v[j + 1];
        v[j + 1] = t;
      }
    }
  }
}

void visualizzaVettore(vector<int> v, int n) {
  int i;

  for (i = 0; i <= n - 1; i++) {
    cout << v[i] << endl;
  }
}

void visualizzaVettoreInverso(vector<int> v, int n) {
  int i;

  for (i = n - 1; i >= 0; i--) {
    cout << v[i] << endl;
  }
}


int main() {
  int n, i;

  cout << "Quanti numeri generare?" << endl;
  cin >> n;
  vector<int> v(n);
  vector<int> w(n);

  // Caricamento del vettore con numeri casuali pari o dispari.
  riempiVettore(v, n, true);
  riempiVettore(w, n, false);

  // Visualizzo e Ordino i vettori
  cout << "Vettore V pari, non ordinato:" << endl;
  visualizzaVettore(v, n);
  ordinaVettore(v, n);
  cout << "Vettore V, ordinato:" << endl;
  visualizzaVettore(v, n);
  cout << "Vettore W dispari, non ordinato:" << endl;
  visualizzaVettore(w, n);
  ordinaVettore(w, n);
  cout << "Vettore W, ordinato:" << endl;
  visualizzaVettore(w, n);
  cout << "Vettore W, inverso" << endl;
  visualizzaVettoreInverso(w, n);
  return 0;
}



