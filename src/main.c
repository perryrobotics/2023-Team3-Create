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
    motor(0,100);
    msleep(1000);
    motor(0,0);
	set_servo_position(AM, ARM_UP);
    set_servo_position(EM, ELBOW_UP);
    set_servo_position(CM, CLAW_OPEN);
	    
	CW(200, 30);
    backward(200, 500);

    //CW_to_black(200, RIGHT_LINE);
    CW(200,40);

    msleep(750);
    //backward(200,400);   
	back_to_black(200, RIGHT_LINE);
    msleep(750);
    // positioning for botgal
    set_servo_position(AM, ARM_BOTGAL);
    set_servo_position(EM, ELBOW_BOTGAL);
    set_servo_position(CM, CLAW_OPEN);
    CCW(150,85);
    //CCW_to_black(200,RIGHT_LINE);
    //CW(100, 5);
    backward(200,400);
    forward(200,30);
    msleep(500);
    //knock ring stand
    
    
    set_servo_position(CM, CLAW_BOTGAL);
    msleep(1000);
    set_servo_position(EM, ELBOW_UP);
    msleep(1000);
    forward_to_bump(200);
    CCW(150,110);
    //set_servo_position(AM, ARM_DOWN);
    move_servo_slowly(AM, ARM_DOWN, 15);
    msleep(1100);
    set_servo_position(CM, CLAW_OPEN);
    msleep(1000);
    set_servo_position(AM, ARM_BOTGAL);
    set_servo_position(EM, ELBOW_BOTGAL-130);
    set_servo_position(CM, CLAW_OPEN);
    CW(150,60);
    backward(200,540);
	CW(150,30);
    backward(200,300);
    msleep(1000);
    set_servo_position(CM, CLAW_BOTGAL);
    msleep(1000);
    set_servo_position(EM, ELBOW_UP);
    msleep(1000);
    CCW(200,230);
    backward(200,300);
    msleep(1000);
    //set_servo_position(AM, ARM_DOWN);
    move_servo_slowly(AM, ARM_DOWN, 15);
    msleep(2500);
    set_servo_position(CM, CLAW_OPEN);
    msleep(1000);
    set_servo_position(AM,0);
	msleep(3000);
    disable_servos();
    /*
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
