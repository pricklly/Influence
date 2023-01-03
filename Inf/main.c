#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int raw[10];
int i,j;
int ans;
int main(int argc, char *argv[]) {
printf("If you deminshen bee or was then some influ? One 1 Ore Zero 0\n");
	scanf("%d",&ans);
	j=5;
	for (i=1;i<=10;i++)
	{
	raw[i]=j+(i*i/2)+i*2;
	}
	for (i=1;i<=10;i++)
	{
	printf("Good see thath only see %d ",raw[i]+j);
    }
	return 0;
}