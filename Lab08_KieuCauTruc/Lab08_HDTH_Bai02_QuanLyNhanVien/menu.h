// Khai bao nguyen mau cac ham xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MangNV a, int& n);
void ChayChuongTrinh(MangNV a, int& n);

// Dinh nghia cac ham xu ly menu
void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "1. Nhap danh sach nhan vien moi";
	cout << endl << "2. Xuat danh sach sinh vien";
	cout << endl << "3. Them mot nhan vien moi";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << endl << "Nhap mot so de chon menu: "; cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}

void XuLyMenu(int menu, MangNV a, int& n)
{
	switch (menu)
	{
	case 1:
		cout << endl << "1. Nhap danh sach nhan vien moi" << endl;
		cout << endl << "Nhap so nhan vien: ";
		cin >> n;
		NhapDSNV(a, n);
		break;
	case 2:
		cout << endl << "2. Xuat danh sach sinh vien" << endl;
		XuatDanhSachNV(a, n);
		break;
	case 3:
		cout << endl << "3. Them mot nhan vien moi" << endl;
		ThemMotNV(a, n);
		XuatDanhSachNV(a, n);
		break;
	default:
		cout << endl << "Thoat khoi chuong trinh !";
		break;
	}
	if (menu > 0)
	{
		cout << endl << "Nhap 1 phim bat ky de tiep tuc !";
		_getch();
	}
}

void ChayChuongTrinh(MangNV a, int& n)
{
	int menu, soMenu = 3;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}


