#include <stdio.h>
int main()
 {
 	int decimal, result;
 	int binary[4] = {1, 1, 0, 1};

 	int i =3;
 	while(i >= 0)
 	{if ( binary[i] ==1){
	 for(int j=i-1;j>=0;j--){
	 	result *=2;
	 }
	decimal += result;
	 }

	}
	printf("%d",decimal);
	return 0;
 }
 
