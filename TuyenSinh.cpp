#include "TuyenSinh.h"

TuyenSinh::TuyenSinh()
{

}

TuyenSinh::~TuyenSinh(){
    if(ts != NULL){
        delete ts;
        ts = NULL;
    }
}

void TuyenSinh::themThiSinh(ThiSinh *ts){
    dsts.push_back(ts);
}

void TuyenSinh::nhapThongTinThiSinh(){
    int chon;
    int soLuongThiSinh = 0;
    cout << "Nhap so luong thi sinh can them: ";
    cin >> soLuongThiSinh;
    for(int i = 0; i < soLuongThiSinh; i++ ){
        cout << "Thi sinh thuoc khoi nao(1-KhoiA; 2-KhoiB; 3-KhoiC): ";
                cin >> chon;
                fflush(stdin);
        switch(chon){
            case KHOIA:
            ts = new KhoiA("Toan", "Ly", "Hoa");
            break;
            case KHOIB:
            ts = new KhoiB("Toan", "Hoa", "Sinh");
            break;
            case KHOIC:
            ts = new KhoiC("Van", "Su", "Dia");
            break;
            default:
            ts = new KhoiA("Toan", "Ly", "Hoa");
            break;
        }
        ts->nhapThongTin();
        themThiSinh(ts);
    }
}

void TuyenSinh::timKiemThiSinh(int soBaoDanh){
    for(ThiSinh *ts : dsts){
        if(ts->getSoBaoDanh() == soBaoDanh){
            ts->hienThiThongTin();
        }
    }
}
























