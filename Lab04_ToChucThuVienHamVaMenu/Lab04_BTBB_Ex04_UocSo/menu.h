// Khai bao nguyen mau cac ham xu li menu

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);
void ChayChuongTrinh(unsigned int n);

// Dinh nghia cac ham xu li menu

// Xuat danh sach chuc nang ra man hinh
void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "1. Xuat cac uoc so cua n";
	cout << endl << "2. Dem so luong cac uoc so cua n";
	cout << endl << "3. Tinh tong cac uoc so cua n";
	cout << endl << "4. Tinh can bac 2 cua n ";
	cout << endl << "5. Tim so lon nhat nho hon hoac bang n ma la luy thua cua 2 ";
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

void XuLyMenu(int menu, unsigned int n)
{
	case 1:
	{
		cout << endl << "Xuat cac uoc so cua n" << endl;
		TimUocN(n);
	}
		break;
	case 2:
    {
		cout << endl << "Dem so luong cac uoc so cua n";
		cout << endl << TimSoLuongUoc(n);
    }
		break;
	case 3:
	{
		cout << endl << "Tinh tong cac uoc so cua n";
		cout << endl << TinhTongSoUoc(n);
	}
		break;
	case 4:
	{
		cout << endl << "Tinh can bac 2 cua n";
		CanBac2(n);
	}
		break;
	case 5:
	{
		cout << endl << "Tim so lon nhat nho hon hoac bang n ma la luy thua cua 2";
		cout << endl << SoLonNhat(n);
	}
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
void ChayChuongTrinh(unsigned int n)
{
	int menu;
	int soMenu = 5;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, n);
	} while (menu > 0);

}



