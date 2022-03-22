#include "_hitung.h"

Hitung::Hitung(){
	cout <<"Program menghitung jumlah 3 integer\n ";
	cout <<"Selamat berkarya\n";
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
