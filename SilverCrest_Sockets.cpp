#include <Arduino.h>
#include "SilverCrest_Sockets.h"

SilverCrest_Sockets::SilverCrest_Sockets(int _transmitterPin)
{
	transmitterPin = _transmitterPin;
	pinMode(transmitterPin, OUTPUT);
	digitalWrite(transmitterPin, LOW);
}

void SilverCrest_Sockets::SendCode(bool const _code[CodeSize], uint8_t _repeatTimes)
{
	for (int8_t _x = 0; _x < _repeatTimes; _x++)
	{
		digitalWrite(transmitterPin, HIGH);
		delayMicroseconds(288);
		digitalWrite(transmitterPin, LOW);
		delayMicroseconds(2232);
		for (int8_t _i = 0; _i < CodeSize; _i++)
		{
			if (_code[_i])
			{
				digitalWrite(transmitterPin, HIGH);
				delayMicroseconds(288);
				digitalWrite(transmitterPin, LOW);
				delayMicroseconds(1236);
			}
			else
			{
				digitalWrite(transmitterPin, HIGH);
				delayMicroseconds(1056);
				digitalWrite(transmitterPin, LOW);
				delayMicroseconds(468);
			}
		}
	}
	digitalWrite(transmitterPin, HIGH);
	delayMicroseconds(2952);
	digitalWrite(transmitterPin, LOW);
}

void SilverCrest_Sockets::SendCode_A_ON()
{
	SendCode(CODE_A_ON, 5);
}
void SilverCrest_Sockets::SendCode_B_ON()
{
	SendCode(CODE_B_ON, 5);
}
void SilverCrest_Sockets::SendCode_C_ON()
{
	SendCode(CODE_C_ON, 5);
}
void SilverCrest_Sockets::SendCode_D_ON()
{
	SendCode(CODE_D_ON, 5);
}
void SilverCrest_Sockets::SendCode_M_ON()
{
	SendCode(CODE_M_ON, 5);
}

void SilverCrest_Sockets::SendCode_A_OFF()
{
	SendCode(CODE_A_OFF, 5);
}
void SilverCrest_Sockets::SendCode_B_OFF()
{
	SendCode(CODE_B_OFF, 5);
}
void SilverCrest_Sockets::SendCode_C_OFF()
{
	SendCode(CODE_C_OFF, 5);
}
void SilverCrest_Sockets::SendCode_D_OFF()
{
	SendCode(CODE_D_OFF, 5);
}
void SilverCrest_Sockets::SendCode_M_OFF()
{
	SendCode(CODE_M_OFF, 5);
}

void SilverCrest_Sockets::SendCode_A_ON(uint8_t _repeatTimes)
{
	SendCode(CODE_A_ON, _repeatTimes);
}
void SilverCrest_Sockets::SendCode_B_ON(uint8_t _repeatTimes)
{
	SendCode(CODE_B_ON, _repeatTimes);
}
void SilverCrest_Sockets::SendCode_C_ON(uint8_t _repeatTimes)
{
	SendCode(CODE_C_ON, _repeatTimes);
}
void SilverCrest_Sockets::SendCode_D_ON(uint8_t _repeatTimes)
{
	SendCode(CODE_D_ON, _repeatTimes);
}
void SilverCrest_Sockets::SendCode_M_ON(uint8_t _repeatTimes)
{
	SendCode(CODE_M_ON, _repeatTimes);
}

void SilverCrest_Sockets::SendCode_A_OFF(uint8_t _repeatTimes)
{
	SendCode(CODE_A_OFF, _repeatTimes);
}
void SilverCrest_Sockets::SendCode_B_OFF(uint8_t _repeatTimes)
{
	SendCode(CODE_B_OFF, _repeatTimes);
}
void SilverCrest_Sockets::SendCode_C_OFF(uint8_t _repeatTimes)
{
	SendCode(CODE_C_OFF, _repeatTimes);
}
void SilverCrest_Sockets::SendCode_D_OFF(uint8_t _repeatTimes)
{
	SendCode(CODE_D_OFF, _repeatTimes);
}
void SilverCrest_Sockets::SendCode_M_OFF(uint8_t _repeatTimes)
{
	SendCode(CODE_M_OFF, _repeatTimes);
}

