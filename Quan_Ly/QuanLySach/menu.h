
// Khai bao nguyen mau xu ly menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DSTL ds, int& n);
void ChayChuongTrinh(DSTL ds, int& n);

// Dinh nghia ham xu ly menu
void XuatMenu()
{
	cout << endl << "============================== CHON CHUC NANG ==============================";
	cout << endl << " 1. Nhap danh sach tai lieu";
	cout << endl << " 2. Xuat danh sach tai lieu";
	cout << endl << " 3. Tinh tong gia tat ca cac tai lieu";
	cout << endl << " 4. Them mot tai lieu vao vi tri vt cho truoc";
	cout << endl << " 5. Xoa mot tai lieu tai vi tri vt cho truoc";
	cout << endl << " 6. Cap nhat thong tin tai lieu theo ma tai lieu cho truoc";
	cout << endl << " 7. Tim danh muc sach duoc xuat ban boi Nha xuat ban va Nam xuat ban cho truoc";
	cout << endl << " 8. Tim nhung bai bao khoa hoc co su tham gia cua tac gia cho truoc";
	cout << endl << " 9. Thong ke so luong tai lieu theo moi loai";
	cout << endl << "10. Xem thong tin cua nhung tai lieu co gia dat nhat";
	cout << endl << "11. Liet ke cac tai lieu theo tung nam xuat ban";
	cout << endl << "12. Tim tai lieu co nhieu tac gia nhat";
	cout << endl << "13. Xem thong tin tai lieu theo ma so tai lieu cho truoc";
	cout << endl << "14. Sap xep cac tai lieu tang dan theo tua de";
	cout << endl << "===========================================================================";
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

void XuLyMenu(int menu, DSTL ds, int& n)
{
	TaiLieu tl;
	int vt;
	switch (menu)
	{
	case 1:
		cout << endl << "Nhap so tai lieu: "; cin >> n;
		NhapDSTaiLieu(ds, n);
		break;

	case 2:
		XuatDSTaiLieu(ds, n);
		break;

	case 3:
		cout << endl << "Tong gia tien cua tat ca cac tai lieu la: " << TongGiaTatCaTaiLieu(ds, n);
		break;

	case 4:
		Nhap1TaiLieu(tl);
		cout << endl << "Nhap vi tri: "; cin >> vt;
		Them1TaiLieuTaiViTri(ds, n, tl, vt);
		XuatDSTaiLieu(ds, n);
		break;

	case 5:

		break;

	case 6:

		break;

	case 7:

		break;

	case 8:

		break;

	case 9:

		break;

	case 10:

		break;

	case 11:

		break;

	case 12:

		break;

	case 13:

		break;

	case 14:

		break;

	default:
		cout << endl << "Thoat chuong trinh";
		break;
	}
	
	if (menu > 0)
	{
		cout << endl << "Chon 1 phim bat ky de tiep tuc !";
		_getch();
	}
}

void ChayChuongTrinh(DSTL ds, int& n)
{
	int menu, soMenu = 14;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, ds, n);

	} while (menu > 0);
}


