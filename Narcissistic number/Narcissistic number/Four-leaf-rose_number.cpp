#include "Narcissistic.h"
#include "global.h"

void RoseNumber() {
	for (num = 1000; num <= 10000; num++) {
		a = num / 1000;
		b = (num / 100) % 10;
		c = (num / 10) % 10;
		d = num % 10;
		if (a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d==num)
			printf("%d\n", num);
	}
}