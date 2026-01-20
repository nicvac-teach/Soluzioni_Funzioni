#include <iostream>

using namespace std;

float input() {
  float n=0;
  
  do {
    cout << "Inserisci un numero positivo" << endl;
    cin >> n;
  } while (n <= 0);
  
  return n;
}

float dividi(float a, float b) {
  float d;
  d = a / b;
  return d;
}


float moltiplica(float a, float b) {
  float m;
  m = a * b;
  return m;
}

float potenza(float a, int b) {
  float p;
  
  p = 1;
  for (int i = 1; i <= b; i++) {
      p = p * a;
  }
  
  return p;
}

float somma(float a, float b) {
  float s;
  s = a + b;
  return s;
}

float sottrazione(float a, float b) {
  float s;
  s = a - b;
  return s;
}

int main() {
  float n1, n2, x;
  
  n1 = input();
  n2 = input();
  x = somma(n1, n2);
  cout << "Somma: " << x << endl;
  x = sottrazione(n1, n2);
  cout << "Sottrazione:" << x << endl;
  x = moltiplica(n1, n2);
  cout << "Moltiplicazione: " << x << endl;
  x = potenza(n1, (int) n2);
  cout << "Potenza: " << x << endl;
  return 0;
}
