#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

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

void riempiVettore(vector<int> & v, int n) {
  int i;

  for (i = 0; i <= n - 1; i++) {
    int x;

    // Assegno a x il numero casuale
    v[i] = rand() % (n * 10);
  }
}

void visualizzaVettore(vector<int> v, int n, bool pos) {
  int i;

  for (i = 0; i <= n - 1; i++) {
    if (pos == true) {
      cout << i << ": ";
    }
    cout << v[i] << endl;
  }
}

int maxVettore(vector<int> v, int n) {
  int max;
  int i, iMax;

  max = v[0];
  iMax = 0;

  // Esamino il vettore dalla seconda cella. La prima cella è 
  // stata usata per inizializzare la variabile max.
  for (i = 1; i <= n - 1; i++) {
    if (v[i] > max) {
      max = v[i];
      iMax = i;
    }
  }
  cout << "Il massimo è nella posizione " << iMax << endl;

  return max;
}


int main() {
  int n, max;

  cout << "Quanti numeri generare?" << endl;
  cin >> n;
  vector<int> v(n);
  vector<int> w(n);

  // Caricamento del vettore con numeri casuali.
  riempiVettore(v, n);
  riempiVettore(w, n);

  // Visualizzo e i vettori. Per W visualizzo anche le posizioni.
  cout << "Vettore V, non ordinato:" << endl;
  visualizzaVettore(v, n, false);
  
  max = maxVettore(v, n);
  cout << "Valore massimo di V: " << max << endl;
  
  cout << "Vettore W, non ordinato:" << endl;
  visualizzaVettore(w, n, true);
  
  max = maxVettore(w, n);
  cout << "Valore massimo di W: " << max << endl;
  
  ordinaVettore(v, n);
  cout << "Vettore V, ordinato:" << endl;
  visualizzaVettore(v, n, false);
  ordinaVettore(w, n);
  cout << "Vettore W, ordinato:" << endl;
  visualizzaVettore(w, n, true);
}

