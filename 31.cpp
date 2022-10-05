#include<stdio.h>

	int main() {
		int a, b, c;
		scanf("%d%d%D", &a, &b, &c);
		
		if(a >b && a> c) {
			printf("so lon nhat%d\n", a);
		}
		if(b > a && b >c){
			printf("so lon nhat %d\n", b);
		}
		if(c >a && c >b) {
			printf("so lon nhat %d\n", c);
		}
	
	
	
	
	
		return 0;
	}
