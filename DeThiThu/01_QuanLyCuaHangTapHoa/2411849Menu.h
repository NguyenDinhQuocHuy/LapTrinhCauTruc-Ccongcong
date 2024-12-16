// Khai bao nguyen mau ham xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DSHH ds, int& n);
void ChayChuongTrinh(DSHH ds, int& n);

// Dinh nghia ham xu ly menu
void XuatMenu()
{
	cout << endl << "=========================================== CHON CHUC NANG ===========================================";
	cout << endl << "1. Nhap danh sach hang hoa";
	cout << endl << "2. Xuat danh sach hang hoa";
	cout << endl << "3. Xuat danh sach cac hang hoa va gia tri cac mat hang da nhap trong nam y ";
	cout << endl << "4. Sap xep hang hoa tang dan theo so luong, neu cung so luong thi sap xep tang dan theo ten san pham";
	cout << endl << "5. Tim tat ca hang hoa duoc nhap vao thang m nam y";
	cout << endl << "6. Cap nhat thong tin hang hoa theo ma hang hoa tu ban phim";
	cout << endl << "7. Thong ke tong gia tri cac hang hoa theo tung nuoc san xuat";
	cout << endl << "8. Nhap them mot hang hoa moi tu ban phim voi ma hang hoa khong duoc trung voi ma hang hoa da co";
	cout << endl << "0. Thoat chuong trinh";
	cout << endl << "======================================================================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << endl << "Nhap 1 so de chon menu: "; cin >> stt;

	} while (stt < 0 || stt > soMenu);

	return stt; 
}

void XuLyMenu(int menu, DSHH ds, int& n)
{
	int thang, nam, ketQua;
	string maHH;
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap danh sach hang hoa: ";
		cout << endl << "Nhap so hang hoa: "; cin >> n;
		NhapDSHangHoa(ds, n);
		break;

	case 2:
		XuatDSHangHoa(ds, n);
		break;

	case 3:
		do
		{
			cout << endl << "Nhap nam: "; cin >> nam;
			if (KiemTraTheoNam(ds, n, nam) == true)
			{
				XuatDanhSachTheoNam(ds, n, nam);
				cout << endl << endl;
				XuatGiaTriTungMatHangTheoNam(ds, n, nam);
			}	
		} while (KiemTraTheoNam(ds, n, nam) == false || nam < 1);
		break;

	case 4:
		SapTangTheoSL(ds, n);
		break;

	case 5:
		do
		{
			cout << endl << "Nhap thang: "; cin >> thang;
			cout << endl << "Nhap nam: "; cin >> nam;
			if (KiemTraThangNam(ds, n, thang, nam) == true)
				XuatDSTheoThangNam(ds, n, thang, nam);
		} while (KiemTraThangNam(ds, n, thang, nam) == false);
		break;

	case 6:
			cout << endl << "Nhap ma hang hoa: ";
			cin.ignore();
			_flushall();
			getline(cin, maHH);

			ketQua = KiemTraMaHH(ds, n, maHH);
			if (ketQua == -1)
				cout << endl << "Khong tim thay hang hoa nao co ma so " << maHH;
			else
			{
				CapNhatThongTinHangHoa(ds[ketQua]);
				cout << endl << "Chon chuc nang 2 de xem ket qua !";
			}
		
		break;

	case 7:
		TKTongGTHHTheoTungNuoc(ds, n);
		cout << endl << endl << "Thong ke theo cach 2: ";
		TKCach2(ds, n);
		break;

	case 8:
		Them1HangHoa(ds, n);
		break;

	default:
		cout << endl << "Thoat chuong trinh !";
		break;

	}

	if (menu > 0)
	{
		cout << endl << "Nhan 1 phim bat ky de tiep tuc !";
		_getch();
	}
}

void ChayChuongTrinh(DSHH ds, int& n)
{
	int menu, soMenu = 8;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, ds, n);
	} while (menu > 0);
}

