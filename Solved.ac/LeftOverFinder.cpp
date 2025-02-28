#include<stdio.h>
#include<string.h>
int main2() {
	int people, size[10], tshirt, pen,hmt,hmp;
	scanf("%d", &people);
	for (int k = 0; k < 6; k++)
	{
		scanf("%d", &size[k]);
	}
	scanf("%d", &tshirt);
	scanf("%d", &pen);
	for (int k = 0; k < 6; k++)
	{
		if (size[k] % tshirt == 0)
			hmt += size[k] / tshirt;
		else
			hmt += size[k] / tshirt + 1;
	}
	printf("%d\n%d %d", hmt,people/pen,people%pen);
}