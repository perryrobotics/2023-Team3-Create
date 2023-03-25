#include "movement.h"
#include <kipr/wombat.h>
#include "constants.h"
#include "sensors.h"

int main()
{
    //This is a strictly Anti-Shaurya Patel in Dewitt Perry Robotics team 4 area.

    create_connect();
    printf("Connected \n \bbeta idk anymore\n SHAURYA PATEL WHAT HAPPENED?");
    create_full();
    //wait_for_light(PORT);
	enable_servos();
    //Knock ring stand
    motor(RM,100);
    msleep(1000);
    //Reset pos
    motor(RM,0);
    //Setup for botgal
	set_servo_position(AM, ARM_UP);
    set_servo_position(EM, ELBOW_UP);
    set_servo_position(CM, CLAW_OPEN);  
	CW(200, 30);
    //Driving across the line
    backward(200, 500);
    CW(200,40);

    msleep(750);
	back_to_black(200, RIGHT_LINE);
    msleep(750);
    //Getting the arm and stuff up to botgal
    set_servo_position(AM, ARM_BOTGAL);
    set_servo_position(EM, ELBOW_BOTGAL);
    set_servo_position(CM, CLAW_OPEN);
    CCW(150,85);
    backward(200,400);
    forward(200,30);
    msleep(500);
    //GRABING HER
    set_servo_position(CM, CLAW_BOTGAL);
    msleep(1000);
    //Pick her up
    set_servo_position(EM, ELBOW_UP);
    msleep(1000);
    //Drive to edge
    forward_to_bump(200);
    //Turn to dropoff station
    CCW(150,110);
    //set her down
    move_servo_slowly(AM, ARM_DOWN, 15);
    msleep(1100);
    set_servo_position(CM, CLAW_OPEN);
    msleep(1000);
    set_servo_position(AM, ARM_BOTGAL);
    //Getting in position for yellow cube 1
    set_servo_position(EM, ELBOW_BOTGAL-130);
    set_servo_position(CM, CLAW_OPEN);
    //Turning to it
    CW(150,60);
    //Driving
    backward(200,540);
	CW(150,30);
    backward(200,300);
    msleep(1000);
    //GRABBING CUBE NUM 1
    set_servo_position(CM, CLAW_BOTGAL);
    msleep(1000);
    //picking it up
    set_servo_position(EM, ELBOW_UP);
    msleep(1000);
    //Turn to dropoff
    CCW(200,230);
    backward(200,300);
    msleep(1000);
    //Dropping off
    move_servo_slowly(AM, ARM_DOWN, 15);
    msleep(2500);
    set_servo_position(CM, CLAW_OPEN);
    msleep(1000);
    //Getting in pos for third
    set_servo_position(AM,0);
	msleep(3000);
    disable_servos();
    create_disconnect();
    return 0;
}
