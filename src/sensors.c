#include <kipr/wombat.h>
#include "constants.h"

int analog_average(int port, int readings)
{
    int total;
    int i;
    for (i=0; i<readings;i++)
    {
        total = total+analog(port);
    }
    printf("%d\n", total/readings);
    return total/readings;
}
    

void forward_to_black(int speed, int port)
{
    create_drive_straight(speed);
    
    while (analog(port) < BLACK)
    {
    }
    create_drive_straight(0);
}

void CCW_to_black(int speed, int port)
{
    create_spin_CCW(speed);
    
    while (analog(port) < BLACK)
    {
    }
    create_drive_straight(0);
}

void CW_to_black(int speed, int port)
{
    create_spin_CW(speed);
    
    while (analog(port) < BLACK)
    {
    }
    create_drive_straight(0);
}

void back_to_black(int speed, int port)
{
    create_drive_straight(-speed);
    
    while (analog(port) < BLACK)
    {
    }
    create_drive_straight(0);
}


void line_follow_to_black(int speed)
{
    while ( (analog(LEFT_LINE) < BLACK) || (analog(RIGHT_LINE) < BLACK) )
    {
        if (analog(LEFT_LINE) > BLACK)
        {
            create_drive_direct(speed-25, speed+25);
        }
        else if (analog(RIGHT_LINE) > BLACK)
        {
            create_drive_direct(speed+25, speed-25);
        }
        else
        {
            create_drive_direct(speed, speed);
        }
    }
    create_drive_direct(0,0);
}


void drive_to_bump(int speed)
{
    create_drive_straight(speed);
    while ( get_create_lbump() == 0 && get_create_rbump()==0 )
    {
    }
    create_drive_straight(0);
}
/*
void left_to_black(int speed, int port)
{
    mav(LM, -speed);
    mav(RM, speed);
    
    while (analog(port) < BLACK)
    {
    }
    mav(LM, 0);
    mav(RM, 0);
}


void right_to_black(int speed, int port)
{
    mav(LM, speed);
    mav(RM, -speed);
    
    while (analog(port) < BLACK)
    {
    }
    mav(LM, 0);
    mav(RM, 0);
}
*/
void forward_for_black(int speed, int port, int amount)
{
    int i;
    for(i = 0; i < amount; i++)
    {
        create_drive_straight(speed);
    
    	while (analog(port) < BLACK)
    	{
    	}
        while (analog(port) >= BLACK)
    	{
    	}
        if(i != amount - 1)
        {
        	msleep(500);
        }
    }
    create_drive_straight(0);
}
/*
void drive_botgal()
{
    int i;
    for(i = 0; i < 2; i++)
    {
        create_drive_straight(300);
    
    	while (analog(LEFT_LINE) < BLACK)
    	{
			if(get_servo_position(AM) < ARM_UP)
            {
                set_servo_position(AM,get_servo_position(AM) + 7);
            }
            if(get_servo_position(EM) < ELBOW_BOTGAL)
            {
                set_servo_position(EM,get_servo_position(EM) + 7);
            }
    	}
        while (analog(LEFT_LINE) >= BLACK)
    	{
    	}
        if(i != 1)
        {
        	msleep(200);
        }
    }
    create_drive_straight(0);
}*/
    