#ifndef SilverCrest_Sockets_h
#define SilverCrest_Sockets_h

#include <Arduino.h>



class SilverCrest_Sockets
{
	const static uint8_t CodeSize = 24;

	public:
		SilverCrest_Sockets(int _transmitterPin);

		void SendCode_A_ON();
		void SendCode_B_ON();
		void SendCode_C_ON();
		void SendCode_D_ON();
		void SendCode_M_ON();
		void SendCode_A_OFF();
		void SendCode_B_OFF();
		void SendCode_C_OFF();
		void SendCode_D_OFF();
		void SendCode_M_OFF();
		
		void SendCode_A_ON(uint8_t _repeatTimes);
		void SendCode_B_ON(uint8_t _repeatTimes);
		void SendCode_C_ON(uint8_t _repeatTimes);
		void SendCode_D_ON(uint8_t _repeatTimes);
		void SendCode_M_ON(uint8_t _repeatTimes);
		void SendCode_A_OFF(uint8_t _repeatTimes);
		void SendCode_B_OFF(uint8_t _repeatTimes);
		void SendCode_C_OFF(uint8_t _repeatTimes);
		void SendCode_D_OFF(uint8_t _repeatTimes);
		void SendCode_M_OFF(uint8_t _repeatTimes);
	
	private:
		uint8_t transmitterPin;

		void SendCode(bool const _code[CodeSize], uint8_t _repeatTimes);

		bool const CODE_A_ON  [CodeSize] = { 1,1,1,0,1,0,0,1,0,1,1,1,0,1,1,0,1,1,0,0,1,1,1,1 };
		bool const CODE_B_ON  [CodeSize] = { 1,1,1,0,1,0,0,1,0,1,1,1,0,1,1,0,1,1,0,0,1,0,1,1 };
		bool const CODE_C_ON  [CodeSize] = { 1,1,1,0,1,0,1,0,1,1,0,1,1,1,0,1,0,1,0,0,0,0,1,1 };
		bool const CODE_D_ON  [CodeSize] = { 1,1,1,0,1,1,0,1,1,1,1,0,0,0,0,1,0,1,0,1,1,1,0,1 };
		bool const CODE_M_ON  [CodeSize] = { 1,1,1,0,0,0,0,1,1,1,1,1,1,0,0,0,0,1,1,0,0,1,0,1 };
		bool const CODE_A_OFF [CodeSize] = { 1,1,1,0,0,1,1,1,0,1,0,1,1,0,0,1,1,1,0,1,1,1,1,1 };
		bool const CODE_B_OFF [CodeSize] = { 1,1,1,0,0,1,1,1,0,1,0,1,1,0,0,1,1,1,0,1,1,0,1,1 };
		bool const CODE_C_OFF [CodeSize] = { 1,1,1,0,0,0,1,0,0,0,0,1,1,1,0,0,1,1,1,0,0,0,1,1 };
		bool const CODE_D_OFF [CodeSize] = { 1,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,1,0,0,0,1,1,0,1 };
		bool const CODE_M_OFF [CodeSize] = { 1,1,1,0,1,0,0,1,0,1,1,1,0,1,1,0,1,1,0,0,0,1,0,1 };
};

#endif