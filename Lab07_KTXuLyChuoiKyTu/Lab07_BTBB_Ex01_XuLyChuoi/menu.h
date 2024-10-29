// Khai bao nguyen mau cac ham xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);
void ChayChuongTrinh();

// Dinh nghia cac ham xu ly menu

void XuatMenu()
{
	cout << endl << "======== CHON CHUC NANG ========";
	cout << endl << "1. Xoa tat ca cac ky tu x cho truoc khoi chuoi s";
	cout << endl << "2. Noi chuoi t vao sau chuoi s";
	cout << endl << "3. Dao nguoc mot chuoi ky tu s cho truoc";
	cout << endl << "4. Kiem tra mot chuoi s cho truoc co phai chuoi doi xung";
	cout << endl << "5. So sanh 2 chuoi s va t theo thu tu tu dien ( Co phan biet HOA - thuong )";
	cout << endl << "6. Cat kt tu dau cua chuoi s roi ghep vao cuoi chuoi s";
	cout << endl << "7. Doi chu HOA - thuong xen ke";
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
	char k;
	int n = ChieuDai(s);
	switch (menu)
	{
	case 1:
		cout << endl << "1. Xoa tat ca cac ky tu x cho truoc khoi chuoi s" << endl;
		
		cout << endl << "Nhap mot chuoi : ";
		cin.ignore(1);                                    // Xoa bo dem ban phim
		gets_s(s);                                        // Nhap chuoi co khoang trang

		cout << endl << "Nhap mot ky tu k: "; cin >> k;
		cout << endl << "Chuoi truoc khi xoa la: " << s;
		
		XoaTatCaKyTu(s, n, k);
		cout << endl << "Chuoi sau khi xoa la: " << s;
		break;
	case 2:
		cout << endl << "2. Noi chuoi t vao sau chuoi s" << endl;
		cout << endl << "Nhap chuoi s : ";
		cin.ignore(1);
		gets_s(s);
		cout << endl << "Nhap chuoi t : ";
		gets_s(t);
		
		NoiChuoiTVaoSauChuoiS(s, t);
		cout << endl << "Chuoi sau khi noi la: " << s;
		break;
	case 3:
		cout << endl << "3. Dao nguoc mot chuoi ky tu s cho truoc" << endl;
		
		cout << endl << "Nhap 1 chuoi : ";
		cin.ignore(1);
		gets_s(s);
		
		cout << endl << "Chuoi truoc khi dao nguoc : " << s << endl;;
		cout << endl << "Chuoi sau khi dao nguoc : " << s;
		break;
	case 4:
		cout << endl << "4. Kiem tra mot chuoi s cho truoc co phai chuoi doi xung" << endl;
		
		cout << endl << "Nhap 1 chuoi : ";
		cin.ignore(1);
		gets_s(s);

		
		break;
	case 5:
		cout << endl << "5. So sanh 2 chuoi s va t theo thu tu tu dien ( Co phan biet HOA - thuong )" << endl;
		
		cout << endl << "Nhap 1 chuoi : ";
		cin.ignore(1);
		gets_s(s);

		
		break;
	case 6:
		cout << endl << "6. Cat kt tu dau cua chuoi s roi ghep vao cuoi chuoi s" << endl;
		
		cout << endl << "Nhap 1 chuoi : ";
		cin.ignore(1);
		gets_s(s);

		
		break;
	case 7:
		cout << endl << "7. Doi chu HOA - thuong xen ke" << endl;
	
		cout << endl << "Nhap 1 chuoi : ";
		cin.ignore(1);
		gets_s(s);
		cout << endl << "Chuoi ban dau: " << s;
		HoaThuongXenKe(s);
		cout << endl << "Chuoi sau khi hoa thuong xen ke : " << s;
		HoaThuongXenKe(s);
		cout << endl << "Chuoi sau khi hoa thuong xen ke cach 2: " << s;
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




