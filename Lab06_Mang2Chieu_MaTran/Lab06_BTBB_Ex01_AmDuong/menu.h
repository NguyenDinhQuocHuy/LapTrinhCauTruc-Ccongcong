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
	cout << endl << "4. Tinh tong S";
	cout << endl << "5. Tinh tong T";
	cout << endl << "6. Tinh S - T";
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
	float kq;
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
		break;
	case 4:
		cout << endl << "4. Tinh gia tri S"<< endl;
		XuatMaTran(a, n);
		kq = TongS(a, n);
		cout << "Tong S = " << kq;
		break;
	case 5:
		cout << endl << "5. Tinh gia tri T" << endl;
		XuatMaTran(a, n);
		kq = TongT(a, n);
		cout << "Tong T = " << kq;
		break;
	case 6:
		cout << endl << "6. Tinh S - T" << endl;
		kq = TinhT_S(a, n);
		cout << "S - T = " << kq;
		break;
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
	int menu, soMenu = 6;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}

