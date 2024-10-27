
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
	cout << endl << "1. Doi sang he nhi phan (b = 2)";
	cout << endl << "2. Doi sang he bat phan (b = 8";
	cout << endl << "3. Doi sang he thap luc phan (b = 16)";
	cout << endl << "4. Doi sang he co so 7";
	cout << endl << "5. Doi sang he co so b bat ky";
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
	int n, b;
	switch (menu)
	{
	case 1:
		cout << endl << "Doi sang he nhi phan";
		b = 2;
		DoiCoSo(n, 2);
		break;
	case 2:
		cout << endl << "Doi sang he bat phan";
		b = 8;
		DoiCoSo(n, 8);
		break;
	case 3:
		cout << endl << "Doi sang he thap luc phan";
		b = 16;
		DoiCoSo(n, 16);
		break;
	case 4:
		cout << endl << "Doi sang he co so 7";
		b = 7;
		DoiCoSo(n, 7);
		break;
	case 5:
		cout << endl << "Doi sang he co so b bat ky";
		cout << "\nNhap he co so:";
		cin >> b;
		DoiCoSo(n, b);
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
	int menu;
	int soMenu = 5;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu > 0);

}


