#pragma warning(disable: 4996)
#include<stdio.h>
#include<stdlib.h>
#define abs(x) ((x > 0)?(x):(-x))

typedef unsigned char binary;

enum
{
	BIT_TO_ZERO = 0,
	BIT_TO_ONE
};

binary ResetBit(binary dest_data, binary bit_num)
{
	return dest_data & ~(0x01 << bit_num);
}

int main()
{
	/*

	  *  ******  *
	 ***  ****  ***
	*****  **  *****
   *******    *******
  *********  *********
  *********  *********	
   *******    *******
    *****  **  *****
	 ***  ****  ***
	  *  ******  *


	*/

	int i, j;

	int height = 5;
	
	fputs("INPUT HEIGHT: ", stdout);
	scanf_s("%d", &height);

	for (i = -height; i < height; i++)
	{
		for (j = 0; j < abs(i); j++)
		{
			printf(" ");
		}
		for (j = 0; j < (height - abs(i)) * 2 - 1; j++)
		{
			printf("*");
		}
		puts("");
	}


	binary lamp_state = ResetBit(0xff, 2);

	//printf("lamp_state= %#X, lamp_state = %d\n", lamp_state, lamp_state);
	
	return 0;
}