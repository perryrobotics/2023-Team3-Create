#include "movement.h"
#include <kipr/botball.h>
#include "constants.h"
#include "sensors.h"

int main()
{
    //This is a strictly Anti-Shaurya Patel/uAstin in Dewitt Perry Robotics team 4 area.

    create_connect();
    printf("Connected \n v1.2.1 \n SHAURYA PATEL WHAT HAPPENED?");
    create_full();

	set_servo_position(AM, ARM_UP);
    set_servo_position(EM, ELBOW_UP);
    set_servo_position(CM, CLAW_OPEN);
    msleep(3000);
    //wait_for_light(LIGHT);
    enable_servos();  // THIS MUST BE AFTER THE WAIT FOR LIGHT
    shut_down_in(119);
	set_servo_position(AM, ARM_UP);
    set_servo_position(EM, ELBOW_UP);
    set_servo_position(CM, CLAW_OPEN);
    
    
    //drive_botgal();
    CW(200,45);
    back_to_black(200, LEFT_LINE);
    backward(200,350);
    CW(200,45);
    back_to_black(200, RIGHT_LINE);// HIT CENTER LINE
    forward(200, 50);
    CCW(200, 117);
    set_servo_position(EM, ELBOW_BOTGAL);
    msleep(1000);
    backward(200, 200);
    set_servo_position(CM, CLAW_CLOSE);
    msleep(700);
    set_servo_position(EM, ELBOW_UP);
    msleep(500);
    forward_to_bump(250);
    msleep(500);
    backward(200, 50);
    msleep(1000);
    CCW(175, 110);
    msleep(1000);
    set_servo_position(AM, ARM_DOWN);
    msleep(1000);
    set_servo_position(CM, CLAW_OPEN);
    msleep(1000);
    /*
    forward(200,100);
    CCW(200,130);
    backward(200,380);
    forward(200, 100);
    set_servo_position(CM, CLAW_BOTGAL);
    msleep(1000);
    set_servo_position(AM, ARM_BACK);
    forward(200, 500);
    CCW(200,140);
    move_servo_slowly(AM, ARM_DOWN);
	//set_servo_position(AM, ARM_DOWN);
    msleep(750);
	set_servo_position(CM, CLAW_OPEN);
    msleep(750);
    
*/
    create_disconnect();
    return 0;
}
