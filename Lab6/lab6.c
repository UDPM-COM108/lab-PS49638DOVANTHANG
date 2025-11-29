#include <stdio.h>
//_________________________________________BAI 1______________________________________________________
void tbtongchiahetcho3() {
    int n;
    printf("Nhap vao so phan tu:");
    scanf("%d", &n);
    int mang[n];
    // Nhập vào phần tử
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d:", i + 1);
        scanf("%d", &mang[i]);
    }
    float tong = 0;
    float biendem = 0; 
    for (int i = 0; i < n; i++) {
        if (mang[i] % 3 == 0) {
            tong += mang[i];
            biendem++;
        }
    }
    // Kiểm tra bd > 0 trước khi chia để tránh lỗi chia cho 0
    if (biendem > 0) {
        printf("trung binh tong cac so chia het cho 3 trong mang la:%.2f\n", tong / biendem);
    } else {
        printf("Khong co so nao chia het cho 3 trong mang.\n");
    }
}
//___________________________________________BAI 2_________________________________________________________
void timmaxmintrongmang(){
    int n;
    printf("Nhap vao so phan tu:");
    scanf("%d",&n);
    int mang[n];
    //nhap vao phan tu
    for (int i = 0; i < n; i++){
        printf("Nhap vao phan tu thu %d:",i+1);
        scanf("%d",&mang[i]);
    }
    //max
    int tempmax=mang[0];
    for (int i = 0; i < n; i++){
        if (mang[i]>tempmax){
            tempmax=mang[i];
        }
    }
    //min
    int tempmin=mang[0];
    for (int i = 0; i < n; i++){
        if (mang[i]<tempmin){
            tempmin=mang[i];
        }
    }
    printf("max la:%d\n",tempmax);
    printf("min la:%d\n",tempmin);
}
//___________________________________________BAI 3_____________________________________________________________
void sapxepmanggiamdan() {
    int n;
    printf("Nhap vao so phan tu:");
    scanf("%d", &n);
    int mang[n];
    // Nhập vào phần tử
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d:", i + 1);
        scanf("%d", &mang[i]);
    }
    // Thuật toán Sắp xếp Nổi bọt (Bubble Sort) giảm dần
    int temp;
    for (int i = 0; i < n-1 ; i++) { // Vòng lặp bên ngoài
        for (int j = 0; j < n -1 - i; j++) { // Vòng lặp bên trong
            // Nếu phần tử hiện tại nhỏ hơn phần tử kế tiếp thì hoán vị 
            if (mang[j] < mang[j + 1]) { 
                temp = mang[j];
                mang[j] = mang[j + 1];
                mang[j + 1] = temp;
            }
        }
    }

    printf("mang da sap xep giam dan la:");
    for (int i = 0; i < n; i++) {
        printf("%d,", mang[i]);
    }
    printf("\n");
}

int main() {
    tbtongchiahetcho3();
    timmaxmintrongmang();
    sapxepmanggiamdan();
    return 0;

}
