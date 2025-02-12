#include <stdio.h>
int main (){
	int a,b;
	printf ("nhap vao a va b \n ");
	scanf("%d %d",&a,&b);
	if (a>b){
		printf("\n so lon la a=%d",a);
	}
	else if (a==b){
		printf("\n 2 so bang nhau");
	}
	else {
		printf("\n so lon hon la b=%d",b);
	}
}
