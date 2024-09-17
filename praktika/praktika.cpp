// praktika.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{/*
	int n;
	int a, b;
	a = 40;
	b = 22;
	cout << "pirojok stoit " << a << " rub " << b << " kop ";
	cout << "\nskolko pirojkov nado? ";
	cin >> n;
	a *= n;
	b *= n;
	cout << "s vas " << a << " rub " << b << " kop";
	*/
	/*
	int N;
	cin >> N;

	int hours = N / 3600;
	int minutes = (N % 3600) / 60;
	int seconds = N % 60;

	cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes << ":" << (seconds < 10 ? "0" : "") << seconds;
	*/
	/*
	int mkad = 109, v,t;
	float s;
	cout << "vvedite vremya: ";
	cin >> t;
	cout << "\nvvedite skorost: ";
	cin >> v;
	
	s = mkad - (v*t);
	cout << "vasya bydet na: "<< s << " ot starta";

	*/
	/*
	int x, m, k;
	cout << "vvedite vertikalnoe kol dolek: ";
	cin >> x;
	
	cout << "vvedite gorizantalnoe kol dolek: ";
	cin >> m;
	cout << "vvedite kol dolek: ";
	cin >> k;
	x *= m;
	if (x % k == 0) {
		cout << "da mojno";
	}
	
	else {
		cout << "net nelzya";
	}
	*/
	int n, m,y,x;
	int n1, m1, x1, y1;

	cout << "vvedite shiriny  (n1): ";
	cin >> n1;
	cout << "vvedite dliny (m1): ";
	cin >> m1;
	cout << "vvedite rastooyznie yashi ot dal bortika (x1): ";
	cin >> x1;
	cout << "vvedite rastoyanie yashi ot bliz bortika (y1): ";
	cin >> y1;

	int distance1 = n1; 
	int distance2 = n1 - x1; 
	int distance3 = y1; 
	int distance4 = m1 - y1; 

	int minDistance = distance1;
	if (distance2 < minDistance) {
		minDistance = distance2;
	}
	if (distance3 < minDistance) {
		minDistance = distance3;
	}
	if (distance4 < minDistance) {
		minDistance = distance4;
	}

	cout << "Yashe nyjno proplit " << minDistance << " metrov";



	return 0;

}

