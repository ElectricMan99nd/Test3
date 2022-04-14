#ifndef KHOIC_H
#define KHOIC_H

#include "thisinh.h"

class KhoiC: public ThiSinh
{
public:
    KhoiC(string monThi1, string monThi2, string monThi3);
    void nhapThongTin();
    void hienThiThongTin();
};

#endif // KHOIC_H
