#include <iostream>

int factorial (int n){
	int pat=1;
	for (int i=1; i<=n; i++) {
		pat=pat * i;
	}
	return pat;
}

