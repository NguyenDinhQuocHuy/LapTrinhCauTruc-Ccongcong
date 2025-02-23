#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace std;

#include "thuvien.h"
#include "menu.h"

int main()
{
	DSMH ds = {
		{"S1209", "Sua hop Vinamilk 220ml", 30, 7.9, "Sua"},
		{"S1030", "Sua hop Vinamilk 110ml", 9, 4.8, "Sua"},
		{"B1109", "Banh Cosy 200g", 7, 22.1, "Banh"},
		{"B1890", "Bang que huong dau", 14, 11.8, "Banh"},
		{"NN234", "Coca Cola 330ml", 30, 9.9, "Nuoc"}
	};
	int soLuong = 5;
	ChayChuongTrinh(ds, soLuong);
	return 1;
}