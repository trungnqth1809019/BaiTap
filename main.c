#include <stdio.h>
#include <stdlib.h>

void kiemtra1(int ia,int  ib,int ic){
    if(ia <= 0 || ib <= 0 || ic <= 0 ){
        printf("do dai mot canh tam giac khong the nho hon hoac bang 0\n");
        return exit(0);
    }
}

void kiemtra2(int ia,int  ib,int ic){
    if(ia + ib <= ic || ia + ic <= ib || ib + ic <= ia){
        printf("tong hai canh cua mot tam giac luon phai lon hon canh con lai (theo bat dang thuc tam giac)\n");
        return exit(0);
    }
}
float tinhnuachuvi(int ia, int ib, int ic){
    return (float)(ia + ib +ic)/2;
}

int main() {
    int ia, ib, ic;
    printf("nhap vao so do 3 canh cua mot tam giac\n");
    printf("nhap vao canh thu nhat\n");
    scanf("%d", &ia);
    printf("nhap vao canh thu hai\n");
    scanf("%d", &ib);
    printf("nhap vao canh thu ba\n");
    scanf("%d", &ic);
    kiemtra1(ia, ib, ic);
    kiemtra2(ia, ib, ic);
    printf("nua chu vi la %.4f\n", tinhnuachuvi(ia, ib, ic));
    return 0;
}