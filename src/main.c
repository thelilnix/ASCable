// GNU Lesser General Public License (LGPL) v3.0 .
// The project has been developed by Saman Ebrahimnezhad .
// Created at Iran (IR) .
// Programmed in C (GCC 9.3.0)

#include <stdio.h>

int main() {
	
	printf("  32=SPACE    \t");

	for(int i = 33; i <= 126; i ++) {

		printf("%d=%c\t", i, i);
		
		if(i % 6 == 0) {
			printf("\n");
		}

	}
	
	return 0;

}
