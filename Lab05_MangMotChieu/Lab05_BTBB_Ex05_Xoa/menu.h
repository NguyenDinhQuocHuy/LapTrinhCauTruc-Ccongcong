void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);
void ChayChuongTrinh(DaySo a, int& n);

void XuatMenu()
{
	cout << endl << "1. Nhap mang";
	cout << endl << "2. Nhap tu dong";
	cout << endl << "3. Xuat mang";
	cout << endl << "4. Xoa x tai vi tri cho truoc";
	cout << endl << "5. Xoa x dau tien tim duoc trong mang";
	cout << endl << "6. Xoa moi phan tu x trong mang";
	cout << endl << "7. Xoa phan tu co gia tri gan x nhat";
	cout << endl << "8. Xoa cac phan tu trung nhau, chi giu lai 1 phan tu";
	cout << endl << "9. Xoa cac phan tu nam ngoai doan [min..max]";
	cout << endl << "10. Xoa tat ca so hoan chinh trong mang";
	cout << endl << "11. Xoa cac phan tu co gia tri lon hon 2 lan trung binh cong cua cac phan tu trong mang";
}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << endl << "Chon chuc nang: "; cin >> stt;
	} while (stt<0 || stt>soMenu);
	return stt;
}

void XuLyMenu(int menu, DaySo a, int& n)
{
	int vt, x, min, max;
	switch (menu)
	{
	case 1:
		cout << endl << "1. Nhap mang";
		cout << endl << "Nhap so phan tu cua mang = ";
		cin >> n;
		NhapMang(a, n);
		break;
	case 2:
		cout << endl << "2. Nhap tu dong";
		cout << endl << "Nhap so phan tu cua mang = ";
		cin >> n;
		NhapTuDong(a, n);
		break;
	case 3:
		cout << endl << "3. Xuat mang";
		XuatMang(a, n);
		break;
	case 4:
		cout << endl << "4. Xoa x tai vi tri cho truoc";
		cout << endl << "Nhap vi tri can xoa: "; cin >> vt;
		if (vt > n)
		{
			do
			{
				cout << endl << "Vi tri khong hop le !";
				cout << endl << "Nhap vi tri can xoa: "; cin >> vt;
			} while (vt > n);
		}
		cout << endl << "Mang truoc khi xoa: ";
		XuatMang(a, n);
		cout << endl << "Mang sau khi xoa: ";
		XoaPhanTu(a, n, vt);
		XuatMang(a, n);
		break;
	case 5:
		cout << endl << "5. Xoa x dau tien tim duoc trong mang";
		cout << endl << "Nhap x = "; cin >> x;
		cout << endl << "Mang truoc khi xoa: ";
		XuatMang(a, n);
		cout << endl << "Mang sau khi xoa: ";
		XoaPhanTuXDauTien(a, n, x);
		XuatMang(a, n);
		break;
	case 6:
		cout << endl << "6. Xoa moi phan tu x trong mang";
		cout << endl << "Nhap x = "; cin >> x;
		cout << endl << "Mang truoc khi xoa: ";
		XuatMang(a, n);
		cout << endl << "Mang sau khi xoa: ";
		XoaMoiPhanTuX(a, n, x);
		XuatMang(a, n);
		break;
	case 7:
		cout << endl << "7. Xoa phan tu co gia tri gan x nhat";
		cout << endl << "Nhap x = "; cin >> x;
		cout << endl << "Mang truoc khi xoa: ";
		XuatMang(a, n);
		cout << endl << "Mang sau khi xoa: ";
		XoaPhanTuCoGiaTriGanXNhat(a, n, x);
		XuatMang(a, n);
		break;
	case 8:
		cout << endl << "8. Xoa cac phan tu trung nhau, chi giu lai 1 phan tu";
		break;
	case 9:
		cout << endl << "9. Xoa cac phan tu nam ngoai doan [min..max]";
		cout << endl << "Nhap min = "; cin >> min;
		cout << endl << "Nhap max = "; cin >> max;
		cout << endl << "Mang truoc khi xoa: ";
		XuatMang(a, n);
		cout << endl << "Mang sau khi xoa cac phan tu ngoai doan: [" << min << ".." << max << "]: ";
		XoaPhanTuNgoaiDoanMin_Max(a, n, min, max);
		XuatMang(a, n);
		break;
	case 10:
		cout << endl << "10. Xoa tat ca so hoan chinh trong mang";
		cout << endl << "Mang truoc khi xoa: ";
		XuatMang(a, n);
		cout << endl << "Mang sau khi xoa cac so hoan chinh: ";
		XoaSoHoanChinh(a, n);
		XuatMang(a, n);
		break;
	case 11:
		cout << endl << "11. Xoa cac phan tu co gia tri lon hon 2 lan trung binh cong cua cac phan tu trong mang";
		cout << endl << "Mang truoc khi xoa: ";
		XuatMang(a, n);
		cout << endl << "Mang sau khi xoa: ";
		XoaCacSoLonHon2LanTBC(a, n);
		XuatMang(a, n);
		break;

	default:
		cout << endl << "Thoat Chuong Trinh !";
		break;
	}
	if (menu > 0)
	{
		cout << endl << "Nhan 1 phim de tiep tuc !";
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
