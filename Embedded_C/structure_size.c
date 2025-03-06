


#include<stdint.h>
#include<stdio.h>

struct carModel
{
	uint8_t carSpeed;   // 4 bytes it will take due to padding
	uint32_t carPrice;  //4 bytes 
};

int main(void)
{
	struct carModel  carBMW ;//= {0};
	printf("Sizeof of struct carModel is %d\n",sizeof(struct carModel));

    getchar();

	return 0;
}








