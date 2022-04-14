#ifndef THISINH_H
#define THISINH_H

#include<iostream>
#include <string.h>
using namespace std;

class ThiSinh
{
protected:
    int soBaoDanh;
    string hoTen;
    string diaChi;
    string mucUuTien;
    string monThi1;
    string monThi2;
    string monthi3;

public:
    ThiSinh();
    virtual void nhapThongTin();
    virtual void hienThiThongTin();
    int getSoBaoDanh();
};

#endif // THISINH_H
