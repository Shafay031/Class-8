#include <stdio.h>
int main(){
	int n, i=1, sum=0;
	printf("Enter Number: ");
	scanf("%d", &n);
	
	while (i<=n){
	sum = sum+2;
	printf("sum = %d\n",sum);
	i++;		
	}
}
