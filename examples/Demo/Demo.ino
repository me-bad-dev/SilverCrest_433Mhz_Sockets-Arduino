#include <SilverCrest_Sockets.h>

int transmitterPin = 5;
SilverCrest_Sockets scRemote(transmitterPin);

void setup()
{

}

void loop()
{
	delay(2000);
	scRemote.SendCode_A_ON();
	delay(2000);
	scRemote.SendCode_B_ON();
	delay(2000);
	scRemote.SendCode_C_ON();
	delay(2000);
	scRemote.SendCode_D_ON();
	delay(2000);

	scRemote.SendCode_A_OFF();
	delay(2000);
	scRemote.SendCode_B_OFF();
	delay(2000);
	scRemote.SendCode_C_OFF();
	delay(2000);
	scRemote.SendCode_D_OFF();
	delay(2000);

	scRemote.SendCode_M_ON();
	delay(2000);
	scRemote.SendCode_M_OFF();
}
