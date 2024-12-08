// Khai bao nguyen mau
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MangTB a, int& n);
void ChayChuongTrinh(MangTB a, int n);

// Dinh nghia ham
void XuatMenu()
{
	cout << endl << "========== CHON CHUC NANG ==========";
	cout << endl << "1.Nhap danh sach thiet bi";
	cout << endl << "2. Xuat danh sach thiet bi";
	cout << endl << "3. Tinh tong gia tien cua tat ca cac thiet bi co nam nhap thuoc [x, y]";
	cout << endl << "4. Tim vi tri thiet bi theo ma thiet bi";
	cout << endl << "5. Sap sep danh sach thiet bi giam theo nam nhap, neu nam nhap trung tang theo ten TB";
	cout << endl << "6. Xoa tat ca thiet bi co nam nhap = x";
	cout << endl << "7. Chen thiet bi tb sau thiet bi la y cho truoc";
	cout << endl << "8. In bang thong ke so thiet bi theo nam nhap";
	cout << endl << "0. Thoat chuong trinh";

}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << endl << "Nhap 1 so de chon chuc nang: "; cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}

void XuLyMenu(int menu, MangTB a, int& n)
{
	int x, y;
	char maTB;
	float ketQua;
	int kq;
	switch (menu)
	{
		case 1:
			cout << endl << "Nhap danh sach thiet bi";
			cout << endl << "Nhap so thiet bi: "; cin >> n;
			NhapDSTB(a, n);
			break;

		case 2:
			cout << endl << "Danh sach thiet bi";
			XuatDSTB(a, n);
			break;

		case 3:
			cout << endl << "Tong gia tien cua tat ca cac thiet bi co nam nhap thuoc [x, y]";
			cout << endl << "Nhap nam x: "; cin >> x;
			cout << endl << "Nhap nam y: "; cin >> y;
			ketQua = TongGiaTienTheoNamNhap(a, n, x, y);
			cout << endl << "Tong tien la: " << ketQua;
			break;

		case 4:
			cout << endl << "Tim vi tri thiet bi theo ma thiet bi";
			cout << endl << "Nhap ma thiet bi: ";
			gets_s(maTB);
			kq = TimViTriTBTheoMa(a, n, maTB);

			if (kq == 0)
				cout << endl << "Khong tim thay thiet bi co ma so " << maTB;
			else
			{
				cout << endl << "Vi tri thiet bi la: " << kq;
				cout << endl << "Thong tin thiet bi co ma so " << maTB << "la: ";
				XuatTieuDe();
				XuatDongKeNgang();
				XuatMotTB(a[kq]);
				XuatDongKeNgang();
			}

		case 5:

			break;

		case 6:
			break;

		case 7:
			break;

		case 8:
			break;

		default:
			cout << endl << "Thoat chuong trinh !";
	}

	if (menu > 0)
	{
		cout << endl << "Nhan 1 phim bat ky de tiep tuc !";
		_getch();
	}
}

void ChayChuongTrinh(MangTB a, int n)
{
	int menu, soMenu = 8;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}
