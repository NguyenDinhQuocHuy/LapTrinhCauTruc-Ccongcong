// Khai bao nguyen mau cac ham xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTran a, int& m, int& n);
void ChayChuongTrinh(MaTran a, int& m, int& n);

// Dinh nghia cac ham xu ly menu
void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "0. Thoat khoi chuong trinh !";
	cout << endl << "1. Nhap gia tri tu ban phim";
	cout << endl << "2. Nhap tu dong";
	cout << endl << "3. Xuat ma tran";
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

void XuLyMenu(int menu, MaTran a, int& m, int& n)
{
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap so dong: "; cin >> m;
		cout << endl << "Nhap so cot: "; cin >> n;
		NhapMaTran(a, m, n);
		break;
	case 2:
		cout << endl << "Nhap so dong: "; cin >> m;
		cout << endl << "Nhap so cot: "; cin >> n;
		NhapTuDong(a, m, n);
		break;
	case 3:
		XuatMaTran(a, m, n);
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

void ChayChuongTrinh(MaTran a, int& m, int& n)
{
	int menu, soMenu = 3;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, m, n);
	} while (menu > 0);
}
