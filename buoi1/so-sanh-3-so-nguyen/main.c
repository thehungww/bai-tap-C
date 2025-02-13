#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap vao a b c\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b &&a>c){
		printf("\n so lon nhat la a=%d",a);
	}
	else if (b>a&&b>c){
		printf("\n so lon nhat la b=%d",b);
	}
	else {
		printf("\n so lon nhat la c=%d",c);
	}
}
