#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "QuanLy.h"


class Nhanvien
{
private:
    string name, soDienThoai;
    int maNhanvien, Luong;

public:
    void nhapMoi();
    void suaThongTin(const string &thongTinNhanvien);
    void xoaThongTin(const string &thongTinNhanvien);
    void timKiem();
    void daoTao();
    void thaoTac();
};

class TraLuongNhanVien {
    private:
        string tenNhanVien;
        string ngay;
        int LuongTheoGio = 20000;
        int checkIn;
        int checkOut;
        int luongTheoNgay; 
    
    public:
        void tinhLuong();
        void traLuong();
        void thaoTac();
    };