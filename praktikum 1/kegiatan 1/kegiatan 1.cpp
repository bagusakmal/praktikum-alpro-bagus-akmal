#include <iostream>
#include <conio.h>
using namespace std;
class Hitung {
	friend ostream& operator<<(ostream&,const Hitung&);
	friend istream& operator>>(istream&, Hitung&);
	public:
		Hitung();
		void hitung_jumlahnya(){jumlah = (a+b+c);}
	private:
		int a,b,c;
		int jumlah;
};

Hitung::Hitung(){
	cout <<"Program menghitung jumlah 3 integer\n";
	cout <<"selamat berkarya\n"; 
}
istream& operator>>(istream& in, Hitung& masukan){
	cout <<"Masukan niali a: ";
	in >>masukan.a;
	cout <<"Masukan nilai b: ";
	in >>masukan.b;
	cout <<"Masukan nilai c: ";
	in >>masukan.c;
	return in;
}

ostream& operator<<(ostream& out, const Hitung& keluaran){
	out <<"Nilai a : "<<keluaran.a << endl;
	out <<"Nilai b : "<<keluaran.b << endl;
	out <<"Nilai c : "<<keluaran.c << endl;
	out << "Jumlah 3 integer di atas : "<<keluaran.jumlah<<endl;
	return out;
}

main(){
	Hitung x;
	cin>> x;
	x.hitung_jumlahnya();
	cout << x;
	getch();
	return 0;
}
