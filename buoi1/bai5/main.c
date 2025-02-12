#include <stdio.h>
int main(){
	int a,b,tam=0;
	printf("nhap vao a va b");
	scanf("%d %d",&a,&b);
	printf("\nso truoc khi thay doi a=%d b=%d",a,b);
	tam=a;
	a=b;
	b=tam;
	printf("\nso sau khi thay doi a=%d b=%d",a,b);
	
}
