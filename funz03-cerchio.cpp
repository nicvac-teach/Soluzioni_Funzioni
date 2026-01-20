#include <iostream>
#include <cmath>

using namespace std;

float calcolaArea(float r) {
  float area;    
  area = r * r * M_PI;
  return area;
}

float calcolaCirconferenza(float r) {
  float circonferenza; 
  circonferenza = 2 * M_PI * r;
  return circonferenza;
}

int main() {
  float r1, r2;
  float area1, circ1, area2, circ2;
  
  cout << "Inserire i due raggi: " << endl;
  cin >> r1;
  cin >> r2;
  area1 = calcolaArea(r1);
  circ1 = calcolaCirconferenza(r1);
  area2 = calcolaArea(r2);
  circ2 = calcolaCirconferenza(r2);
  cout << "Cerchio con raggio " << r1 
    << ": area=" << area1 << "; circonferenza= " << circ1 << endl;
  cout << "Cerchio con raggio " << r2 
    << ": area=" << area2 << "; circonferenza= " << circ2 << endl;
}
