// Khai bao nguyen mau cac ham xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTran a, int& n);
void ChayChuongTrinh(MaTran a, int& n);

// Dinh nghia cac ham xu ly menu
void XuatMenu()
{
	cout << endl << "=============================== CHON CHUC NANG ================================";
	cout << endl << " 0. Thoat khoi chuong trinh !";
	cout << endl << " 1. Nhap gia tri tu ban phim";
	cout << endl << " 2. Nhap tu dong";
	cout << endl << " 3. Xuat ma tran";
	cout << endl << " 4. Tinh tong cac phan tu cua ma tran";
	cout << endl << " 5. Tich cac phan tu chia het cho 3";
	cout << endl << " 6. Hoan vi hai cot cua ma tran, xuat ket qua";
	cout << endl << " 7. Hoan vi hai dong cua ma tran, in ket qua";
	cout << endl << " 8. Xuat cac  gia tri thuoc cac duong cheo // voi duong cheo chinh";
	cout << endl << " 9. Xuat cac  gia tri thuoc cac duong cheo // voi duong cheo phu";
	cout << endl << "10. Tinh tong cac phan tu nam phia tren (ben trai) duong cheo phu";
	cout << endl << "11. Xuat cac phan tu thuoc duong cheo chinh va duong cheo phu (theo hinh chu X)";
	cout << endl << "===============================================================================";
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

void XuLyMenu(int menu, MaTran a, int& n)
{
	int cot1, cot2, hang1, hang2;
	switch (menu)
	{
	case 1:
		cout << endl << "1. Nhap gia tri tu ban phim";
		cout << endl << "Nhap cap cua ma tran: "; cin >> n;
		NhapMaTran(a, n);
		break;
	case 2:
		cout << endl << "2. Nhap tu dong";
		cout << endl << "Nhap cap cua ma tran: "; cin >> n;
		NhapTuDong(a, n);
		break;
	case 3:
		cout << endl << "3. Xuat ma tran";
		XuatMaTran(a, n);
		break;
	case 4:
		cout << endl << " 4. Tinh tong cac phan tu cua ma tran";
		cout << endl << "Tong la: " << TongCacPTMaTran(a, n);
		break;
	case 5:
		cout << endl << " 5. Tich cac phan tu chia het cho 3";
		cout << endl << "Tich la: " << TichPTChiaHet3(a, n);
		break;
	case 6:
		cout << endl << " 6. Hoan vi hai cot cua ma tran, xuat ket qua";
		cout << endl << "Ma tran ban dau la: " << endl;
		XuatMaTran(a, n);
		
		do
		{
			cout << endl << "Nhap chi so cot thu nhat: "; cin >> cot1;
			cout << endl << "Nhap chi so cot thu hai: "; cin >> cot2;
			if (cot1 < 0 || cot1 >= n || cot2 < 0 || cot2 >= n)
				cout << endl << "Chi so cot khong hop le, vui long nhap lai !";
		} while (cot1 < 0 || cot1 >= n || cot2 < 0 || cot2 >= n);
		cout << endl << "Ma tran sau khi hoan vi cot la: " << endl;
		HoanVi2Cot(a, n, cot1, cot2);
		XuatMaTran(a, n);
		break;
	case 7:
		cout << endl << " 7. Hoan vi hai dong cua ma tran, in ket qua";
		cout << endl << "Ma tran ban dau la: " << endl;
		XuatMaTran(a, n);

		do
		{
			cout << endl << "Nhap chi so hang thu nhat: "; cin >> hang1;
			cout << endl << "Nhap chi so hang thu hai: "; cin >> hang2;
			if (hang1 < 0 || hang1 >= n || hang2 < 0 || hang2 >= n)
				cout << endl << "Chi so cot khong hop le, vui long nhap lai !";
		} while (hang2 < 0 || hang2 >= n || hang2 < 0 || hang2 >= n);
		cout << endl << "Ma tran sau khi hoan vi cot la: " << endl;
		HoanVi2Hang(a, n, hang1, hang2);
		XuatMaTran(a, n);
		break;
	case 8:
		cout << endl << " 8. Xuat cac  gia tri thuoc cac duong cheo // voi duong cheo chinh"
			 << endl <<  "Moi duong cheo xuat tren 1 dong";
		cout << endl << "Ma tran: " << endl; 
		XuatMaTran(a, n);
		cout << endl << "Cac gia tri thuoc cac hang song song voi duong cheo chinh la: " << endl;
		XuatGTSongSongDuongCheoChinh(a, n);
		break;
	case 9:
		cout << endl << " 9. Xuat cac  gia tri thuoc cac duong cheo // voi duong cheo phu"
		     << endl << "Moi duong cheo xuat tren 1 dong";
		XuatMaTran(a, n);
		cout << endl << "Cac gia tri cua duong cheo song song voi duong cheo phu la: ";
		XuatGTSongSongDuongCheoPhu(a, n);
		break;
	case 10:
		cout << endl << "10. Tinh tong cac phan tu nam phia tren (ben trai) duong cheo phu";
		XuatMaTran(a, n);
		cout << endl << "Tong cac phan tu nam phia tren duong cheo phu: " << TinhTongCacGiaTriPhiaTrenDCPhu(a, n);
		break;
	case 11:
		cout << endl << "11. Xuat cac phan tu thuoc duong cheo chinh va duong cheo phu (theo hinh chu X)";
		XuatMaTran(a, n);
		XuatPTThuocDCChinhVaDCPhu(a, n);
		break;
	default:
		cout << endl << "Thoat khoi chuong trinh !";
		break;
	}
	if (menu > 0)
	{
		cout << endl << "Nhan 1 phim bat ky de tiep tuc !";
		_getch();
	}
}

void ChayChuongTrinh(MaTran a, int& n)
{
	int menu, soMenu = 11;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}



