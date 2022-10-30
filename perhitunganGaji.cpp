#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int hours, rate, pay;
	
	// header
	cout << "========================================================" << endl;
	cout << "---------------Program Perhitungan Gaji-----------------" << endl;
	cout << "========================================================" << endl << endl; 
	
	// main
	cout << "Masukkan waktu pekerjaan (..jam) : "; cin >> hours; 
	cout << "Masukkan jumlah gaji/jam : "; cin >> rate;
	cout << endl;
	
	// function perhitungan gaji
	pay = hours*rate;
	
	// output
	cout << "========================================================" << endl;
	cout << "Gaji yang diperoleh sebesar : Rp " << pay << ",00" << endl;
	cout << "========================================================" << endl;
	
	getch();
}

// project by Faizahel 499164
