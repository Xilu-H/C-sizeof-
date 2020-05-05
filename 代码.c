#include <stdio.h>

int main(){
	int a[]={1,2,3,4};
	int *b=NULL;
	b=a;
	printf("%d\n",sizeof(a)/sizeof(a[0]));
	printf("%d\n",sizeof(b)/sizeof(b[0]));
	for(int i=0;i<4;i++){
		printf("%d",b[i]);
	}
	return 0;
}















