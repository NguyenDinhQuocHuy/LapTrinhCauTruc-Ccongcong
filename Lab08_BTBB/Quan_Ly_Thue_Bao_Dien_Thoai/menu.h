// Khai bao nguyen mau cac ham xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DSTB ds, int& n);
void ChayChuongTrinh(DSTB ds, int n);

// Dinh nghia ham xu ly menu
void XuatMenu()
{
	cout << endl << "============================== CHON CHUC NANG ==============================";
	cout << endl << " 1. Nhap danh sach thue bao";
	cout << endl << " 2. Xuat thong tin cac thue bao ra man hinh";
	cout << endl << " 3. Tim so dien thoai khi biet ho ten";
	cout << endl << " 4. Tim thong tin thue bao khi biet so dien thoai (co ma vung)";
	cout << endl << " 5. Tim thong tin thue bao kh biet so dien thoai (khong co ma vung)";
	cout << endl << " 6. Tim dia chi thue bao khi biet so dien thoai (co ca ma vung)";
	cout << endl << " 7. Xuat DSTB nam trong ma vung cho truoc";
	cout << endl << " 8. Xem thong tin khach hang dang ky som nhat";
	cout << endl << " 9. Tim nhung thue bao co ten trung voi ten cho truoc";
	cout << endl << "10. Tim nhung thue bao co dia chi nam tren duong cho truoc";
	cout << endl << "11. Sap xep cac thue bao tang dan theo ma vung";
	cout << endl << "============================================================================";
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

void XuLyMenu(int menu, DSTB ds, int& n)
{
	string hoTen, maVung, soDienThoai, ten, tenDuong;
	bool kiemTra;
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap danh sach thue bao: ";
		cout << endl << "Nhap so luong thue bao: ";
		cin >> n;
		NhapDSThueBao(ds, n);
		break;

	case 2:
		cout << endl << "Danh sach thue bao: " << endl;
		XuatDSThueBao(ds, n);
		break;

	case 3:
		cout << endl << "Tim so dien thoai khi biet ho ten" << endl;
		cout << endl << "Nhap ho ten khach hang: ";
		cin.ignore();
		_flushall();
		getline(cin, hoTen);
		kiemTra = KiemTraHoTen(ds, n, hoTen);
		if (kiemTra == true)
			TimSDTKhiBietHoTen(ds, n, hoTen);
		else cout << endl << "Khong co thue bao nao co ten " << hoTen 
			<< ", vui long chon chuc nang 3 de nhap lai !" << endl;
		break;

	case 4:
		cout << endl << "Tim thong tin thue bao khi biet so dien thoai (co ca ma vung)";
		cout << endl << "Nhap ma vung: ";
		cin.ignore();
		_flushall();
		getline(cin, maVung);

		cout << "Nhap so dien thoai: ";
		_flushall();
		getline(cin, soDienThoai);
		
		if (KiemTraMaVung(ds, n, maVung) == true && KiemTraSoDienThoai(ds, n, soDienThoai) == true)
			TimThongTinTBTheoSoDTCoMaVung(ds, n, maVung, soDienThoai);
		else cout << endl << "Khong tim thay thue bao co so dien thoai " << "0." << maVung << "." << soDienThoai
			<< ", vui long chon chuc nang 4 de nhap lai !" << endl;
		break;

	case 5:
		cout << endl << "Tim thong tin thue bao khi biet so dien thoai (khong co ma vung)";
		cout << endl << "Nhap so dien thoai: ";
		cin.ignore();
		_flushall();
		getline(cin, soDienThoai);

		if (KiemTraSoDienThoai(ds, n, soDienThoai) == true)
			TimThongTinTBTheoSoDTKoCoMaVung(ds, n, soDienThoai);
		else cout << endl << "Khong tim thay thue bao co so dien thoai " << soDienThoai
			<< ", vui long chon chuc nang 5 de nhap lai !" << endl;
		break;

	case 6:
		cout << endl << "Tim dia chi thue bao khi biet so dien thoai (co ma vung)";
		cout << endl << "Nhap ma vung: ";
		cin.ignore();
		_flushall();
		getline(cin, maVung);

		cout << "Nhap so dien thoai: ";
		_flushall();
		getline(cin, soDienThoai);

		if (KiemTraMaVung(ds, n, maVung) == true && KiemTraSoDienThoai(ds, n, soDienThoai) == true)
			TimDiaChiTheoSoDTCoMaVung(ds, n, maVung, soDienThoai);
		else cout << endl << "Khong tim thay thue bao co so dien thoai " << "0." << maVung << "." << soDienThoai
			<< ", vui long chon chuc nang 6 de nhap lai !" << endl;
		break;

	case 7:
		cout << endl << "Xuat DSTB nam trong vung co ma vung cho truoc";
		cout << endl << "Nhap ma vung: ";
		cin.ignore();
		_flushall();
		getline(cin, maVung);

		XuatDSTBTheoMaVung(ds, n, maVung);
		break;

	case 8:
		cout << endl << "Thong tin khach hang dang ki som nhat: " << endl;
		XuatThongTinTBDKSomNhat(ds, n);
		break;

	case 9:
		cout << endl << "Tim nhung thue bao co ten trung voi ten cho truoc";
		cout << endl << "Nhap ten: ";
		cin.ignore();
		_flushall();
		getline(cin, ten);

		XuatDSTBCoTenTrung(ds, n, ten);
		break;

	case 10:
		cout << endl << "Nhap ten duong: ";
		cin.ignore();
		_flushall();
		getline(cin, tenDuong);

		XuatTBCoDiaChiNamTrenDuong(ds, n, tenDuong);
		break;

	case 11:
		cout << endl << "Sap xep cac thue bao tang dan theo ma vung" << endl;
		SapXepTangDan(ds, n);
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

void ChayChuongTrinh(DSTB ds, int n)
{
	int menu, soMenu = 11;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, ds, n);
	} while (menu > 0);
}