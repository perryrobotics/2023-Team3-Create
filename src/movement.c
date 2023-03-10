#include "constants.h"
#include <kipr/botball.h>

void backward(int speed, int mm)
{
    set_create_distance(0);
	create_drive_straight(-speed);
	while(get_create_distance() > -mm)
    {
		//pass
		//msleep(25);
    }
 	create_drive_straight(0);
}


void forward(int speed, int mm)
{
    set_create_distance(0);
	create_drive_straight(speed);
	while(get_create_distance() < mm)
    {
		//pass
    }
 	create_drive_straight(0);
}

void forward_to_bump(int speed)
{

	create_drive_straight(speed);
	while(get_create_lbump()==0  && get_create_rbump()==0)
    {
		//pass
    }
 	create_drive_straight(0);
}

void CW(int speed, int angle)
{
    set_create_total_angle(0);
	create_spin_CW(speed);
	while(get_create_total_angle() >= -angle)
    {
		//pass
		msleep(25);
    }
 	create_spin_CW(0);
}

void CCW(int speed, int angle)
{
    set_create_total_angle(0);
	create_spin_CCW(speed);
	while(get_create_total_angle() < angle)
    {
		//pass
		//msleep(25);
    }
	create_spin_CCW(0);
}
  
void move_servo_slowly(int port, int end_pos)
	{
	int current_pos;

	current_pos = get_servo_position(port);

	if (current_pos < end_pos)
	{
		while (current_pos < end_pos)
		{
			current_pos += 7;
			set_servo_position(port, current_pos);
			msleep(.1);
		}
	}
	else
	{
		while (current_pos > end_pos)
		{
			current_pos -= 7;
			set_servo_position(port, current_pos);
			msleep(.1);
		}

	}
}
/*
void setup()
{
    set_servo_position(EM,ELBOW_SETUP);
    set_servo_position(AM,ARM_SETUP);
    set_servo_position(CM,CLAW_OPEN);
}
*/
