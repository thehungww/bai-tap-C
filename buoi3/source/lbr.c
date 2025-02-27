int gcc = 8;

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
