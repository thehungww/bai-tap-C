#include <stdio.h>
#include <stdlib.h>
#include "lbr.h"

void nhapmang(int m, int a[])
{
    printf("nhap so phan tu cua mang \n");
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        printf("nhap phan tu thu %d \n", i);
        scanf("%d", &a[i]);
    }
    printf("mang sau khi nhap la \n");
    for (int i = 0; i < m; i++)
    {
        printf("%d \t", a[i]);
    }
}

extern int gcc;

int main()
{
    // int m = 0, n, a[100]; // Initialize m to 0
    // do
    // {
    //     printf("chon chuc nang \n");
    //     printf(" 1 sap xep tang dan mang \n");
    //     printf(" 2 sap xep giam dan mang \n");
    //     printf(" 3 tim phan tu trong mang \n");
    //     printf(" 4 chen phan tu trong mang \n");
    //     printf(" 5 xoa phan tu trong mang \n");
    //     printf(" 6 dao nguoc mang \n");
    //     printf(" 7 nhap mang \n");
    //     printf(" 0 thoat \n"); // Add exit option
    //     printf("chon chuc nang \n");
    //     scanf("%d", &n);
    //     switch (n)
    //     {
    //     case 1:
    //     {
    //         printf("sap xep tang dan mang \n");
    //         xeptang(a, m);
    //         break;
    //     }
    //     case 2:
    //     {
    //         printf("sap xep giam dan mang \n");
    //         xepgiam(a, m);
    //         break;
    //     }
    //     case 3:
    //     {
    //         printf("tim phan tu trong mang \n");
    //         timphantu(a, m);
    //         break;
    //     }
    //     case 4:
    //     {
    //         printf("chen phan tu trong mang \n");
    //         m = chenphantu(a, m);
    //         break;
    //     }
    //     case 5:
    //     {
    //         printf("xoa phan tu trong mang \n");
    //         m = xoaphantu(a, m);
    //         break;
    //     }
    //     case 6:
    //     {
    //         printf("dao nguoc mang \n");
    //         daonguocmang(a, m);
    //         break;
    //     }
    //     case 7:
    //     {
    //         nhapmang(m, a);
    //         break;
    //     }
    //     }
    // } while (n != 0); // Proper exit condition
    printf("%d", gcc);
}