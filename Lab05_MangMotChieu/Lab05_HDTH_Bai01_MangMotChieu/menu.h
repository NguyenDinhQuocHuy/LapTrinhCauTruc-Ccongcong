// Khai bao nguyen mau cac ham xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int &n); //  Truyen tham tri cho n de luu su thay doi
void ChayChuongTrinh(DaySo a, int &n);

// Dinh nghia cac ham xu ly menu
void XuatMenu()
{
	cout << endl << "========CHON CHUC NANG========";
	cout << endl << "1. Nhap gia tri tu ban phim";
	cout << endl << "2. Nhap gia tri ngau nhien";
	cout << endl << "3. Xuat mang";
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
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap so phan tu: ";
		cin >> n;
		NhapMang(a, n);
		break;
	case 2:
		cout << endl << "Nhap so phan tu: ";
		cin >> n;
		NhapTuDong(a, n);
		break;
	case 3:
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
	int menu, soMenu = 3;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}