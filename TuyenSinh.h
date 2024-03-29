#ifndef TUYENSINH_H
#define TUYENSINH_H

#include <list>
#include "thisinh.h"
#include "KhoiA.h"
#include "KhoiB.h"
#include "KhoiC.h"

#define KHOIA 1
#define KHOIB 2
#define KHOIC 3

class TuyenSinh
{
    ThiSinh *ts;

    list<ThiSinh*> dsts;
public:
    TuyenSinh();
    ~TuyenSinh();
    void themThiSinh(ThiSinh *ts);

    void nhapThongTinThiSinh();
    void timKiemThiSinh(int soBaoDanh);
};

#endif // TUYENSINH_H
