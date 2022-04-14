#ifndef KHOIA_H
#define KHOIA_H

#include "thisinh.h"

class KhoiA: public ThiSinh
{
protected:
    string monThi1;
    string monThi2;
    string monthi3;
public:
    KhoiA();
    KhoiA(string monThi1, string monThi2, string monThi3);
    void nhapThongTin();
    void hienThiThongTin();
};

#endif // KHOIA_H
