// Khai bao nguyen mau cac ham xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTran a, int& n);
void ChayChuongTrinh(MaTran a, int& n);

// Dinh nghia cac ham xu ly menu
void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "0. Thoat khoi chuong trinh !";
	cout << endl << "1. Nhap gia tri tu ban phim";
	cout << endl << "2. Nhap tu dong";
	cout << endl << "3. Xuat ma tran";
	cout << endl << "4. Tim ma tran chuyen vi cua mot ma tran M cho truoc";
	cout << endl << "5. Tinh hang cua ma tran";
	cout << endl << "6. Cong hai ma tran cung cap";
	cout << endl << "7. Tru hai ma tran cung cap";
	cout << endl << "8. Nhan ma tran voi mot so";
	cout << endl << "9. Nhan hai ma tran";
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

void XuLyMenu(int menu, MaTran a, MaTran b, MaTran kq, int& n)
{
	switch (menu)
	{
		int x;
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
		break;
	case 4:
		cout << endl << "4. Tim ma tran chuyen vi cua mot ma tran M cho truoc";
		cout << endl << "Ma tran ban dau: " << endl;
		XuatMaTran(a, n);
		cout << endl << "Ma tran chuyen vi: " << endl;
		XuatMaTran(a, n);
		break;
	case 5:
		cout << endl << "5. Tinh hang cua ma tran";
		
		break;
	case 6:
		cout << endl << "6. Cong hai ma tran cung cap";
		cout << endl << "Nhap cap cua 2 ma tran : "; cin >> n;
		cout << endl << "Ma tran 1: " << endl;
		NhapTuDong(a, n);
		XuatMaTran(a, n);
		cout << endl << "Ma tran 2: " << endl;
		NhapTuDong(b, n);
		XuatMaTran(b, n);
		cout << endl << "Ma tran sau khi cong la: " << endl;
		CongHaiMaTran(a, b, kq, n);
		XuatMaTran(kq, n);
		break;
	case 7:
		cout << endl << "7. Tru hai ma tran cung cap";
		cout << endl << "Nhap cap cua 2 ma tran : "; cin >> n;
		cout << endl << "Ma tran 1: " << endl;
		NhapTuDong(a, n);
		XuatMaTran(a, n);

		cout << endl << "Ma tran 2: " << endl;
		NhapTuDong(b, n);
		XuatMaTran(b, n);

		cout << endl << "Ma tran sau khi cong la: " << endl;
		TruHaiMaTran(a, b, kq, n);
		XuatMaTran(kq, n);
		break;
	case 8:
		cout << endl << "8. Nhan ma tran voi mot so";
		cout << endl << "Nhap mot so : "; cin >> x;
		cout << endl << "Ma tran ban dau: " << endl;
		NhapTuDong(a, n);
		XuatMaTran(a, n);
		cout << endl << "Ma tran luc sau: " << endl;
		NhanMaTranVoi1So(a, n, x);
		XuatMaTran(a, n);
		break;
	case 9:
		cout << endl << "9. Nhan hai ma tran";
		cout << endl << "Nhap cap cua 2 ma tran : "; cin >> n;

		cout << endl << "Ma tran 1: " << endl;
		NhapTuDong(a, n);
		XuatMaTran(a, n);

		cout << endl << "Ma tran 2: " << endl;
		NhapTuDong(b, n);
		XuatMaTran(b, n);

		cout << "Ma tran sau khi nhan : " << endl;
		Nhan2MaTran(a, b, kq, n);
		XuatMaTran(kq, n);
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

void ChayChuongTrinh(MaTran a, MaTran b, MaTran kq, int& n) 
{
	int menu, soMenu = 9;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, b, kq, n);
	} while (menu > 0);
}


