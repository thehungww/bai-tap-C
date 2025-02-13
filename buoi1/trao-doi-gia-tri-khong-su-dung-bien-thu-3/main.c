#include<stdio.h>
int main(){
	int a,b;
	printf("nhap vao a va b") ;
	scanf("%d %d",&a,&b);
	printf("\nso truoc khi thay doi a=%d b=%d",a,b);
	a=a+b;
	b=a-b;
    a=a-b;
	printf("\nso sau khi thay doi a=%d b=%d",a,b);
}
