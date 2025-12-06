#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//____________________________________cac ham chuc nang cua menu_______________________________

//nhap vao 1 so nguyen ==> kiem tra so nguyen,so nguyen to,so chinh phuong
void chucnang1(){
    float n;
    int b;
    printf("Nhap vao so nguyen:");
    scanf("%f",&n);
    if (n/(int)n!=0){
        printf("%.0f la so nguyen\n",n);
        //so nguyen to
        b=(int)n;
        if (b==2){
            printf("%d la mot so nguyen to\n",b);
        }
        if (b>1){
            if (b%2!=0){
                if (b%3!=0){
                    printf("%d la mot so nguyen to\n",b);
                }
            }
        }
        else{
            printf("%d khong la so nguyen to\n",b);
        }
        //so chinh phuong
        int can=sqrt(b);
        if (can*can==b||b==0||b==1){
            printf("%d la mot so chinh phuong\n",b);
        }
        else{
            printf("%d khong la so chinh phuong\n",b);
        }
    }
    else {
        printf("%f khong la so nguyen\n",n);
        printf("%f khong la so nguyen to\n",n);
        printf("%f khong la so chinh phuong\n",n);
    }
}

//nhap vao 2 so nguyen ==> tim UCLN va BCNN cua 2 so da nhap
void chucnang2(){
    int x,y,max=1,min;
    printf("Nhap vao 2 so x y:");
    scanf("%d %d",&x,&y);
    //UCLN
    if (x==0||y==0){
        max=x+y;
    }
    
    for (int i = 1; i <= x && i<= y; i++){
        if (x%i==0&&y%i==0){
            if (max<i){
                max=i;
            }
        }
    }
    printf("UCLN la %d\n",max);
    //BCNN
    if (x>y){
        min=x;
    }else{
        min=y;
    }
    while (1){
        if (min%x==0&&min%y==0){
            break;
        }
        min++;
    }
    printf("BCNN la %d\n",min);
}

//nhap vao gio bat dau va gio ket thuc ==> gia tien can thanh toan
void chucnang3(){
    int start,end,cost,time;
    do{
        printf("Nhap vao gio bat dau va gio ket thuc:");
        scanf("%d %d",&start,&end);
    } while (start<12&&end>23);
    time=end-start;
    if (time<=3){
        cost=150000*time;
    }
    else{
        cost=time*(150000*0.7);
    }
    if (start<=17&&start>=14){
        cost*=0.9;
    }
    printf("So tien can thanh toan la: %d \n ",cost);
}

// nhap vao so dien kwh ==> tien dien
void chucnang4(){
    int k,TIEN=0;
    printf("Nhap vao so dien(kwh):");
    scanf("%d",&k);
    if (k<=50){
        TIEN=k*1678;
    }
    else if (k<=100){
        TIEN=50*1678;
    	TIEN+=(k-50)*1734;
    }
    else if (k<=200){
        TIEN=50*1678;
    	TIEN+=50*1734;
    	TIEN+=(k-100)*2014;
    }
    else if (k<=300){
        TIEN=50*1678;
    	TIEN+=50*1734;
    	TIEN+=100*2014;
    	TIEN+=(k-200)*2536;
    }
    else if (k<=400){
        TIEN=50*1678;
    	TIEN+=50*1734;
    	TIEN+=100*2014;
    	TIEN+=200*2536;
        TIEN+=(k-300)*2834;
    }
    else{
        TIEN=50*1678;
    	TIEN+=50*1734;
    	TIEN+=100*2014;
    	TIEN+=200*2536;
        TIEN+=300*2834;
        TIEN+=(k-400)*2927;
    }
    printf("TIEN DIEN = %d VND",TIEN);
}

//Nhap vao so tien can doi ==> menh gia tien duoc doi ra
void chucnang5(){
    int tdoi,to1,to2,to3,soto1=0,soto2=0,soto3=0;
    int tien[9]={500,200,100,50,20,10,5,2,1};
    printf("Nhap vao so tien can doi:");
    scanf("%d",&tdoi);
    for (int i = 0; i < 10; i++){
        if (tdoi==tien[i]){
            to1=tien[i+1];
            to2=tien[i+2];
            to3=tien[i+3];
        }
    }
    if (tdoi==1*to1+2*to2+1*to3){
        soto1++;
        soto2=2;
        soto3++;
        printf("Tien sau khi doi la %d to %d, %d to %d va %d to %d\n",soto1,to1,soto2,to2,soto3,to3 );     
    }
    else if (tdoi==2*to1+1*to2+0*to3){
        soto1=2;
        soto2++;
        printf("Tien sau khi doi la %d to %d va %d to %d \n",soto1,to1,soto2,to2 );     

    }
    else{
        soto1++;
        soto2=2;
        printf("Tien sau khi doi la %d to %d va %d to %d \n",soto1,to1,soto2,to2);     
    }
}

//nhap vao so tien muon vay ngan hang ==> so tien can tra trong 12 thang
void chucnang6(){
    int sotienvay,tiengoc1thang,tienlai1thang;
    printf("so tien vay tra gop trong 12 thang la:");
    scanf("%d",&sotienvay);
    tiengoc1thang=sotienvay/12;
    for (int i = 1; i <= 12; i++){
        tienlai1thang=sotienvay*0.05;
        printf("So tien can tra Ky %d la: %d\n",i,tiengoc1thang+tienlai1thang);
        sotienvay-=tiengoc1thang;
    }
}

//nhap vao so phan tram vay toi da(so phan tram tra gop) ==> so tien tra truoc va so tien tra hang thang cho den het ky han vay
void chucnang7(){
    float sophantram,tratruoc,trahangthang;
    printf("Nhap vao so phan tram vay toi da:");
    scanf("%f",&sophantram);
    tratruoc=((100-sophantram)/100)*500000000;
    trahangthang=(500000000-tratruoc)/(24*12);
    printf("so tien can tra truoc la %.2f\n",tratruoc);
    printf("so tien tra hang thang %.2f\n",trahangthang*(1+(0.15/12)));
}
void chucnang8(){
    
}

int main(){
//_______________________________________________Menu chuc nang_______________________________________________
    int luachon;
    do{
        printf("Welcome to 22_PS49638_DOVANTHANG_ASM2_COM108.\n");
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
        printf("Lua chon chuc nang cua ban la : ");
        scanf("%d", &luachon);
        //xet lua chon 
        switch (luachon){
            case 1:{
                chucnang1();
                break;
            }
            case 2:{
                chucnang2();
                break;
            }
            case 3:{
                chucnang3();
                break;
            }
            case 4:{
                chucnang4();
                break;
            }
            case 5:{
                chucnang5();
                break;
            }
            case 6:{
                chucnang6();
                break;
            }
            case 7:{
                chucnang7();
                break;
            }
            case 8:{
                chucnang8();
                break;
                }
            case 9:{
                break;
                }
            case 10:{
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