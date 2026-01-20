#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

int migliorGiro(vector<int> v, int n) 
{
  int min;
  int i, iMin;

  min = v[0];
  iMin = 0;

  // Esamino il vettore dalla seconda cella. La prima cella è stata usata per
  // inizializzare la variabile min.
  for (i = 1; i <= n - 1; i++) 
  {
    if (v[i] < min) 
    {
      min = v[i];
      iMin = i;
    }
  }

  // iMin va da 0 a N-1, il giro da 1 a N, quindi restituisco iMin + 1.
  iMin = iMin + 1;

  return iMin;
}

int migliorTempo(vector<int> v, int n) 
{
  int min;
  int i, iMin;

  min = v[0];
  iMin = 0;

  // Esamino il vettore dalla seconda cella. La prima cella è stata usata per
  // inizializzare la variabile min.
  for (i = 1; i <= n - 1; i++) 
  {
    if (v[i] < min) 
    {
      min = v[i];
      iMin = i;
    }
  }

  return min;
}

void ordinaTempi(vector<int> & v, int n) {
  int i, j, t;

  for (i = 0; i <= n - 1; i++) 
  {
    for (j = 0; j <= n - 2; j++) 
    {
      if (v[j] > v[j + 1]) 
      {
        t = v[j];
        v[j] = v[j + 1];
        v[j + 1] = t;
      }
    }
  }
}

void riempiGiri(vector<int> & v, int n) 
{
  int i;

  for (i = 0; i <= n - 1; i++) 
  {
    // Assegno alla cella un numero casuale fra 60 e 64
    v[i] = 60 + rand() % 5;
  }
}

int tempoGara(vector<int> v, int n) 
{
  // Il tempo gara è dato dalla somma dei tempi di ogni giro.
  int i, somma;

  somma = 0;
  for (i = 0; i <= n - 1; i++) 
  {
    somma = somma + v[i];
  }

  return somma;
}

void visualizzaGiri(vector<int> v, int n) {
  int i;

  for (i = 0; i <= n - 1; i++) 
  {
    cout << i + 1 << ": " << v[i] << endl;
  }
}


int main() {
  int n;

  cout << "Da quanti giri è composta la gara?" << endl;
  cin >> n;
  vector<int> ham(n);
  vector<int> ver(n);

  // Caricamento dei vettori con numeri casuali.
  riempiGiri(ham, n);
  riempiGiri(ver, n);

  // Visualizzo i tempi per ogni giro.
  cout << "Gara di Hamilton:" << endl;
  visualizzaGiri(ham, n);
  cout << "Gara di Verstappen:" << endl;
  visualizzaGiri(ver, n);
  
  int hamGiro, hamTempo, hamTot, verGiro, verTempo, verTot;

  hamGiro = migliorGiro(ham, n);
  hamTempo = migliorTempo(ham, n);
  hamTot = tempoGara(ham, n);
  verGiro = migliorGiro(ver, n);
  verTempo = migliorTempo(ver, n);
  verTot = tempoGara(ver, n);
  
  cout << "Hamilton. Tempo gara: " << hamTot 
    << "s; Miglior giro: " << hamGiro
    << ", tempo: " << hamTempo << "s" << endl;
  
  cout << "Verstappen. Tempo gara: " << verTot
    << "s; Miglior giro: " << verGiro
    << ", tempo: " << verTempo << "s" << endl;
  string vincitore;
  vector<int> garaVinc(n);

  if (verTot < hamTot) 
  {
    vincitore = "Verstappen";
    garaVinc = ver;
  } 
  else 
  {
    vincitore = "Hamilton";
    garaVinc = ham;
  }
  cout << "Vincitore: " << vincitore << endl;
  ordinaTempi(garaVinc, n);
  cout << "I tempi del vincitore, dal migliore al peggiore" << endl;
  visualizzaGiri(garaVinc, n);
}


