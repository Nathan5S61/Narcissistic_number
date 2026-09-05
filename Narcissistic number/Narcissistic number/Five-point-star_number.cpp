#include "Narcissistic.h"
#include "global.h"

void StarNumber() {
	for (num = 10000; num <= 100000; num++) {
		a = num / 10000;
		b = (num / 1000) % 10;
		c = (num / 100) % 10;
		d = (num / 10) % 10;
		e = num % 10;
		if (a*a*a*a*a+b*b*b*b*b+c*c*c*c*c+d*d*d*d*d+e*e*e*e*e== num)
			printf("%d\n", num);
	}
}