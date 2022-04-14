#include "TuyenSinh.h"

int main(){
    int soBaoDanh;
    TuyenSinh *tuyenSinh = new TuyenSinh();
    cout << "-------Nhap danh sach thi sinh-------" << endl;
    tuyenSinh->nhapThongTinThiSinh();
    cout << "Nhap so bao danh cua thi sinh can tim: ";
    cin >> soBaoDanh;
    tuyenSinh->timKiemThiSinh(soBaoDanh);

    if(tuyenSinh != NULL){
        delete tuyenSinh;
        tuyenSinh = NULL;
    }
}
