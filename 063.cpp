#include<stdio.h>
#include<math.h>
int main(){
	long n;
	scanf("%li",&n);
	long sum = 0;
	while (n > 9)
	{
		sum += n % 10;
		n = floor(n / 10);
	}
	sum += n;
	printf("%li", sum);
}
