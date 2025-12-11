#include <stdio.h>
#define M 50
#define N 50
// định nghĩa hàm
void nhapmang2chieu(int a[M][N], int m, int n);
void xuatmang2chieu(int a[M][N], int m, int n);
void xuatchiahet3(int a[M][N],int m, int n);
void giatrilonnhat(int a[M][N], int m, int n);
void giatrinhonhat(int a[M][N], int m, int n);

//trien khai
void nhapmang2chieu(int a[M][N], int m, int n){
    for (int i = 0; i < m; i++)
    {   
        for (int j = 0; j < n; j++)
        {
            printf("Nhap phan tu a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]); 
        }
    }
}

void xuatmang2chieu(int a[M][N], int m, int n){
     printf("Xuat mang a[%d][%d]: \n",m,n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void xuatchiahet3(int a[M][N],int m, int n){
    printf("Xuat phan tu chia het cho 3: ");
    for(int i = 0; i<m; i++){
        for (int j=0; j<n; j++)
        {
            if(a[i][j] % 3 == 0){
                printf("%d ", a[i][j]);
            }
        }
        
    }
}

void giatrilonnhat(int a[M][N], int m, int n){
    int max = a[0][0]; 
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(max < a[i][j]){
                max = a[i][j];
            }
        }
    }
    printf("\nMax = %d", max);
}

void giatrinhonhat(int a[M][N], int m, int n){
    int min = a[0][0];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(min > a[i][j]){
                Min = a[i][j];
            }
        }
    }
    printf("\nMin = %d", min);
}


int main(){
    // nhap mang 2 chieu
    int a[M][N], m, n;
    printf("Nhap m va n: ");
    scanf("%d %d", &m,&n);
    nhapmang2chieu(a,m,n);
    xuatmang2chieu(a,m,n);
    xuatchiahet3(a,m,n);
    giatrilonnhat(a,m,n);
    giatrinhonhat(a,m,n);

    return 0;
}
