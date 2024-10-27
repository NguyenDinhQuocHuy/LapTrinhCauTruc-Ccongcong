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
	cout << endl << "4. Tinh tong cac phan tu hang i";
	cout << endl << "5. Tinh tich cac phan tu cot j";
	cout << endl << "6. Tim phan tu Max hang, Min cot";
	cout << endl << "7. Xuat theo vung duong cheo";
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
	int vt, kq;
	switch (menu)
	{
	case 1:
		cout << endl << "1. Nhap gia tri tu ban phim";
		cout << endl << "Nhap so dong: "; cin >> m;
		cout << endl << "Nhap so cot: "; cin >> n;
		NhapMaTran(a, m, n);
		break;
	case 2:
		cout << endl << "2. Nhap tu dong";
		cout << endl << "Nhap so dong: "; cin >> m;
		cout << endl << "Nhap so cot: "; cin >> n;
		NhapTuDong(a, m, n);
		break;
	case 3:
		cout << endl << "3. Xuat ma tran";
		XuatMaTran(a, m, n);
		break;
	case 4:
		cout << endl << "4. Tinh tong cac phan tu hang i";
		do
		{
			cout << endl << "Nhap chi so hang i: "; cin >> vt;
		} while (vt < 0 || vt >= m);
		kq = TongHang(a, n, vt);
		cout << endl << "Tong cac phan tu hang " << vt << " la: " << kq;
		break;
	case 5:
		cout << endl << "5. Tinh tich cac phan tu cot j";
		do
		{
			cout << endl << "Nhap chi so cot j: "; cin >> vt;
		} while (vt < 0 || vt >= n);
		kq = TichCot(a, m, vt);
		cout << endl << "Tich cac phan tu " << vt << "la: " << kq;
		break;
	case 6:
		cout << endl << "6. Tim phan tu Max hang, Min cot";
		MaxHang_MinCot(a, m, n);
		break;
	case 7:
		cout << endl << "7. Xuat theo vung duong cheo" << endl;
		XuatVungDuongCheo(a, m, n);
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

void ChayChuongTrinh(MaTran a, int& m, int& n)
{
	int menu, soMenu = 7;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, m, n);
	} while (menu > 0);
}
