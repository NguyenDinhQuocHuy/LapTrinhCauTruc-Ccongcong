// Khai bao nguyen mau cac ham xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTran a, int& n);
void ChayChuongTrinh(MaTran a, int& m, int& n);

// Dinh nghia cac ham xu ly menu
void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "0. Thoat khoi chuong trinh !";
	cout << endl << "1. Nhap gia tri tu ban phim";
	cout << endl << "2. Nhap tu dong";
	cout << endl << "3. Xuat ma tran";
	cout << endl << "4. Xuat ma tran theo chieu xoan oc";
	cout << endl << "================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << endl << "Nhap 1 so de chon menu: "; cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}

void XuLyMenu(int menu, MaTran a, int& n)
{
	switch (menu)
	{
	case 1:
		cout << endl << "1. Nhap gia tri tu ban phim";
		cout << endl << "Nhap cap cua ma tran: "; cin >> n;
		NhapMaTran(a, n);
		break;
	case 2:
		cout << endl << "2. Nhap tu dong";
		cout << endl << "Nhap cap cua ma tran: "; cin >> n;
		NhapTuDong(a, n);
		break;
	case 3:
		cout << endl << "3. Xuat ma tran" << endl;
		XuatMaTran(a, n);
	case 4:
		cout << endl << "4. Xuat ma tran theo chieu xoan oc";
		cout << endl << "Nhap mot so nguyen n "; cin >> n;
		cout << endl << "Ma tran xoan oc: ";
		TaoMTXoanOc(a, n);
		XuatMaTran(a, n);
	default:
		cout << endl << "Thoat khoi chuong trinh !";
		break;
	}
	if (menu > 0)
	{
		cout << endl << "Nhan 1 phim bat ky de tiep tuc !";
		_getch();
	}
}

void ChayChuongTrinh(MaTran a, int& n)
{
	int menu, soMenu = 4;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}


