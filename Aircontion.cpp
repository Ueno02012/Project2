#include "Aircontion.h"
#include<stdio.h>
Aircontion::Aircontion() {
	printf("%s\n", name);
}

Aircontion::~Aircontion() {
	printf("%s\n", name);
}

void Aircontion::electricAppliances() {
	printf("%sは%s\n", name, role);
}