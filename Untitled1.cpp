#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans = n;
	while(n>1)
	{
		ans = ans * (n-1);
		n = n-1;
	}
	printf("factorial is: %d",ans);
	return 0;
}
