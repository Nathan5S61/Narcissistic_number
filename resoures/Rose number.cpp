#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int a,b,c,d;
	for (int num=1000;num<=9999;num++){
		a = num / 1000;
		b = (num / 100) % 10;
		c = (num / 10) % 10;
		d = num % 10;
		if (a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d==num)
			printf("%d\n",num);
	}
	cin.get();
	return 0;
}
