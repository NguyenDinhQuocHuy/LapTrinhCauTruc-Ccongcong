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
	cout << endl << "2. Xuat danh sach nhan vien";
	cout << endl << "3. Them mot nhan vien moi";
	cout << endl << "4. Tim nhan vien theo ma so";
	cout << endl << "5. Cap nhat thong tin nhan vien";
	cout << endl << "6. Liet ke danh sach nhan vien theo nam sinh";
	cout << endl << "7. Sap danh sach nhan vien giam theo he so luong";
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
	int kq;
	int maSo;
	int namSinh;
	switch (menu)
	{
	case 1:
		cout << endl << "1. Nhap danh sach nhan vien moi" << endl;
		cout << endl << "Nhap so nhan vien: ";
		cin >> n;
		NhapDSNV(a, n);
		break;
	case 2:
		cout << endl << "2. Xuat danh sach nhan vien" << endl;
		XuatDanhSachNV(a, n);
		break;
	case 3:
		cout << endl << "3. Them mot nhan vien moi" << endl;
		ThemMotNV(a, n);
		XuatDanhSachNV(a, n);
		break;
	case 4:
		cout << endl << "4. Tim nhan vien theo ma so";
		XuatDanhSachNV(a, n);
		cout << endl << "Nhap ma so nhan vien: "; cin >> maSo;

		kq = TimTheoMaSo(a, n, maSo);
		if (kq == -1)
			cout << endl << "Khong tim thay nhan vien co ma so " << maSo;
		else
		{
			cout << endl << "Thong tin nhan vien co ma so " << maSo << endl;
			XuatTieuDe();
			XuatDongKeNgang();
			XuatMotNV(a[kq]);
			XuatDongKeNgang();
		}
		break;
	case 5:
		cout << endl << "5. Cap nhat thong tin nhan vien";
		cout << endl << "Nhap ma so nhan vien: "; cin >> maSo;
		kq = TimTheoMaSo(a, n, maSo);
		if (kq == -1)
			cout << endl << "Khong tim thay nhan vien co ma so " << maSo;
		else
		{
			CapNhatNV(a[kq]);
			cout << endl << "Chon chuc nang 2 de xem ket qua !";
		}
		break;
	case 6:
		cout << endl << "6. Liet ke danh sach nhan vien theo nam sinh";
		cout << endl << "Nhap nam sinh: "; cin >> namSinh;
		kq = TimNVTheoNamSinh(a, n, namSinh);
		if (kq == 0)
			cout << endl << "Khong tim thay nhan vien nao sinh nam " << namSinh;
		else
			cout << endl << "Co tat ca " << kq << " nhan vien sinh nam " << namSinh;
		break;
	case 7:
		cout << endl << "7. Sap danh sach nhan vien giam theo he so luong";
		SapGiamTheoHeSoLuong(a, n);
		cout << endl << "Danh sach nhan vien sau khi xep: " << endl;
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
	int menu, soMenu = 7;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}


