void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);
void ChayChuongTrinh(DaySo a, int& n);

void XuatMenu()
{
	cout << endl << "=========================== CHON CHUC NANG =======================";
	cout << endl << " 0. Thoat chuong trinh !";
	cout << endl << " 1. Nhap mang";
	cout << endl << " 2. Nhap tu dong";
	cout << endl << " 3. Xuat mang";
	cout << endl << " 4. Tinh trung binh cong cua cac phan tu trong mang";
	cout << endl << " 5. Tong binh phuong cua cac phan tu trong mang";
	cout << endl << " 6. Tinh so lech lon nhat giua 2 phan tu nam lien tiep nhau";
	cout << endl << " 7. Tinh tong lon nhat cua k phan tu lien tiep";
	cout << endl << " 8. Tinh trung binh cong cua can bac 2 cua cac so chinh phuong. "
		 << endl << "    Neu mang khong co so chinh phuong thi tra ve 0";
	cout << endl << " 9. Tinh tong cac so nguyen to co 2 chu so";
	cout << endl << "10. Tinh tong cac phan tu chi xuat hien 1 lan ( Tong duy nhat )";
	cout << endl << "11. Tinh tong cac gia tri phan biet";
	cout << endl << "12. Tinh phuong sai cua cac gia tri trong mang";
	cout << endl << "13. Tinh do lech chuan cua cac gia tri co trong mang";
	cout << endl << "===================================================================";
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
	int kq, k, start;
	switch (menu)
	{
	case 1:
		cout << endl << " 1. Nhap mang";
		cout << endl << "Nhap so phan tu n: "; cin >> n;
		NhapMang(a, n);
		break;
	case 2:
		cout << endl << " 2. Nhap tu dong";
		cout << endl << "Nhap so phan tu n: "; cin >> n;
		NhapTuDong(a, n);
		break;
	case 3:
		cout << endl << " 3. Xuat mang" << endl;
		XuatMang(a, n);
		break;
	case 4:
		cout << endl << " 4. Tinh trung binh cong cua cac phan tu trong mang";
		kq = TrungBinhCong(a, n);
		cout << endl << kq;
		break;
	case 5:
		cout << endl << " 5. Tong binh phuong cua cac phan tu trong mang";
		kq = TongBinhPhuong(a, n);
		cout << endl << kq;
		break;
	case 6:
		cout << endl << " 6. Tinh so lech lon nhat giua 2 phan tu nam lien tiep nhau";
		kq = DoLechLonNhat(a, n);
		cout << endl << kq;
		break;
	case 7:
		cout << endl << " 7. Tinh tong lon nhat cua k phan tu lien tiep";
		cout << endl << "Nhap so phan tu lien tiep can tinh tong: "; cin >> k;
		cout << endl << "Nhap vi tri bat dau de tinh tong: "; cin >> start;
		XuatMang(a, n);
		kq = TongXoayVong(a, n, k, start);
		cout << "Tong la: " << kq;
		break;
	case 8:
		cout << endl << " 8. Tinh trung binh cong cua can bac 2 cua cac so chinh phuong. "
			<< endl << "    Neu mang khong co so chinh phuong thi tra ve 0";
		kq = TBCongCanBac2SoChinhPhuong(a, n);
		if (kq == 0)
			cout << endl << "Mang nay khong co so chinh phuong !";
		else
			cout << endl << "Gia tri trung binh cong la: " << kq;
		break;
	case 9:
		cout << endl << " 9. Tinh tong cac so nguyen to co 2 chu so";
		kq = TongSoNT_2ChuSo(a, n);
		if (kq == 0)
			cout << endl << "Mang nay khong co so nguyen to co 2 chu so !";
		else
			cout << endl << "Tong cac so nguyen to co 2 chu so la: " << kq;
		break;
	case 10:
		cout << endl << "10. Tinh tong cac phan tu chi xuat hien 1 lan ( Tong duy nhat )";
		kq = TongPTXuatHien1Lan(a, n);
		cout << endl << "Tong la: " << kq;
		break;
	case 11:
		cout << endl << "11. Tinh tong cac gia tri phan biet";

		break;
	case 12:
		cout << endl << "12. Tinh phuong sai cua cac gia tri trong mang";
		break;
	case 13:
		cout << endl << "13. Tinh do lech chuan cua cac gia tri co trong mang";
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
	int menu, soMenu = 13;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}

