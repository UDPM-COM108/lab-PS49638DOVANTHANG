#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int luachon;
    //Menu chuc nang
    do{
        printf("Welcome to 22_PS49638_DOVANTHANG_ASM1_COM108.\n");
        printf("_____________________________________________\n");
        printf("Chuc nang so 1: Kiem Tra So Nguyen.\n");
        printf("Chuc nang so 2: Tim uoc so chung va boi so chung cua 2 so.\n");
        printf("Chuc nang so 3: Chuong trinh tinh tien cho quan karaoke.\n");
        printf("Chuc nang so 4: Tinh tien dien.\n");
        printf("Chuc nang so 5: Chuc nang doi tien.\n");
        printf("Chuc nang so 6: Xay dung tinh nang tinh lai suat vay ngan hang hoac vay tra gop.\n");
        printf("Chuc nang so 7: Xay dung chuong trinh vay tien mua xe.\n");
        printf("Chuc nang so 8: Sap xep thong tin sinh vien.\n");
        printf("Chuc nang so 9: Xay dung game FPT-LOTT(2/15).\n");
        printf("Chuc nang so 10:Xay dung chuong trinh tinh toan phan so.\n");
        printf("==============================================\n");
        printf("Lua chon chuc nang cua ban la :....\n");
        scanf("%d", &luachon);
        //xet lua chon 
        switch (luachon){
            case 1:{
                int n;
                printf("Nhap so nguyen n:\n");
                break;
            }
            case 2:{
                int a,b;
                printf("Nhap 2 so can tim UCLN va BCNN:\n");
                break;
            }
            case 3:{
                int h;
                printf("Nhap so gio karaoke da thue:\n");
                break;
            }

            case 4:{
                int sodien;
                printf("Nhap so dien(kwh) n:\n");
                break;
            }

            case 5:{
                int tien;
                printf("Nhap so tien can doi:\n");
                break;
            }

            case 6:{
                int tinhnang;
                printf("Nhap ls de tinh laisuat va vtg de tinh vaytragop :\n");
                break;
            }

            case 7:{
                int xe;
                printf("Nhap so tien can vay de mua xe:\n");
                break;
            }

            case 8:{
                int sl;
                printf("Nhap so vao so luong sinh vien:\n");
                break;
                }
            case 9:{
                printf("Chao mung den voi game FpT-LoTT:\n");
                break;
                }
            case 10:{
                int phanso;
                printf("Nhap vao phan so:\n");
                break;
                }
            default:{
                printf("Lua Chon Khong Hop Le Vui Long Nhap lai\n");

            }

            }
    }
        while (luachon!=0);
    return 0;
}