#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint64_t reverseBits(uint64_t num);
uint64_t eotBCHencode(uint64_t arg);
uint64_t hotBCHencode(uint64_t arg);
uint8_t messageCompareEOT(uint64_t arg0);
uint8_t messageCompareHOT(uint64_t arg0);
void createMessage(uint64_t arg0);
void createBCHint(void);

uint8_t assignBuffer[8];
uint64_t bchMessageint = 0;


int main(void) {
	uint64_t messageData2 = 0xf06354be00000000;
	//uint64_t messageData3 = 0xf06354bec8800000;



	messageData2 = hotBCHencode(messageData2);

	//messageData2 = messageCompareHOT(messageData2);

	printf("%llX \n", messageData2);

	createMessage(messageData2);

	printf("%X", assignBuffer[0]);
	printf("%X", assignBuffer[1]);
	printf("%X", assignBuffer[2]);
	printf("%X", assignBuffer[3]);
	printf("%X", assignBuffer[4]);
	printf("%X", assignBuffer[5]);
	printf("%X", assignBuffer[6]);
	printf("%X \n", assignBuffer[7]);

	createBCHint();

	printf("%llX\n", bchMessageint);

}

uint64_t reverseBits(uint64_t num)
{
	uint64_t iLoop = 0;
    uint64_t tmp = 0;         //  Assign num to the tmp
    int iNumberLopp = (64 - 1);
    for(; iLoop < iNumberLopp; iLoop++){
       tmp |= num & 1; // putting the set bits of num
       num >>= 1; //shift the tmp Right side
       tmp <<= 1;  //shift the tmp left side
    }
    return tmp;
}

uint64_t eotBCHencode(uint64_t arg0){
	uint64_t messageData = arg0;
	uint64_t gx = 0xf059e00000000000;
	uint64_t packet = messageData;
	uint64_t shiftMask = 0x8000000000000000;
	uint8_t shiftAmt = 0;
	uint64_t xorMask = 0x03bb500000000000;
	while(shiftAmt < 45){
		packet = packet ^ gx;
		while((packet & shiftMask) == 0){
			packet = packet << 1;
			shiftAmt++;
		}
	}
	packet = packet >> 3;
	packet = packet ^ xorMask;
	///reverse BCH code///
	packet = reverseBits(packet);
	///Append BCH to message LSB first
	messageData = messageData | (packet>>1);
	return messageData;
}

uint64_t hotBCHencode(uint64_t arg0){
	uint64_t messageData = arg0;
	uint64_t gx = 0xf059e00000000000;
	uint64_t packet = messageData;
	uint64_t shiftMask = 0x8000000000000000;
	uint8_t shiftAmt = 0;
	uint64_t xorMask = 0x03bb500000000000;
	while(shiftAmt < 45){
		packet = packet ^ gx;
		while((packet & shiftMask) == 0){
			packet = packet << 1;
			shiftAmt++;
		}
	}
	packet = packet >> 3;
	packet = packet ^ xorMask;
	///reverse BCH code///
	packet = reverseBits(packet);
	///Append BCH to message LSB first
	messageData = messageData | (packet>>1);
	return messageData;
}

uint8_t messageCompareEOT(uint64_t arg0){
	uint64_t messageData = (arg0 & 0xfffffffffff00000);
	messageData = eotBCHencode(messageData);
	if(messageData == arg0){
		return 1;
	}else{
		return 0;
	}
}

uint8_t messageCompareHOT(uint64_t arg0){
	uint64_t messageData = (arg0 & 0xffffffff00000000);
	messageData = hotBCHencode(messageData);
	if(messageData == arg0){
		return 1;
	}else{
		return 0;
	}
}

void createMessage(uint64_t arg0){
	assignBuffer[7] = arg0;
	assignBuffer[6] = (arg0 >> 8);
	assignBuffer[5] = (arg0 >> 16);
	assignBuffer[4] = (arg0 >> 24);
	assignBuffer[3] = (arg0 >> 32);
	assignBuffer[2] = (arg0 >> 40);
	assignBuffer[1] = (arg0 >> 48);
	assignBuffer[0] = (arg0 >> 56);
}

void createBCHint(void){
	bchMessageint = 0;

	bchMessageint = bchMessageint + assignBuffer[0];
	bchMessageint = (bchMessageint << 8) + assignBuffer[1];
	bchMessageint = (bchMessageint << 8) + assignBuffer[2];
	bchMessageint = (bchMessageint << 8) + assignBuffer[3];
	bchMessageint = (bchMessageint << 8) + assignBuffer[4];
	bchMessageint = (bchMessageint << 8) + assignBuffer[5];
	bchMessageint = (bchMessageint << 8) + assignBuffer[6];
	bchMessageint = (bchMessageint << 8) + assignBuffer[7];

}

