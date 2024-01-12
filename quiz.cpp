#include<stdio.h>
#include<stdlib.h>

typedef struct Hamburger {

	char name[50];
	int price;
	double kcal;

}; Hamburger;

int main() {
	Hamburger macdonald[10] = {
		{"cheese buger",3000,320},
		{"chicken buger",3000,320},
	};

	double* pd;
	pd=(double*)malloc(sizeof(double) * 10);
	
	Hamburger* ph;
	ph = (Hamburger*)malloc(sizeof(Hamburger) * 100);

	
		return 0;
}