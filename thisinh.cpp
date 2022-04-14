#include "thisinh.h"

ThiSinh::ThiSinh()
{

}

void ThiSinh::nhapThongTin(){
    cout << "Nhap ho ten: "; getline(cin, hoTen);
    cout << "Nhap so bao danh: "; cin >> soBaoDanh;
    fflush(stdin);
    cout << "Nhap dia chi: "; getline(cin, diaChi);
    cout << "Nhap muc uu tien: "; getline(cin, mucUuTien);
}

void ThiSinh::hienThiThongTin(){
    cout << "Ho ten: " << hoTen << endl;
    cout << "So bao danh: " << soBaoDanh << endl;
    cout << "Dia chi: " << diaChi << endl;
    cout << "Muc uu tien: " << mucUuTien << endl;
}

int ThiSinh::getSoBaoDanh(){
    return this->soBaoDanh;
}
