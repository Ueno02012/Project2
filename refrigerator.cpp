#include "refrigerator.h"
#include<stdio.h>
refrigerator::refrigerator() {
	printf("%s\n", name);
}

refrigerator::~refrigerator() {
	printf("%s\n", name);
}

void refrigerator::electricAppliances() {
	printf("%sは%s\n", name, role);
}