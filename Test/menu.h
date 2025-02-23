void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DSTB ds, int &soLuong);
void ChayChuongTrinh(DSTB ds, int &soLuong);

void XuatMenu()
{
	cout << endl << "==========CHON CHUC NANG==========";
	cout << endl << "1. Nhap danh sach thiet bi";
	cout << endl << "2. Xuat danh sach thiet bi";
	cout << endl << "3. Tinh tong gia tien cua tat ca thiet bi co nam nhap [x, y]";
	cout << endl << "4. Tim vi tri thiet bi theo ma thiet bi";
	cout << endl << "5. Sap xep danh sach thiet bi giam theo nam nhap (trung thi tang theo ten thiet bi)";
	cout << endl << "6. Xoa tat ca thiet bi co nam nhap x";
	cout << endl << "7. Chen thiet bi sau thiet bi co ma cho truoc";
	cout << endl << "8. In bang thong ke so thiet bi theo nam nhap";
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

void XuLyMenu(int menu, DSTB ds, int& soLuong)
{
	unsigned int start, end;
	string ma;
	switch (menu)
	{
	case 1: 
		cout << endl << "1. Nhap danh sach thiet bi";
		cout << endl << "Nhap so luong thiet bi: ";
		cin >> soLuong;
		NhapDSTB(ds, soLuong);
		break;
	case 2:
		cout << endl << "2. Xuat danh sach thiet bi";
		XuatDSTB(ds, soLuong);
		break;
	case 3:
		cout << endl << "3. Tinh tong gia tien cua tat ca thiet bi co nam nhap [x, y]";
		cout << endl << "Nhap nam x la: ";
		cin >> start;
		cout << endl << "Nhap nam y la: ";
		cin >> end;
		cout << endl << "Tong gia tien cua tat ca thiet bi trong cac nam [" <<start<<","<<end<<"] la: ";
		cout << TinhTongGiaTien(ds, soLuong, start, end);
		break;
	case 4:
		cout << endl << "4. Tim vi tri thiet bi theo ma thiet bi";
		cout << endl << "Nhap ma thiet bi: ";
		cin.ignore();
		_flushall();
		getline(cin, ma);
		TimThietBi(ds, soLuong, ma);
		break;
	case 5:
		cout << endl << "5. Sap xep danh sach thiet bi giam theo nam nhap (trung thi tang theo ten thiet bi)";
		SapXepDS(ds, soLuong);
		XuatDSTB(ds, soLuong);
		break;
	case 6:
		cout << endl << "6. Xoa tat ca thiet bi co nam nhap x";
		cout << endl << "Nhap nam: ";
		cin >> start;
		cout << endl << "Truoc khi xoa: ";
		XuatDSTB(ds, soLuong);
		cout << endl << "Sau khi xoa: ";
		XoaThietBi(ds, soLuong, start);
		XuatDSTB(ds, soLuong);
		break;
	case 7:
		cout << endl << "7. Chen thiet bi sau thiet bi co ma cho truoc";
		cout << endl << "Nhap ma thiet bi: ";
		cin.ignore();
		_flushall();
		getline(cin, ma);
		ChenThietBi(ds, soLuong, ma);
		break;
	case 8:
		cout << endl << "8. In bang thong ke so thiet bi theo nam nhap";
		cout << endl << "Nhap nam: ";
		cin >> start;
		cout<<endl<<"So thiet bi trong nam" <<start<< " la: "<< ThongKeTheoNamNhap(ds, soLuong, start);
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

void ChayChuongTrinh(DSTB ds, int& soLuong)
{
	int menu, soMenu = 8;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, ds, soLuong);
	} while (menu > 0);
}