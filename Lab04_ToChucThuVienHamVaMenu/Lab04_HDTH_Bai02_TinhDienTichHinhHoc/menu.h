// Khai bao nguyen mau cac ham xu li menu

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);
void ChayChuongTrinh();

// Dinh nghia cac ham xu li menu

// Xuat danh sach chuc nang ra man hinh
void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "1. Tinh dien tich hinh vuong";
	cout << endl << "2. Tinh dien tich hinh chu nhat";
	cout << endl << "3. Tinh dien tich tam giac";
	cout << endl << "4. Tinh dien tich hinh tron ";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		// Xoa toan bo man hinh Console
		system("cls");

		// Goi ham xuat danh sach chuc nang (menu)
		XuatMenu();

		cout << endl << "Nhap 1 so de chon menu : ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}

void XuLyMenu(int menu)
{
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap do dai canh hinh vuong: ";
		cin >> a;
		dienTich = DienTichHinhVuong(a);
		cout << "Dien tich hinh vuong canh " << a << " la: " << dienTich;
		break;
	case 2:
		cout << endl << "Nhap chieu dai hinh chu nhat: "; cin >> a;
		cout << endl << "Nhap chieu dai hinh chu nhat: "; cin >> a;
		break;
	case 3:
		cout << endl << "Ban da chon chuc nang : Tinh dien tich tam giac";
		break;
	case 4:
		cout << endl << "Ban da chon chuc nang : Tinh dien tich hinh tron";
		break;
	default:
		cout << endl << "Thoat khoi chuong trinh";
		break;
	}

	if (menu > 0)
	{
		cout << endl << endl << "Nhan 1 phim bat ky de tiep tuc";
		_getch();
	}
}
void ChayChuongTrinh()
{
	int stt;  // Luu so thu tu menu duoc chon
	int soMenu = 5; // Luu so luong menu chuc nang
	do
	{
		stt = ChonMenu(soMenu);
		XuLyMenu(stt);
	} while (menu > 0);

}

