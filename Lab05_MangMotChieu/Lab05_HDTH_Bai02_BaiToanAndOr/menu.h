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
	cout << endl << "4. Kiem tra x nam trong mang a ?";
	cout << endl << "5. Kiem tra mang a la day tang ?";
	cout << endl << "6. Tim phan tu lon nhat";
	cout << endl << "7. Tim vi tri phan tu lon nhat";
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
	int x, max, viTri, kq;
	switch (menu)
	{
	case 1:
		cout << endl << "1. Nhap gia tri tu ban phim";
		cout << endl << "Nhap so phan tu: ";
		cin >> n;
		NhapMang(a, n);
		break;
	case 2:
		cout << endl << "2. Nhap gia tri ngau nhien";
		cout << endl << "Nhap so phan tu: ";
		cin >> n;
		NhapTuDong(a, n);
		break;
	case 3:
		cout << endl << "3. Xuat mang";
		XuatMang(a, n);
		break;
	case 4:
		cout << endl << "4. Kiem tra x nam trong mang a ?";
		
		cout << endl << "Nhap gia tri cua x: ";
		cin >> x;
		kq = ChuaX(a, n, x);
		if (kq) cout << endl << "Mang co chua " << x;
		else cout << endl << "Mang khong chua " << x;
		break;
	case 5:
		cout << endl << "5. Kiem tra mang a la day tang ?";
		kq = LaMangTang(a, n);
		if (kq)
			cout << endl << "Mang co thu tu tang !";
		else
			cout << endl << "Mang khong co thu tu tang !";
		break;
	case 6:
		cout << endl << "6. Tim phan tu lon nhat";
		max = TimMax(a, n);
		cout << endl << "Phan tu lon nhat la: " << max;
		break;
	case 7:
		cout << endl << "7. Tim vi tri phan tu lon nhat";
		viTri = TimViTriMax(a, n);
		cout << endl << "Vi tri cua phah tu lon nhat la: " << viTri;
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
	int menu, soMenu = 7;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}
