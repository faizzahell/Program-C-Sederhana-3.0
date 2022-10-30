#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	// variabel yang akan diinput bilangan oleh user
	float x, y;
	
	// main menu user memasukan bilangan
	cout << "===============================================" << endl;
	cout << "---------------Penjumlahan Bilangan------------" << endl;
	cout << "===============================================" << endl << endl;
	
	cout << "Masukkan bilangan pertama : "; cin >> x;
	cout << "Masukkan bilangan kedua : "; cin >> y;
	cout << endl;
	
	// function program penjumlahan 
	float sum = x + y;
	
	// print hasil penjumlahan
	cout << "===============================================" << endl;
	cout << "Hasil penjumlahan : " << sum << endl;
	cout << "===============================================" << endl;
	
	getch();
	
	// Program by Faizahel 499164
}
