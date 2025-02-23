// Khai bao nguyen mau ham xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DSSV ds, int& n);
void ChayChuongTrinh(DSSV ds, int n);

// Dinh nghia ham xu ly menu
void XuatMenu()
{
	cout << endl << "=================================== CHON CHUC NANG ===================================";
	cout << endl << " 1. Nhap vao mot danh sach sinh vien";
	cout << endl << " 2. In ra danh sach sinh vien";
	cout << endl << " 3. Sap xep va xuat DSSV giam dan theo diem TB";
	cout << endl << " 4. Sap xep va xuat DSSV tang dan theo ten, neu trung ten sap tang theo ho va ten lot";
	cout << endl << " 5. Tim va xuat thong tin cua sinh vien co ten nhap tu ban phim";
	cout << endl << " 6. Xuat DSSV cua lop, sap tang theo ten";
	cout << endl << " 7. Xuat DSSV co kha nang khong duoc tot nghiep";
	cout << endl << " 8. Tim thong tin sinh vien theo MSSV nhap tu ban phim";
	cout << endl << " 9. Tinh ty le (%) so sinh vien dat loai gioi tro len";
	cout << endl << "10. Xep loai hoc luc cua sinh vien dua vao diem TB";
	cout << endl << "11. Thong ke ty le (%) hoc sinh theo xep loai hoc luc";
	cout << endl << "12. Tinh diem trung binh cua tat ca sinh vien";
	cout << endl << "13. Cho biet chenh lech so luong sv nam va sv nu";
	cout << endl << "14. Thong ke so luong sinh vien cua tung lop";
	cout << endl << "15. Tim va xuat thong tin cua nhung sinh vien co diem trung binh cao nhat";
	cout << endl << "0. Thoat chuong trinh";
	cout << endl << "======================================================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << endl << endl << "Nhap 1 so bat ky de chon menu: "; cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}

void XuLyMenu(int menu, DSSV ds, int& n)
{
	string tenSV, tenLop, maSo, hocLuc, lop;
	int kq, soSVNam, soSVNu;
	float tyLe, diemTB;
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap danh sach sinh vien";
		cout << endl << "Nhap so luong sinh vien: "; cin >> n;
		NhapDSSV(ds, n);
		break;

	case 2:
		cout << endl << "Danh sach sinh vien" << endl;
		XuatDSSV(ds, n);
		break;

	case 3:
		cout << endl << "Danh sach sinh vien giam theo diem trung binh: " << endl;
		SapGiamTheoDiemTB(ds, n);
		XuatDSSV(ds, n);
		break;

	case 4:
		cout << endl << "Danh sach sinh vien tang theo ten" << endl;
		SapTangTheoTen(ds, n);
		XuatDSSV(ds, n);
		break;

	case 5:
		cout << endl << "Tim sinh vien theo ten" << endl;
		kq = 0;
		do
		{
			cout << endl << "Nhap ten sinh vien: ";
			cin.ignore();
			_flushall();
			getline(cin, tenSV);
			kq = KiemTraTen(ds, n, tenSV);

			if (kq == 1)
				TimSVTheoTen(ds, n, tenSV);
			else cout << endl << "Khong co sinh vien nao co ten " << tenSV << ", vui long nhap lai !";

		} while (kq == 0);
		break;

	case 6:
		cout << endl << "Xuat DSSV cua lop" << endl;
		kq = 0;
		do
		{
			cout << endl << "Nhap ten lop: ";
			cin.ignore();
			_flushall();
			getline(cin, tenLop);
			kq = KiemTraLop(ds, n, tenLop);
			if (kq == 1)
				XuatDSSVTheoLop(ds, n, tenLop);
			else cout << endl << "Khong co lop nao co ten " << tenLop << ", vui long nhap lai !";

		} while (kq == 0);
		break;

	case 7:
		cout << endl << "Danh sach sinh vien co kha nang khong duoc tot nghiep: " << endl;
		XuatDSSVKoDcTotNghiep(ds, n);
		break;

	case 8:
		cout << endl << "Xuat thong tin cua sinh vien theo ma" << endl;
		kq = 0;
		do
		{
			cout << endl << "Nhap ma so sinh vien: ";
			cin.ignore();
			_flushall();
			getline(cin, maSo);
			kq = KiemTraMaSo(ds, n, maSo);
			if (kq == 1)
			{
				cout << endl << "Thong tin cua sinh vien co ma so " << maSo << ": " << endl;
				TimSinhVienTheoMSSV(ds, n, maSo);
			}
			else cout << endl << "Khong co sinh vien nao co ma " << maSo << ", vui long nhap lai !";

		} while (kq == 0);
		break;

	case 9:
		tyLe = TyLeSVGioiTroLen(ds, n);
		cout << endl << "Ty le (%) so sinh vien dat loai gioi tro len la: " << fixed << setprecision(2) << tyLe << "%";
		break;

	case 10:
		cout << endl << "Xep loai hoc luc dua vao diem trung binh" << endl;
		PhanLoaiHocLucTheoDiemTB(ds, n);
		break;

	case 11:
		cout << endl << "Thong ke ty le (%) hoc sinh theo xep loai hoc luc" << endl;
		XuatTyLeTheoHocLuc(ds, n, hocLuc);
		break;

	case 12:
		diemTB = DiemTBTatCaSV(ds, n);
		cout << endl << "Diem TB cua tat ca cac sinh vien la: " << fixed << setprecision(2) << diemTB;
		break;

	case 13:
		cout << endl << "Chenh lech ve so luong sinh vien nam va nu" << endl;
		soSVNam = SoSVTheoGioiTinh(ds, n, "M");
		cout << endl << "So sinh vien nam la: " << soSVNam;
		soSVNu = SoSVTheoGioiTinh(ds, n, "F");
		cout << endl << "So sinh vien nu la: " << soSVNu;
		cout << endl << "Chenh lech giua so sinh vien nam va so sinh vien nu la: " << soSVNam - soSVNu;
		break;

	case 14:
		cout << endl << "Thong ke so luong sinh vien cua tung lop" << endl;
		ThongKeSLSVTheoLop(ds, n, lop);
		break;

	case 15:
		diemTB = DiemTBCaoNhat(ds, n);
		XuatSVDiemTBCaoNhat(ds, n, diemTB);
		break;

	default:
			cout << endl << "Thoat chuong trinh !";
	}

	if (menu > 0)
	{
		cout << endl << "Nhan mot phim bat ky de tiep tuc !";
		_getch();
	}
}

void ChayChuongTrinh(DSSV ds, int n)
{
	int menu, soMenu = 15;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, ds, n);
	} while (menu > 0);
}