#include <stdio.h>

int main()
{
	int decimal=0;
	int binary[4]={1,1,0,1};
	int i =0;
	while (i<=3){

		if (binary[i] ==1){
			int result=1;
			for (int j=2-i;j>=0;j--){
				result*=2;
			}
		decimal+=1*result;
	}
	i++;
		}
	printf("%d\n",decimal);
	return 0;
	
	}
