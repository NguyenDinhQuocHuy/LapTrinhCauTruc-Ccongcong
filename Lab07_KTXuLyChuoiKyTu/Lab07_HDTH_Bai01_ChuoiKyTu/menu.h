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
	Chuoi s;
	unsigned int kq;
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap mot chuoi : ";
		cin.ignore(1);                                    // Xoa bo dem ban phim
		gets_s(s);                                        // Nhap chuoi co khoang trang
		kq = ChieuDai(s);
		cout << endl << "Chieu dai cua chuoi " << s << " la: " << kq;
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
	int menu, soMenu = 2;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu > 0);
}


