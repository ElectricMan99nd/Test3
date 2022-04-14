#ifndef KHOIB_H
#define KHOIB_H

#include "thisinh.h"

class KhoiB:  public ThiSinh
{
public:
    KhoiB();
    KhoiB(string monThi1, string monThi2, string monThi3);
    void nhapThongTin();
    void hienThiThongTin();
};

#endif // KHOIB_H
