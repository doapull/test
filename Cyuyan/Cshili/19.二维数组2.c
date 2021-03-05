#include<stdio.h>

int main()
{
	int arr[3]={1,2,3};
	int arr11[1][1];
	int arr12[1][2];
	int arr13[1][3];
	int arr21[2][1];
	int arr22[2][2];
	int arr23[2][3];

	printf("sizeof(arr)%d\n",sizeof(arr));
	printf("sizeof(arr[2])%d\n",sizeof(arr[2]));
	printf("sizeof(arr11)%d\n",sizeof(arr11));
	printf("sizeof(arr12)%d\n",sizeof(arr12));
	printf("sizeof(arr13)%d\n",sizeof(arr13));
	printf("sizeof(arr21)%d\n",sizeof(arr21));
	printf("sizeof(arr22)%d\n",sizeof(arr22));
	printf("sizeof(arr23)%d\n",sizeof(arr23));
	printf("sizeof(arr22[1][2])%d\n",sizeof(arr22[1][2]));
	
	return 0;
}
