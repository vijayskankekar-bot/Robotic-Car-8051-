#include <reg51.h>

sbit IN1 = P2^0;
sbit IN2 = P2^1;
sbit IN3 = P2^2;
sbit IN4 = P2^3;
sbit F = P2^4;
sbit REV = P2^5;
sbit R = P2^6;
sbit L = P2^7;

void delay()
{
	int i, j;
	for(i = 0; i < 255; i++)
	for(j = 0; j < 200; j++);
}

void main()
{
	while(1)
	{
		if(F==0)
		{
			//ALL Motors Clock Wise Rotate
			IN1 = 1;
			IN2 = 0;
			
			IN3 = 1;
			IN4 = 0;
		}
		else if(REV==0)
		{
			//ALL Motors Anti Clockwise Rotate
			IN1 = 0;
			IN2 = 1;
			
			IN3 = 0;
			IN4 = 1;
		}
		else if(R==0)
		{
			//Upper Two motors ClocK wise Rotate 
			IN1 = 1;
			IN2 = 0;
			
			//Lower Two Motors STOP
			IN3 = 0;
			IN4 = 0;
		}
		else if(L==0)
		{
			//Upper Two Motors Anti Clockwise Rotate
			IN1 = 0;
			IN2 = 1;
			
			//Lower Two Motors Stop
			IN3 = 0;
			IN4 = 0;
		}
		else
		{
			//All Motors Stop
			IN1 = 0;
			IN2 = 0;
			
			IN3 = 0;
			IN4 = 0;
		}
	}
}
