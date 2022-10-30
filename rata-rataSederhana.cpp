#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	// nama variabel
	float a, b, c, d, e;
	
	// main menu
	cout << "============================================================" << endl;
	cout << "--------------Program Rata-rata Sederhana-------------------" << endl;
	cout << "============================================================" << endl << endl;
	
	cout << "Masukan bilangan pertama : "; cin >> a;
	cout << "Masukan bilangan kedua : "; cin >> b;
	cout << "Masukan bilangan ketiga : "; cin >> c;
	cout << "Masukan bilangan keempat : "; cin >> d;
	cout << "Masukan bilangan kelima : "; cin >> e;
	cout << endl;
	
	// function average
	float avg = (a + b + c + d + e) / 5;
	
	// output
	cout << "============================================================" << endl;
	cout << "Hasil rata-rata dari kelima bilangan : " << avg << endl;
	cout << "============================================================" << endl;
	cout << "Program By Faizaahell_";
	
	getch();
	
	// Program by Faizahel 499164 
}
