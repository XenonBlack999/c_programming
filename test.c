#include <stdio.h>

int main(){
	int a[] = {3,1,2};
	int i = 0 ;
	while (i< sizeof(a)/sizeof(a[0])){
		printf("%d \n", a[i]);
		i++;
	}
}
