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
	cout << endl << "4. Tinh T = Tong tren duong cheo chinh";
	cout << endl << "5. Tinh D = Tich duoi duong cheo phu";
	cout << endl << "6. Tinh P = Tich SNT thuoc DC phu";
	cout << endl << "7. Tinh S = T + D - P";
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
	long kq;
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
		cout << endl << "3. Xuat ma tran";
		XuatMaTran(a, n);
	case 4:
		cout << endl << "4. Tinh T = Tong tren duong cheo chinh";
		kq = TongTren(a, n);
		cout << endl << "T = " << kq;
		break;
	case 5:
		cout << endl << "5. Tinh D = Tich duoi duong cheo phu";
		kq = TichDuoi(a, n);
		cout << endl << "D = " << kq;
		break;
	case 6:
		cout << endl << "6. Tinh P = Tich SNT thuoc DC phu";
		kq = TichSoNT_DCPhu(a, n);
		cout << endl << "P = " << kq;
		break;
	case 7:
		cout << endl << "7. Tinh S = T + D - P";
		kq = TinhTongS(a, n);
		cout << endl << "S = " << TongTren(a, n) << " + " << TichDuoi(a, n)
			<< " - " << TichSoNT_DCPhu(a, n) << " = " << kq;
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
	int menu, soMenu = 7;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}

