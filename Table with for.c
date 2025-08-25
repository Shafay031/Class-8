#include <stdio.h>
int main(){
	int num;
	printf("Enter Table Number: ");
	scanf("%d", &num);
	int i=1;
	for(; i<=10; i++){
		printf("%d X %d = %d\n",num, i,num*i);
	}
	return 0;
	
}
