#ifndef F4_h
#define F4_h
#include<bits/stdc++.h>
#include <string>
using namespace std;
class ve_may_bay{
int ma_ve,ngay,thang,nam;
int so_ghe;
string loai_ve;//loại vip,thường ,bình dân
public:
ve_may_bay(){
  ma_ve=0;
  ngay=0;
  thang=0;
  nam=0;
  so_ghe=0;
  loai_ve="null";
}
~ve_may_bay(){
  cout<<"đã hủy ve may bay mã: "<<ma_ve<<endl;
}
}
