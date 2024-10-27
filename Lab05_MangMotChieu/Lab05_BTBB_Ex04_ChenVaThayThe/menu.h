void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);
void ChayChuongTrinh(DaySo a, int& n);

void XuatMenu()
{
	cout << endl << "1. Nhap mang";
	cout << endl << "2. Nhap tu dong";
	cout << endl << "3. Xuat mang";
	cout << endl << "4. Chen phan tu x vao mang a tai vi tri vt cho truoc";
	cout << endl << "5. Chen phan tu x vao sau phan tu lon nhat";
	cout << endl << "6. Chen phan tu x vao truoc so nguyen to dau tien trong mang";
	cout << endl << "7. Chen phan tu x vao mang sao cho"
	     << endl << "   chenh lech giua tong cac phan tu ben trai va ben phai x la nho nhat";
	cout << endl << "8. Chen phan tu x vao sau moi phan tu y cho truoc. Neu mang khong chua y thi chen tai vi tri 0";
	cout << endl << "9. Thay the moi phan tu y boi phan tu x cho truoc";
}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << endl << endl << "Chon chuc nang: "; cin >> stt;
	} while (stt<0 || stt>soMenu);
	return stt;
}

void XuLyMenu(int menu, DaySo a, int& n)
{
	int x, vt;
	switch (menu)
	{
	case 1:
		cout << endl << "1. Nhap mang";
		cout << endl << "Nhap so phan tu: "; cin >> n;
		NhapMang(a, n);
		break;
	case 2:
		cout << endl << "2. Nhap tu dong";
		cout << endl << "Nhap so phan tu: "; cin >> n;
		NhapTuDong(a, n);
		break;
	case 3:
		cout << endl << "3. Xuat mang";
		cout << endl << "Cac phan tu cua mang: ";
		XuatMang(a, n);
		break;
	case 4:
		cout << endl << "4. Chen phan tu x vao mang a tai vi tri vt cho truoc";
		cout << endl << "Nhap phan tu x: "; cin >> x;
		cout << endl << "Nhap vi tri can chen: "; cin >> vt;
		ChenPhanTuX(a, n, x, vt);
		XuatMang(a, n);
		break;
	case 5:
		cout << endl << "5. Chen phan tu x vao sau phan tu lon nhat";
		cout << endl << "Nhap phan tu x: "; cin >> x;
		ChenSauMax(a, n, x);
		XuatMang(a, n);
		break;
	case 6:
		cout << endl << "6. Chen phan tu x vao truoc so nguyen to dau tien trong mang";
		cout << endl << "Nhap phan tu x: "; cin >> x;
		ChenXTruocSNT(a, n, x);
		XuatMang(a, n);
		break;
	case 7:
		cout << endl << "7. Chen phan tu x vao mang sao cho"
			<< endl << "   chenh lech giua tong cac phan tu ben trai va ben phai x la nho nhat";
		cout << endl << "Nhap gia tri x: "; cin >> x;
		ChenXChoDMin(a, n, x);
		XuatMang(a, n);
			break;
	case 8:

		break;
	case 9:

		break;
	default:
		cout << endl << "Thoat chuong trinh";
		break;
	}
	if (menu > 0)
	{
		cout << endl << "Nhan 1 phim de tiep tuc !";
		_getch();
	}
}

	void ChayChuongTrinh(DaySo a, int& n)
	{
		int menu, soMenu = 9;
		do
		{
			menu = ChonMenu(soMenu);
			XuLyMenu(menu, a, n);
		} while (menu > 0);
	}
	