// Khai bao nguyen mau cac ham xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);
void ChayChuongTrinh();

// Dinh nghia cac ham xu ly menu

void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "1. Tinh chieu dai cua chuoi";
	cout << endl << "2. Dem so luong ky tu X trong S";
	cout << endl << "3. Sao chep chuoi S sang T";
	cout << endl << "4. Chen ky tu X vao vi tri VT";
	cout << endl << "5. Xoa ky tu tai vi tri VT";
	cout << endl << "6. Doi sang chu in thuong";
	cout << endl << "7. Doi chuoi so sang mot so";
	cout << endl << "0. Thoat chong trinh";
	cout << endl << "================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << endl << "Nhap 1 so de chon menu: ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}

void XuLyMenu(int menu)
{
	Chuoi s, t;
	unsigned int vt, kq;
	char k;
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap mot chuoi : ";
		cin.ignore(1);                                    // Xoa bo dem ban phim
		gets_s(s);                                        // Nhap chuoi co khoang trang
		kq = ChieuDai(s);
		cout << endl << "Chieu dai cua chuoi " << s << " la: " << kq;
		break;
	case 2:
		cout << endl << "2. Dem so luong ky tu X trong S";
		cout << endl << "Nhap 1 chuoi : ";
		cin.ignore(1);
		gets_s(s);
		cout << endl << "Nhap kt tu can tim : "; cin >> k;
		kq = DemX(s, k);
		cout << endl << "Ky tu " << k << " xuat hien " << kq << " lan trong chuoi " << s;
		break;
	case 3:
		cout << endl << "3. Sao chep chuoi S sang T";
		cout << endl << "Nhap 1 chuoi : ";
		cin.ignore(1);
		gets_s(s);
		SaoChep(s, t);
		cout << endl << "Chuoi T: " << t;
		break;
	case 4:
		cout << endl << "4. Chen ky tu X vao vi tri VT";
		cout << endl << "Nhap 1 chuoi : ";
		cin.ignore(1);
		gets_s(s);

		cout << endl << "Nhap ky tu can chen: "; cin >> k;
		cout << endl << "Nhap vi tri muon chen: "; cin >> vt;
		ChenX(s, k, vt);
		cout << endl << "Sau khi chen, S la: " << s;
		break;
	case 5:
		cout << endl << "5. Xoa ky tu tai vi tri VT";
		cout << endl << "Nhap 1 chuoi : ";
		cin.ignore(1);
		gets_s(s);

		cout << endl << "Nhap vi tri muon xoa: "; cin >> vt;
		XoaTaiVT(s, vt);
		cout << endl << "Sau khi xoa, S la: " << s;
		break;
	case 6:
		cout << endl << "6. Doi sang chu in thuong";
		cout << endl << "Nhap 1 chuoi : ";
		cin.ignore(1);
		gets_s(s);

		ChuThuong(s);
		cout << endl << "Sau khi doi, chuoi S la: " << s;
		break;
	case 7:
		cout << endl << "7. Doi chuoi so sang mot so";
		do
		{
			cout << endl << "Nhap 1 chuoi so : ";
			cin.ignore(1);
			gets_s(s);
		} while (!KiemTra(s));

		kq = DoiSangSo(s);
		cout << endl << "So sau khi doi: " << kq;
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

void ChayChuongTrinh()
{
	int menu, soMenu = 7;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu > 0);
}



