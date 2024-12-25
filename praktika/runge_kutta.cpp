#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

double f(double x, double y) {
  return x*x+y;
}


int main() {
  setlocale(LC_ALL, "ru_RU.UTF-8");

  double x, y, h, b;

  cout << "Введите начальное значение x: ";
  cin >> x;
  cout << "Введите начальное значение y: ";
  cin >> y;
  cout << "Введите шаг h: ";
  cin >> h;
  cout << "Введите конечное значение b: ";
  cin >> b;
  
  cout << "Метод Рунге-Кутты 4-го порядка:" << endl;

  while (x < b) {
        double k1 = h * f(x, y);
        double k2 = h * f(x + h/2.0, y + k1/2.0);
        double k3 = h * f(x + h/2.0, y + k2/2.0);
        double k4 = h * f(x + h, y + k3);
        
        y = y + (k1 + 2*k2 + 2*k3 + k4) / 6.0;
        
        x = x + h;
        
        cout << "y = " << y << endl; 
  

  cout << "Расчеты завершены." << endl;

  return 0;
}
