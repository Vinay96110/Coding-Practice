#include <stdio.h>
#include <stdint.h>

uint32_t Swap_Middle(uint32_t V1, uint32_t V2)
{
   uint32_t Temp1,Temp2 = 0;   //0XAABB  -> )                           0xAB00  
   Temp1 = (V1  & 0x0FF0) << 4;      //0xCCDD & 0X0FF0 ->0x0CD0   0xCD00>>8  FFCD
   printf("1st half: 0X%x\n",Temp1);
   Temp2 = (V2  & 0x0FF0) << 4;      // 0xCD00>>8  FFCD
   printf("2nd half: 0X%x\n",Temp2);
   Temp2 = Temp2 >>8;
   printf("Temp2 post shifting : 0X%x\n", Temp2);
   printf("Result: 0X%x\n",(Temp1 | Temp2));

   return (Temp1 | Temp2);
}

int main()
{
    uint32_t Var1 = 0xAABB;
    uint32_t Var2 = 0xCCDD;

    uint32_t Result = Swap_Middle(Var1,Var2);
}