#include <stdio.h>

int main() {
	int n, u;
	printf("Saisir n et U0: ");
	scanf("%d %d",&n,&u);

	switch (n)
	{
	case 0:
		break;
		
	case 1:
		u = u + 2 * n;
		break;

	case 2:
		u = 5 * n - u;
		break;


	default:
		u = 2 * n * u;
		break;
	}
	printf("Un = %d", u);
	return 0;

}
