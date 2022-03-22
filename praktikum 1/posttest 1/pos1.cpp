#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int x1,x2,y1,y2,px,py;
	float hasil;
	cout << "MENGHITUNG JARAK ANTARA DUA TITIK\n";
	cout << "Masukan titik A X1: ",cin >> x1;
	cout << "Masukan titik A Y1: ",cin >> y1;
	cout << "Masukan titik B X2: ",cin >> x2;
	cout << "Masukan titik B Y2: ",cin >> y2;
	px = pow(x2-x1,2);
	py = pow(y2-y1,2);
	hasil = sqrt(px+py);
	cout << "Jarak atara dua titik adalah : "<<hasil;
	return 0;
	
}
