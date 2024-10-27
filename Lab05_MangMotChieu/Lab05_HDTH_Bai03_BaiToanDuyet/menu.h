// Khai bao nguyen mau cac ham xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n); //  Truyen tham tri cho n de luu su thay doi
void ChayChuongTrinh(DaySo a, int& n);

// Dinh nghia cac ham xu ly menu
void XuatMenu()
{
	cout << endl << "========CHON CHUC NANG========";
	cout << endl << "1. Nhap gia tri tu ban phim";
	cout << endl << "2. Nhap gia tri ngau nhien";
	cout << endl << "3. Xuat mang";
	cout << endl << "4. Dem so lan xuat hien cua x";
	cout << endl << "5. Tinh tong ca phan tu";
	cout << endl << "6. Dem va xuat so nguyen to";
	cout << endl << "7. Sap Duong Tang - Am Giam - 0";
	cout << endl << "0. Thoat khoi chuong trinh !";
	cout << endl << "==============================";
}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << endl << "Nhap mot so de chon menu: ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}

void XuLyMenu(int menu, DaySo a, int& n)
{
	int x, kq;
	switch (menu)
	{
	case 1:
		cout << endl << "1. Nhap gia tri tu ban phim";
		cout << endl << "Nhap so phan tu: ";
		cin >> n;
		NhapMang(a, n);
		break;
	case 2:
		cout << endl << "2. Nhap gia tri ngau nhien";
		cout << endl << "Nhap so phan tu: ";
		cin >> n;
		NhapTuDong(a, n);
		break;
	case 3:
		cout << endl << "3. Xuat mang";
		XuatMang(a, n);
		break;
	case 4:
		cout << endl << "Nhap gia tri cua x: ";
		cin >> x;
		kq = DemX(a, n, x);
		if (kq > 0)
			cout << endl << "Mang co chua " << kq << " phan tu " << x;
		else
			cout << endl << "Mang khong chua " << x;
		break;
	case 5:
		kq = TinhTong(a, n);
		cout << endl << "Tong cac phan tu la: " << kq;
		break;
	case 6:
		kq = DemVaXuatSoNT(a, n);
		if (kq > 0)
			cout << "Mang co chua " << kq << " so nguyen to !";
		else cout << endl << "Mang khong chua so nguyen to !";
		break;
	case 7:
		cout << "Mang truoc khi sap xep: "; XuatMang(a, n);
		cout << "Mang sau khi sap xep theo thu tu Duong Tang - Am Giam - 0 la: ";
		SapDuongT_AmG_Khong(a, n);
		XuatMang(a, n);
		break;
	default:
		cout << endl << "Thoat khoi chuong trinh !";
		break;
	}
	if (menu > 0)
	{
		cout << endl << "Nhan mot phim bat ky de tiep tuc !";
		_getch();
	}
}

void ChayChuongTrinh(DaySo a, int& n)
{
	int menu, soMenu = 7;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}

