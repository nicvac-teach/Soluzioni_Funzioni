#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

void ordina(int n, vector<int> & v) 
{
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

void visualizza(int n, vector<int> & v) 
{
  int i;

  for (i = 0; i <= n - 1; i++) {
    cout << v[i] << endl;
  }
}

int main() 
{
  srand(time(0));

  int n, i;

  n = 3;
  vector<int> v(n);
  vector<int> w(n);

  // Caricamento dei vettori con numeri casuali.
  for (i = 0; i <= n - 1; i++) {
    v[i] = rand() % (n * 10 + 1);
    w[i] = rand() % (n * 10 + 1);
  }

  // Visualizzazione e ordinamento dei vettori
  cout << "Vettore V, non ordinato:" << endl;
  visualizza(n, v);
  ordina(n, v);
  cout << "Vettore V, ordinato:" << endl;
  visualizza(n, v);
  
  cout << "Vettore W, non ordinato:" << endl;
  visualizza(n, w);
  ordina(n, w);
  cout << "Vettore W, ordinato:" << endl;
  visualizza(n, w);
}
