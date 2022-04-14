#ifndef KHOIA_H
#define KHOIA_H

#include "thisinh.h"

class KhoiA: public ThiSinh
{

public:
    KhoiA();
    KhoiA(string monThi1, string monThi2, string monThi3);
    void nhapThongTin();
    void hienThiThongTin();
};

#endif // KHOIA_H
