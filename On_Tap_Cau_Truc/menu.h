// Khai bao nguyen mau cac ham xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MangSV a, int& n);
void ChayChuongTrinh(MangSV a, int n);

// Dinh nghia ham xu ly menu
void XuatMenu()
{
	cout << endl << "========================= CHON CHUC NANG =========================";
	cout << endl;
	cout << endl << " 1. Nhap vao 1 danh sach sinh vien";
	cout << endl << " 2. In ra danh sach sinh vien";
	cout << endl << " 3. Sap xep va xuat danh sach sinh vien (Giam dan theo diem TB)";
	cout << endl << " 4. Sap xep va xuat DSSV tang dan theo ten, trung ten, sap tang theo ho va ten lot";
	cout << endl << " 5. Tim va xuat thong tinh sinh vien theo ten";
	cout << endl << " 6. Xuat DSSV cua lop, sap tang theo ten";
	cout << endl << " 7. Xuat DSSV co kha nang khong duoc tot nghiep";
	cout << endl << " 8. Tim thong tin sinh vien theo ma so";
	cout << endl << " 9. Tinh ty le (%) so sinh vien dat loai gioi tro len";
	cout << endl << "10. Xep loai hoc luc cua sinh vien dua vao diem trung binh";
	cout << endl << "11. Thong ke ty le (%) sinh vien theo xep loai hoc luc";
	cout << endl << "12. Tinh diem trung binh cua tat ca sinh vien";
	cout << endl << "13. Cho biet su chenh lech ve so luong sinh vien nam va so luong sinh vien nu";
	cout << endl << "14. Thong ke so luong sinh vien cua tung lop";
	cout << endl << "15. Tim va xuat thong tin cua nhung sinh vien co diem TB cao nhat";
	cout << endl;
	cout << endl << "==================================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	do
	{
		system("cls");
		XuatMenu();
		cout << endl << "Nhap mot so de chon menu: "; cin >> stt;
	} while (stt < 0 || stt > soMenu);
	return stt;
}

void XuLyMenu(int menu, MangSV a, int& n)
{
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap danh sach sinh vien";
		cout << endl << "Nhap so sinh vien: "; cin >> n;
		NhapDSSV(a, n);
		break;
	case 2:
		cout << endl << "Danh sach sinh vien" << endl;
		XuatDSSV(a, n);
		break;

	case 3:
		cout << endl << "Sap xep va xuat danh sach sinh vien (Giam dan theo diem TB)";
		cout << endl;
		SapGiamTheoDiemTB(a, n);
		XuatDSSV(a, n);

	case 4:
		cout << endl << "Sap xep va xuat DSSV tang dan theo ten, trung ten, sap tang theo ho va ten lot";
		

	case 5:
		cout << endl << "Tim va xuat thong tinh sinh vien theo ten";
		


	case 6:
		cout << endl << "Xuat DSSV cua lop, sap tang theo ten";
		

	case 7:
		cout << endl << "Xuat DSSV co kha nang khong duoc tot nghiep";
		

	case 8:
		cout << endl << "Tim thong tin sinh vien theo ma so";
		

	case 9:
		cout << endl << "Tinh ty le (%) so sinh vien dat loai gioi tro len";
		

	case 10:
		cout << endl << "Xep loai hoc luc cua sinh vien dua vao diem trung binh";
		

	case 11:
		cout << endl << "Thong ke ty le (%) sinh vien theo xep loai hoc luc";
		

	case 12:
		cout << endl << "Tinh diem trung binh cua tat ca sinh vien";
		

	case 13:
		cout << endl << "Cho biet su chenh lech ve so luong sinh vien nam va so luong sinh vien nu";
		

	case 14:
		cout << endl << "Thong ke so luong sinh vien cua tung lop";
		

	case 15:
		cout << endl << "Tim va xuat thong tin cua nhung sinh vien co diem TB cao nhat";

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

void ChayChuongTrinh(MangSV a, int n)
{
	int menu, soMenu = 15;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}