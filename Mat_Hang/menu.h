void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DSMH ds, int& n);
void ChayChuongTrinh(DSMH ds, int soLuong);

void XuatMenu()
{
	cout << endl << "==========CHON CHUC NANG==========";
	cout << endl << "1. Nhap danh sach mat hang";
	cout << endl << "2. Xuat danh sach mat hang";
	cout << endl << "3. Tinh tong gia tien cua tat ca mat hang co so luong nho hon 10";
	cout << endl << "4. Tim vi tri mat hang theo ma mat hang";
	cout << endl << "5. Sap xep danh sach mat hang tang theo so luong, neu so luong trung sap tang theo ten mat hang";
	cout << endl << "6. Xoa tat ca mat hang co so luong = x";
	cout << endl << "7. Chen mat hang mh sau mat hang co ma mat hang la y cho truoc";
	cout << endl << "8. In bang thong ke tong so luong mat hang theo tung loai";
	cout << endl << "9. Xuat cac mat hang co so luong nhieu nhat";
	cout << endl << "0. Thoat chuong trinh";
	cout << endl << "==================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << endl << "Nhap chuc nang: ";
		cin >> stt;
	} while (stt<0 || stt>soMenu);
	return stt;
}

void XuLyMenu(int menu, DSMH ds, int& n)
{
	string maMH;
	int vt, kiemTra, soLuong;
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap danh sach mat hang";
		cout << endl << "Nhap so luong mat hang: "; cin >> n;
		NhapDSMatHang(ds, n);
		break;
	case 2:
		cout << endl << "Xuat danh sach mat hang";
		XuatDSMatHang(ds, n);
		break;
	case 3:
		cout << endl << "Tinh tong gia tien cua tat ca mat hang co so luong nho hon 10: " << fixed << setprecision(2) << TongGiaTien(ds, n);
		break;
	case 4:
		do
		{
			cout << endl << "Nhap ma mat hang: ";
			cin.ignore();
			_flushall();
			getline(cin, maMH);
			kiemTra = KiemTraMaMH(ds, n, maMH);
			
			if (kiemTra == 1)
			{
				vt = ViTriMHTheoMaMH(ds, n, maMH);
				cout << endl << "Vi tri cua mat hang co ma mat hang " << maMH << " la: " << vt;
			}
			else cout << endl << "Khong co ma mat hang " << maMH << ", vui long nhap lai !";
				
		} while (kiemTra == -1);
		
		break;
	case 5:
		cout << endl << "Sap xep danh sach mat hang tang theo so luong, neu so luong trung sap tang theo ten mat hang";
		SapTangTheoSoLuong(ds, n);
		break;
	case 6:
		cout << endl << "Xoa tat ca mat hang co so luong = x";
		do
		{
			cout << endl << "Nhap so luong mat hang: "; cin >> soLuong;
			
			kiemTra = KiemTraSoLuong(ds, n, soLuong);

			if (kiemTra == 1)
			{
				XoaMHCoSLX(ds, n, soLuong);
			}
			else cout << endl << "Khong co mat hang nao co so luong " << soLuong << ", vui long nhap lai !";
		} while (kiemTra == -1);
		
		break;

	case 7:
		cout << endl << "7. Chen mat hang mh sau mat hang co ma mat hang la y cho truoc";
		cout << endl << "Nhap ma mat hang: ";
		cin.ignore();
		_flushall();
		getline(cin, maMH);
		cout << endl << "Nhap thong tin mat hang: ";
		kiemTra = KiemTraMaMH(ds, n, maMH);
		if (kiemTra == 1)
			cout << endl << "Ma da bi trung, vui long nhap lai !";
		else
			ChenMatHang(ds, n, maMH);
		break;

	case 8:
		ThongKeSLTheoTungLoai(ds, n);
		break;

	case 9:
		XuatMHSLNhieuNhat(ds, n);
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

void ChayChuongTrinh(DSMH ds, int n)
{
	int menu, soMenu = 9;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, ds, n);
	} while (menu > 0);
}
