#include <iostream>

using namespace std;

int main(){
	float liter;
	int a=7000, b=9000, total;
	string nama, jenisbensin;
	 cout << "masukan nama pelangan:",cin >> nama;
	 cout << "masukan jenis bensin: ",cin >> jenisbensin;
	 cout << "masukan total liter yang di beli: ",cin >> liter;
	 if (jenisbensin == "pertalite"){
	 	total=a*liter;
	 	cout << "total harga:"<<total;
	 }
	 else if(jenisbensin == "pertamax"){
	 	total=b*liter;
	 	cout << "total harga:"<<total;
	 }
	 return 0;
}
