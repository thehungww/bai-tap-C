/* tạo ra một chương trình để xừ lý mảng số nguyên có menu các chức năng của chương trình sẽ gồm
 nhập vào một mảng,
 sắp xếp tăng dần sắp xếp giảm dần
 tìm phần từ trong mảng,
  chèn và xóa phần tử trong mảng, 
  đảo ngược mảng*/
#include <stdio.h>
#include <stdlib.h>
void xeptang(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("mang sau khi sap xep tang dan la \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
}

void xepgiam(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("mang sau khi sap xep giam dan la \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
}

void timphantu(int a[], int n)
{
    int i, x;
    printf("nhap phan tu can tim \n");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("phan tu %d nam o vi tri %d \n", x, i);
        }
    }
}

int chenphantu(int a[], int n)
{
    int i, x, k;
    printf("nhap phan tu can chen \n");
    scanf("%d", &x);
    printf("nhap vi tri can chen \n");
    scanf("%d", &k);
    for (i = n; i > k; i--)
    {
        a[i] = a[i - 1];
    }
    a[k] = x;
    printf("mang sau khi chen la \n");
    for (i = 0; i < n + 1; i++)
    {
        printf("%d \t", a[i]);
    }
    return n + 1;
}

int xoaphantu(int a[], int n)
{
    int i, k;
    printf("nhap vi tri can xoa \n");
    scanf("%d", &k);
    for (i = k; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    printf("mang sau khi xoa la \n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d \t", a[i]);
    }
    return n - 1;
}

void daonguocmang(int a[], int n)
{
    int i, temp;
    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    printf("mang sau khi dao nguoc la \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
}

int nhapmang(int m, int a[]) {
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
    return m;
}

int main()
{
    int m,n,a[100];
    do
    {
        printf("chon chuc nang \n");
        printf(" 1 sap xep tang dan mang \n");
        printf(" 2 sap xep giam dan mang \n");
        printf(" 3 tim phan tu trong mang \n");
        printf(" 4 chen phan tu trong mang \n");
        printf(" 5 xoa phan tu trong mang \n");
        printf(" 6 dao nguoc mang \n");
        printf(" 7 nhap mang \n");
        printf("chon chuc nang \n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            printf("sap xep tang dan mang \n");
            xeptang(a,m);
            break;
        }
        case 2:
        {
            printf("sap xep giam dan mang \n");
            xepgiam(a,m);
            break;
        }
        case 3:
        {
            printf("tim phan tu trong mang \n");
            timphantu(a,m);
            break;
        }
        case 4:
        {
            printf("chen phan tu trong mang \n");
            m = chenphantu(a,m);
            break;
        }
        case 5:
        {
            printf("xoa phan tu trong mang \n");
            m = xoaphantu(a,m);
            break;
        }
        case 6:
        {
            printf("dao nguoc mang \n");
            daonguocmang(a,m);
            break;
        }
        case 7:
         {
            m=nhapmang(m,a);
            break;
         }
      }

    } while (n!=0);
    {
       
   }
}