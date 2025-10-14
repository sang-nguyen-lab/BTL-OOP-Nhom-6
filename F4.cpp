// Hủy vé đã đặt
// - Yêu cầu nhập mã vé hoặc CMND của hành khách để tìm vé cần hủy.
// - Hiển thị thông tin vé để xác nhận.
// - Thực hiện hủy vé.
// - Cập nhật lại số ghế trống cho chuyến bay tương ứng.
//Sang-Nguyễn
#include "F4.h"
#include <iostream>
#include <vector>
using namespace std;
ve_may_bay::ve_may_bay(){
  ma_ve=0;
  ngay=0;
  thang=0;
  nam=0;
  so_ghe=0;
  loai_ve="null";
}
ve_may_bay::~ve_may_bay(){
  cout<<"đã hủy ve may bay mã: "<<ma_ve<<endl;
}
ve_may_bay::tim_kiem_mave(int n){
cout<<"nhập mã vé cần hủy : "<<endl;
cin>>n;
  if(n==ma_ve){
    ~ve_may_bay();
}
void ve_may_bay::hien_thi_chuc_nang(int choice){
  cout<<"<<<<< HỦY VÉ >>>>>"<<endl;
   do {
        cout << "\n===== MENU =====\n";
        cout << "1. xoa ve \n";
        cout << "2. Xem danh sach\n";
        cout << "0. Thoat\n";
        cout << "Lua chon: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: ; break;
            case 2: ; break;
            case 0: cout << "Thoat chuong trinh!\n"; break;
            default: cout << "Lua chon khong hop le!\n"; break;
        }
    } while (choice != 0);
}
void ve_may_bay::in_thong_tin_ve(){
  cout<<"mã vé :"
}
