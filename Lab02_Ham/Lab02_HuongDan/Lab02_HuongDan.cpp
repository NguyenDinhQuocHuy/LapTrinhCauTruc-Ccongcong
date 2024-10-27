/*
 - Khai bao ham: [KDL] Ten_Ham ([ Danh_sach_tham_so ]);
 - Khai bao phai dat truoc ham main
 - Loi goi ham : Ten_Ham ([ Danh_sach_doi_so ])
*/

 // Nap cac thu vien ham vao chuong trinh
 #include <iostream>
 #include <conio.h>
 #include <bits/stdc++.h>
 
 using namespace std;
 
 // Dinh nghia hang so va cac kieu du lieu moi
 
 // Khai bao nguyen mau cac ham
  void ThongBao();
  void XuatKyTu();
 // Dinh nghia ham main
 int main()
 {
   // Goi ham thong bao
    ThongBao();
    XuatKyTu(157);      // Dung gia tri lam doi so
    short dollar = 36, ma;
    XuatKyTu(dollar);
    
    cout << endl << "Nhap 1 so trong doan [30 .. 255] : ";
    cin >> ma;
    XuatKyTu(ma);
   // Dung chuong trinh va cho nhan 1 phim de ket thuc
 	_getch();
   // Tra ve gia tri 1
 	return 1;
 }
 
 // Dinh nghia cac ham xu ly
 
 // Dinh nghia ham xuat mot thong bao ra man hinh
 void ThongBao()
 {
 	cout << endl << "Ban phai hoan thanh bai tap nay !";
 }
 
 void XuatKyTu (short ma)
 {
 	char kyTu = (char)ma;
 	cout << endl << ma << " <=> " << kyTu;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
