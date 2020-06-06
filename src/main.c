// GNU Lesser General Public License (LGPL) v3.0 .
// The project has been developed by Saman Ebrahimnezhad .
// Created at Iran (IR) .
// Programmed in C (GCC 9.3.0)

#include <stdio.h>

int main() {

	for(int i = 0; i <= 127; i ++) {

		printf("%d=%c\t", i, i);
		
		if(i % 5 == 0) {
			printf("\n");
		}

	}

	return 0;

}
