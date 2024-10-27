// Khai bao nguyen mau cac ham xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n); //  Truyen tham tri cho n de luu su thay doi
void ChayChuongTrinh(DaySo a, int& n);

// Dinh nghia cac ham xu ly menu
void XuatMenu()
{
	cout << endl << "========CHON CHUC NANG========";
	cout << endl << "1. Nhap gia tri tu ban phim";
	cout << endl << "2. Nhap gia tri ngau nhien";
	cout << endl << "3. Xuat mang";
	cout << endl << "4. Dem so luong so le co trong mang";
	cout << endl << "5. Dem va xuat cac so chia het cho 3 va 4";
	cout << endl << "6. Dem so lan xuat hien cua x tai vi tri le";
	cout << endl << "7. Dem so luong so cho 3 chu so";
	cout << endl << "8. Dem cac so nam ngoai pham vi [MIN...MAX] cho truoc";
	cout << endl << "9. Dem so luong so chinh phuong";
	cout << endl << "10. Dem va xuat cac phan tu xuat hien it nhat k lan voi k lan cho truoc";
	cout << endl << "11. Dem so lan xuat hien cua phan tu x ke tu vi tri vt cho truoc";
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
	int kq, min, max, vt, x, k;
	switch (menu)
	{
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
		cout << endl << "4. Dem so luong so le co trong mang";
		kq = DemSoLe(a, n);
		cout << kq;
		break;
	case 5:
		cout << endl << "5. Dem va xuat cac so chia het cho 3 va 4";
		DemXuatChiaHet3_KhongChiaHet4(a, n);
		break;
	case 6:
		cout << endl << "6. Dem so lan xuat hien cua x tai vi tri le";
		cout << endl << "Nhap phan tu x: "; cin >> x;
		kq = DemXHViTriLe(a, n, x);
		cout << "So lan xuat hien la: "<< kq;
		break;
	case 7:
		cout << endl << "7. Dem so luong so cho 3 chu so";
		kq = DemSo3ChuSo(a, n);
		cout << endl << "So luong so co 3 chu 3 chu so la: " << kq;
		break;
	case 8:
		cout << "\n8. Dem cac so nam ngoai pham vi [MIN...MAX] cho truoc";
		cout << "\nNhap pham vi nho nhat: ";
		cin >> min;
		cout << "\nNhap pham vi lon nhat: ";
		cin >> max;

		kq = DemSoNamNgoaiPhamVi(a, n, min, max);
		cout << "\nSo luong chu so nam ngoai pham vi [" << min << ".." << max << "] la " << kq;
		cout << "\nXem lai mang de kiem tra:\n";
		XuatMang(a, n);
		break;
	case 9:
		cout << endl << "9. Dem so luong so chinh phuong";
		kq = DemSoChinhPhuong(a, n);
		cout << "\nSo luong so chinh phuong trong mang a la : " << kq;
		cout << "\nXem lai mang de kiem tra:\n";
		XuatMang(a, n);
		break;
	case 10:
		cout << endl << "10. Dem va xuat cac phan tu xuat hien it nhat k lan voi k lan cho truoc";
		cout << "\nHay nhap so lan ban muon gia tri xuat hien";
		cin >> k;
		DemVaXuatPTuXuaHienK(a, n, k);
		break;
	case 11:
		cout << endl << "11. Dem so lan xuat hien cua phan tu x ke tu vi tri vt cho truoc";
		cout << "\nNhap vao 1 vi tri: ";
		cin >> vt;
		cout << "\nNhap vao 1 so bat ky: ";
		cin >> x;
		kq = SoLanXuatHien_X(a, n, x, vt);
		cout << "\nSo lan xuat hien cua x tu vi tri " << vt << " la: " << kq;
		cout << "\nXem lai mang de kiem tra:\n";
		XuatMang(a, n);
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
