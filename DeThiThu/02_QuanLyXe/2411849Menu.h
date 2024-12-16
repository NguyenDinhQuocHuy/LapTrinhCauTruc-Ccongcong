// Khai bao nguyen mau ham xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DSQL ds, int& n);
void ChayChuongTrinh(DSQL ds, int n);

// Dinh nghia ham xu ly menu
void XuatMenu()
{
	cout << endl << "============================== CHON CHUC NANG ==============================";
	cout << endl << "1. Nhap danh sach xe";
	cout << endl << "2. Xuat danh sach xe";
	cout << endl << "3. Tinh tong gia mua cua tat ca xe co nam san xuat thuoc doan [x, y]";
	cout << endl << "4. Tim xe cuoi cung theo hang san xuat";
	cout << endl << "5. Sap xep danh sach xe giam theo hang xe, neu trung sap tang theo gia mua";
	cout << endl << "6. Xoa tat ca xe theo nam san xuat";
	cout << endl << "7. In bang thong ke so xe theo hang san xuat";
	cout << endl << "0. Thoat chuong trinh";
	cout << endl << "===========================================================================";
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

void XuLyMenu(int menu, DSQL ds, int& n)
{
	int start, end, kq, namSX;
	string hangSX;
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap so luong xe: "; cin >> n;
		NhapDSXe(ds, n);
		break;

	case 2:
		XuatDSXe(ds, n);
		break;

	case 3:
		cout << endl << "Nhap nam bat dau: "; cin >> start;
		cout << endl << "Nhap nam ket thuc: "; cin >> end;
		cout << endl << "Tong gia mua theo nam tu nam " << start << " den nam " << end
			<< " la " << TongGiaMuaTheoNam(ds, n, start, end) << " trieu dong";
		break;

	case 4:
		cout << endl << "Nhap hang san xuat: ";
		cin.ignore();
		_flushall();
		getline(cin, hangSX);
		kq = TimXeCuoiCungTheoHangSX(ds, n, hangSX);
		if (kq == -1)
			cout << endl << "Khong co xe nao co hang " << hangSX;
		else
			cout << endl << "Vi tri xe cuoi cung theo hang " << hangSX << " la: " << kq;
		break;

	case 5:
		SapGiamTheoHangXe(ds, n);
		XuatDSXe(ds, n);
		break;

	case 6:
		cout << endl << "Xoa tat ca xe co nam san xuat namSX";
		do
		{
			cout << endl << "Nhap nam san xuat: ";
			cin >> namSX;
			if (namSX > 0)
			{
				XoaXeTheoNamSX(ds, n, namSX);
				XuatDSXe(ds, n);
			}	
		} while (namSX <= 0);
		break;

	case 7:
		TKSoXeTheoHangSX(ds, n);

		cout << endl << endl << "Cach 2: ";
		TKCach2(ds, n);
		break;

	default:

		break;
	}

	if (menu > 0)
	{
		cout << endl << "Nhan 1 phim bat ky de tiep tuc !";
		_getch();
	}
}

void ChayChuongTrinh(DSQL ds, int n)
{
	int menu, soMenu = 7;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, ds, n);
	} while (menu > 0);
}
