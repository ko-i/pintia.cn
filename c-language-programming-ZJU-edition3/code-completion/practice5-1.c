#include <stdio.h>

int sum(int m, int n);

int main()
{    
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));

    return 0;
}

int sum(int m, int n){
	int sum = m;
	int i = 0;
	for(i = m+1; i <= n; i++){
		sum+=i;
	}
	return sum;
}