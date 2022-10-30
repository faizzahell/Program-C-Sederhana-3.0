#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// grup variabel
	int bil1, bil2, pil;
	float hasil;
	string operasi, jenis;
	
	// main menu 
	cout << "==========================================" << endl;
	cout << "---------PILIH OPERATOR ARITMATIKA--------" << endl;
	cout << "==========================================" << endl << endl;
	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perkalian" << endl;
	cout << "4. Pembagian" << endl;
	cout << "5. Modulus" << endl;
	cout << endl;
	
	cout << "Masukan Pilihan : "; cin >> pil;
	cout << "Masukan Bilangan pertama : "; cin >> bil1;
	cout << "Masukan Bilangan kedua : "; cin >> bil2;	
	
	// logika operasi aritmatika
	switch(pil){
	        case 1 : hasil = bil1 + bil2;
			operasi = '+';
			jenis = "penjumlahan";
			break;
		case 2 : hasil = bil1 - bil2;
			operasi = '-';
			jenis = "pengurangan";
			break;
		case 3 : hasil = bil1 * bil2;
			operasi = 'x';
			jenis = "perkalian";
			break;
		case 4 : hasil = bil1 / bil2;
			operasi = ':';
			jenis = "pembagian";
			break;
		case 5 : hasil = bil1 % bil2;
			operasi = '%';
			jenis = "modulus";
			break;
		default :
			cout << "Salah Masukan Operator" << endl;
	} cout << endl;
	
	//output
	cout << "==========================================" << endl;
	cout << "Hasil " <<jenis <<" dari " <<bil1 <<operasi <<bil2 <<" = " <<hasil <<endl;
	cout << "==========================================" << endl;
	
	getch();
	
	// Program by Faizahel 499164
}
