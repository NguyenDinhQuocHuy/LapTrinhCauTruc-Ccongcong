void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);
void ChayChuongTrinh(DaySo a, int& n);

void XuatMenu()
{
	cout << endl << "1. Nhap mang"
		<< endl << "2. Nhap tu dong"
		<< endl << "3. Xuat mang"
		<< endl << "4. Sap xep tang hoac giam"
		<< endl << "5. Sap duong tang, cac so khac giu nguyen vi tri"
		<< endl << "6. Sap 0 cuoi mang, cac so khac tang dan"
		<< endl << "7. Sap 0 dau mang - am giam - duong tang"
		<< endl << "8. Sap so le tang - so chan giam"
		<< endl << "9. Sap so le giam - so chan tang nhung khong doi vi tri"
		<< endl << "10. Tron phan tu ngau nhien"
		<< endl << "11. Sap so nguyen to tang - so con lai giam";
}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << endl << endl << "Chon chuc nang: "; cin >> stt;
	} while (stt<0 || stt>soMenu);
	return stt;
}

void XuLyMenu(int menu, DaySo a, int& n)
{
	int thuTu;
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
		cout << endl << "4. Sap xep tang hoac giam";
		cout << endl << "Nhap 1 de sap tang hoac 0 de giam: "; cin >> thuTu;
		if (thuTu == 1)
		{
			cout << endl << "Sap xep tang: ";
			SapTang(a, n);
			XuatMang(a, n);
		}
		else if (thuTu == 0)
		{
			cout << endl << "Sap xep giam: ";
			SapGiam(a, n);
			XuatMang(a, n);
		}
		break;
	case 5:
		cout << endl << "5. Sap duong tang, cac so khac giu nguyen vi tri";
		SapDuongT_GiuNguyenVT(a, n);
		XuatMang(a, n);
		break;
	case 6:
		cout << endl << "6. Sap 0 cuoi mang, cac so khac tang dan";
		SapTang_0(a, n);
		XuatMang(a, n);
		break;
	case 7:
		cout << endl << "7. Sap 0 dau mang - am giam - duong tang";
		Sap0_AmGiam_DuongTang(a, n);
		XuatMang(a, n);
		break;
	case 8:
		cout << endl << "8. Sap so le tang - so chan giam";
		SapLeT_ChanG(a, n);
		XuatMang(a, n);
		break;
	case 9:
		cout << endl << "9. Sap so le giam - so chan tang nhung khong doi vi tri";
		SapLeG_ChanT_KhongDoiVT(a, n);
		XuatMang(a, n);
		break;
	case 10:
		cout << endl << "10. Tron phan tu ngau nhien";
		cout << endl << "Mang truoc khi xao tron: ";
		XuatMang(a, n);
		cout << endl << "Mang sau khi xao tron: ";
		XaoTronMang(a, n);
		XuatMang(a, n);
		
		break;
	case 11:
		cout << endl << "11. Sap so nguyen to tang - so con lai giam";
		SapSoNTTang_SoConLaiGiam(a, n);
		XuatMang(a, n);
		break;
	default:
		cout << endl << "Thoat chuong trinh";
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