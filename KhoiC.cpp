#include "KhoiC.h"

KhoiC::KhoiC(string monThi1, string monThi2, string monThi3)
{
    this->monThi1 = monThi1;
    this->monThi2 = monThi2;
    this->monthi3 = monThi3;
}

void KhoiC::nhapThongTin(){
    ThiSinh::nhapThongTin();
}

void KhoiC::hienThiThongTin(){
    ThiSinh::hienThiThongTin();
    cout << "To hop mon thi:" << monThi1 << "-" << monThi2 << "-" << "monThi3" << endl;
}
