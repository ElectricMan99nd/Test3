#include "KhoiA.h"


KhoiA::KhoiA()
{

}


KhoiA::KhoiA(string monThi1, string monThi2, string monThi3)
{
    this->monThi1 = monThi1;
    this->monThi2 = monThi2;
    this->monthi3 = monThi3;
}

void KhoiA::nhapThongTin(){
    ThiSinh::nhapThongTin();
}

void KhoiA::hienThiThongTin(){
    ThiSinh::hienThiThongTin();
    cout << "To hop mon thi:" << monThi1 << "-" << monThi2 << "-" << "monThi3" << endl;
}
