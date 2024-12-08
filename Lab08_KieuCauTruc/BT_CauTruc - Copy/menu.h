//Khai bao nguyen mau
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int chon, MangNV ds, int& n);
void ChayChuongTrinh();


//Dinh nghia ham
void XuatMenu()
{
	cout << "\n0. Thoat chuong trinh";
	cout << "\n1. Nhap danh sach nv";
	cout << "\n2. Xuat danh sach nv";
	cout << "\n3. Tim nhan vien theo ma";
	cout << "\n4. Xuat ds nv co ten x va muc luong > y";
	cout << "\n5. Sap tang theo ten, neu ten trung thi giam nam sinh";
	cout << "\n6. Sap tang theo ho, neu ho trung thi tang MaNV";
	cout << "\n7. In bang thong ke so luong nhan vien theo nam sinh";
}
/*Chon menu
Input:soMenu
Output: chon --> [0..soMenu] --> int
*/
int ChonMenu(int soMenu)
{
	int chon;
	do
	{
		cout << "\nNhap chon[0..." << soMenu << "]=";
		cin >> chon;
		if (0 <= chon && chon <= soMenu)
			break;
	} while (true);
	return chon;
}
//Xu ly menu
void XuLyMenu(int chon, MangNV ds, int& n)
{
	char MaNV[8];
	int vt;

	switch (chon)
	{
	case 0:
		cout << "\n0. Thoat chuong trinh";

		break;
	case 1:
		cout << "\n1. Nhap danh sach nv";
		cout << "\nNhap so luong nv:";
		cin >> n;
		NhapDS(ds, n);


		break;
	case 2:
		cout << "\n2. Xuat danh sach nv";
		XuatDS(ds, n);
		break;
	case 3:
		cout << "\n3. Tim nhan vien theo ma";
		XuatDS(ds, n);
		cout << "\nNhap ma can tim:";
		cin >> MaNV;
		vt = TimTheoMa(ds, n, MaNV);
		if (vt == -1)
			cout << "\nKhong co nv co manv=" << MaNV;
		else
			Xuat1NV(ds[vt]);
		break;
	case 5:
		cout << "\n5. Sap tang theo ten, neu ten trung thi giam nam sinh";
		XuatDS(ds, n);
		SapTangTen_GiamNS(ds, n);
		cout << "\nDanh sach tang theo ten:";
		XuatDS(ds, n);
		break;
	case 4:
		cout << "\n4. Xuat ds nv co ten x va muc luong > y";

		break;

	case 6:
		cout << "\n6. Sap tang theo ho, neu ho trung thi tang MaNV";
		break;
	case 7:
		cout << "\n7. In bang thong ke so luong nhan vien theo nam sinh";
		break;
	default:
		break;
	}
	_getch();
}

void ChayChuongTrinh()
{
	int soMenu = 5, chon;
	MangNV ds = {
		{"242404", "Nguyen Lan", "Huong", 2003, 10000},
		{"242000", "Tran Van", "Le", 2004, 5800},
		{"240024", "Nguyen", "Anh", 2005, 15000},
		{"241114", "Ngo Thi", "Huong", 2004, 30000},
		{"240004", "Le Van", "Thong", 2010, 2000}
	};
	int n = 5;
	do
	{
		system("cls");
		XuatMenu();
		chon = ChonMenu(soMenu);

		XuLyMenu(chon, ds, n);

	} while (chon != 0);
}

