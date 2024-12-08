
class Khach:
    def __init__(self, ten, sdt, ngay, loai, gia): #init: hàm đặc biệt tự động chạy khi tạo 1 đối tượng từ class
        self.ten = ten #self: đại diện cho đối tượng được khởi tạo để lưu giá trị 
        self.sdt = sdt
        self.ngay = ngay
        self.loai = loai
        self.gia = gia

danh_sach = [Khach("Long", "0000000000", "06/08/2022", 2, 800.000),
             Khach("Huy", "0101010101", "11/09/2010", 2, 999.000),
             Khach("Tuấn", "0202020202", "08/03/2019", 3, 250.000),
             Khach("Lâm", "0303030303", "30/04/2015", 2, 900.000),
             Khach("Việt", "0404040404", "01/06/2023", 3, 200.000),
             Khach("Linh", "0505050505", "25/12/2023", 1, 700.000),
             Khach("Kỳ", "0606060606", "01/01/2024", 1, 850.000),
             ] #tạo 1 list ban đầu

def Nhap_danh_sach(danh_sach, n):
    for i in range(1, n + 1):
        print("Khách hàng thứ", i)
        ten = input("Tên: ")
        sdt = input("Số điện thoại: ")
        ngay = input("Ngày mua: ")
        loai = int(input("Loại đàn (1: Classic, 2: Acoustic, 3: Ukulele): "))
        gia = float(input("Giá tiền: "))
    danh_sach.append(Khach(ten, sdt, ngay, loai, gia)) #gắn từng khách hàng vào cuối list
    return danh_sach

def Xuat_danh_sach(danh_sach):
    print("Danh sách khách hàng: ")
    for kh in danh_sach:
        print("\n")
        print(f"Tên: {kh.ten}")
        print(f"Số điện thoại: {kh.sdt}")
        print(f"Ngày mua: {kh.ngay}")
        print(f"Loại đàn (1: Classic, 2: Acoustic, 3: Ukulele): {kh.loai}")
        print(f"Giá tiền: {kh.gia}")

def Bo_sung_danh_sach(danh_sach, n):
    print("Bổ sung khách hàng: ")
    bo_sung = Nhap_danh_sach([], n) #truyền danh sách bổ sung vào 1 list khác, sau đó nối 2 list lại với nhau
    danh_sach.extend(bo_sung) #extend: nối 2 danh sách lại với nhau

def Tra_cuu_khach_hang_theo_sdt(danh_sach, sdt):
    for kh in danh_sach:
        if kh.sdt == sdt:
            print("\nKhách hàng có số điện thoại", sdt, "là:")
            print("\n")
            print(f"Tên: {kh.ten}")
            print(f"Số điện thoại: {kh.sdt}")
            print(f"Ngày mua: {kh.ngay}")
            print(f"Loại đàn (1: Classic, 2: Acoustic, 3: Ukulele): {kh.loai}")
            print(f"Giá tiền: {kh.gia}")
        
def Tra_cuu_khach_hang_theo_ten(danh_sach, ten):
    for kh in danh_sach:
        if kh.ten == ten:
            print("\nKhách hàng có tên", ten, "là:")
            print("\n")
            print(f"Tên: {kh.ten}")
            print(f"Số điện thoại: {kh.sdt}")
            print(f"Ngày mua: {kh.ngay}")
            print(f"Loại đàn (1: Classic, 2: Acoustic, 3: Ukulele): {kh.loai}")
            print(f"Giá tiền: {kh.gia}")

def Xuat_theo_loai_dan(danh_sach, loai):
    print(f"\nDanh sách khách hàng mua đàn loại", loai, "là:")
    for kh in danh_sach:
        if kh.loai == loai:
            print("\n")
            print(f"Tên: {kh.ten}")
            print(f"Số điện thoại: {kh.sdt}")
            print(f"Ngày mua: {kh.ngay}")
            print(f"Loại đàn (1: Classic, 2: Acoustic, 3: Ukulele): {kh.loai}")
            print(f"Giá tiền: {kh.gia}")
            
def Xuat_theo_gia_dan(danh_sach, gia):
    print(f"\nDanh sách khách mua đàn có giá từ", gia, "là:")
    for kh in danh_sach:
        if kh.gia >= gia:
            print("\n")
            print(f"Tên: {kh.ten}")
            print(f"Số điện thoại: {kh.sdt}")
            print(f"Ngày mua: {kh.ngay}")
            print(f"Loại đàn (1: Classic, 2: Acoustic, 3: Ukulele): {kh.loai}")
            print(f"Giá tiền: {kh.gia}")

def Menu():
    chay = []
    
    while True:
        print("\n ===== CHỌN CHỨC NĂNG =====")
        print("1. Nhập danh sách")
        print("2. Xuất danh sách")
        print("3. Bổ sung danh sách")
        print("4. Tra cứu khách hàng theo số điện thoại")
        print("5. Tra cứu khách hàng theo tên")
        print("6. Lọc danh sách theo loại đàn")
        print("7. Xuất đanh khách khách hàng mua đàn có giá từ ? tiền")
        print("8. Thoát chương trình !")
        print("=============================")

        chon = int(input("Nhập chức năng: "))

        if chon == 1:
                n = int(input("Nhập số lượng khách hàng: "))
                if n > 0:
                    chay = Nhap_danh_sach(danh_sach, n)
                else:
                    print("Số lượng khách hàng không hợp lệ")
                    
        elif chon == 2:
            chay = Xuat_danh_sach(danh_sach)

        elif chon == 3:
                n = int(input("Nhập số lượng khách hàng bổ sung: "))
                if n > 0:
                    chay = Bo_sung_danh_sach(danh_sach, n)
                else:
                    print("Số lượng khách hàng không hợp lệ")

        elif chon == 4:
                sdt = input("\nNhập số điện thoại của khách cần tìm: ")
                chay = Tra_cuu_khach_hang_theo_sdt(danh_sach, sdt)

        elif chon == 5:
                ten = input("Nhập tên khách hàng: ")
                chay = Tra_cuu_khach_hang_theo_ten(danh_sach, ten)

        elif chon == 6:
                loai = int(input("\nNhập loại đàn cần tìm (1. Classic, 2. Acoustic, 3. Ukulele): "))
                for kh in danh_sach:
                    if loai == 1 or loai == 2 or loai == 3:
                        chay = Xuat_theo_loai_dan(danh_sach,loai)
                        break
                    else:
                        print ("Loại đàn không hợp lệ")
                        break

        elif chon == 7:
                gia = float(input("\nNhập giá đàn: "))
                chay = Xuat_theo_gia_dan(danh_sach, gia)
            
        elif chon == 8:
            print("Thoát chương trình !")
            break
        else:
            print("Không hợp lệ, chọn lại !")
            

if __name__ == '__main__': #phần chạy chương trình
    Menu()

