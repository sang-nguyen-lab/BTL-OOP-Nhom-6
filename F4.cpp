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

void ve_may_bay::in_thong_tin_ve(){
  
}
