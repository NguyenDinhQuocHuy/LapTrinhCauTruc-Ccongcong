// Khai bao nguyen mau cac ham xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n); //  Truyen tham tri cho n de luu su thay doi
void ChayChuongTrinh(DaySo a, int& n);

// Dinh nghia cac ham xu ly menu
void XuatMenu()
{
	cout << endl << "========CHON CHUC NANG========";
	cout << endl << "1.  Nhap gia tri tu ban phim";
	cout << endl << "2.  Nhap gia tri ngau nhien";
	cout << endl << "3.  Xuat mang";
	cout << endl << "4.  Tim vi tri xuat hien dau tien cua phan tu x trong mang a";
	cout << endl << "5.  Tim vi tri so nguyen to cuoi cung trong mang a";
	cout << endl << "6.  Tim phan tu xuat hien nhieu nhat va so lan xuat hien cua no";
	cout << endl << "7.  Tim phan tu co gia tri cho nhat trong mang";
	cout << endl << "8.  Tim tat ca cac so hoan chinh co trong mang";
	cout << endl << "9.  Tim so am lon nhat va vi tri cua no";
	cout << endl << "10. Tim so duong nho nhat va vi tri cua no";
	cout << endl << "11. Tim phan tu co gia tri gan voi x nhat";
	cout << endl << "0. Thoat khoi chuong trinh !";
	cout << endl << "==============================";
}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << endl << "Nhap mot so de chon menu: ";
		cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}

void XuLyMenu(int menu, DaySo a, int& n)
{
	switch (menu)
	{
		int x, viTri, kq;
	case 1:
		cout << endl << "Nhap so phan tu: ";
		cin >> n;
		NhapMang(a, n);
		break;
	case 2:
		cout << endl << "Nhap so phan tu: ";
		cin >> n;
		NhapTuDong(a, n);
		break;
	case 3:
		XuatMang(a, n);
		break;
	case 4:
		cout << endl << "4.  Tim vi tri xuat hien dau tien cua phan tu x trong mang a";
		cout << endl << "Nhap so x: ";
		cin >> x;
		viTri = ViTriXDauTien(a, n, x);
		cout << "Vi tri X dau tien la: " << viTri;
		break;
	case 5:
		cout << endl << "5. Tim vi tri so nguyen to cuoi cung trong mang a";
		viTri = VTSoNTCuoiCung(a, n);
		cout << endl << "Vi tri so nguyen to cuoi cung la: " << viTri;
		break;
	case 6:
		cout << endl << "6. Tim phan tu xuat hien nhieu nhat va so lan xuat hien cua no";
		kq = PhanTuXuatHienNhieuNhat(a, n);
		cout << endl << "Phan tu xuat hien nhieu nhat la : " << kq
			<< ", voi so lan xuat hien la : " << DemSoLanXuatHien(a, n, kq);
		cout << endl << "Xuat mang de kiem tra: ";
		XuatMang(a, n);
		break;
	case 7:
		cout << endl << "7.  Tim phan tu co gia tri nho nhat trong mang";
		kq = ViTriMin(a, n);
		cout << endl << "Phan tu nho nhat la : " << a[kq] << ", vi tri xuat hien dau tien la : " << kq;
		cout << endl << "Xem mang de kiem tra: " << endl;
		XuatMang(a, n);
		break;
	case 8:
		cout << endl << "8.  Tim tat ca cac so hoan chinh co trong mang" << endl;
		SoHoanChinh(a, n);
		break;
	case 9:
		cout << endl << "9.  Tim so am lon nhat va vi tri cua no";
		kq = SoAmLonNhat(a, n);
		if (kq == -1)
			cout << "\nMang khong chua so am\n";
		else
			cout << endl << "So am lon nhat la : " << a[kq] << ", tai vi tri: " << kq;
		break;
	case 10:
		cout << endl << "10. Tim so duong nho nhat va vi tri cua no";
		kq = SoDuongNhoNhat(a, n);
		if (kq == -1)
			cout << endl << "Mang khong chua so duong !";
		else
			cout << "So duong nho nhat la: " << a[kq] << ", tai vi tri: " << kq;
		break;
	case 11:
		cout << endl << "11. Tim phan tu co gia tri gan voi x nhat";
		cout << endl << "Nhap gia tri cua x: "; cin >> x;
		kq = TimPTGanNhat(a, n, x);
		cout << endl << "Phan tu co gia tri gan voi x nhat la: " << kq;
		break;
	default:
		cout << endl << "Thoat khoi chuong trinh !";
		break;
	}
	if (menu > 0)
	{
		cout << endl << "Nhan mot phim bat ky de tiep tuc !";
		_getch();
	}
}

void ChayChuongTrinh(DaySo a, int& n)
{
	int menu, soMenu = 11;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}
