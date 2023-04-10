#include "movement.h"
#include <kipr/wombat.h>
#include "constants.h"
#include "sensors.h"

int main()
{
    //KIALASH OBSESSED WITH DA TOYS

    create_connect();
    printf("Connected \n \b ''Aman's taking my toyssssssss'' - Kailash");
    create_full();
    wait_for_light(LIGHT);
    shut_down_in(119);
    //Knock ring stand
	motor(RM,100);
    msleep(750);
    //Reset pos
    //Setup for botgal
    enable_servos();
    motor(RM,-100);
	move_servo_slowly(AM, ARM_UP,5);
    move_servo_slowly(EM, ELBOW_UP,5);
    move_servo_slowly(CM, CLAW_OPEN,2);  
    
	CW(250, 30);
    //Driving across the line
    backward(550, 350);
    motor(RM,0);
    backward(550, 250);
    CW(100,30);

    msleep(150);
	back_to_black(450, LEFT_LINE);
    
    backward(450,50);
    msleep(150);
   
    
    //Getting the arm and stuff up to botgal
    move_servo_slowly(AM, ARM_BOTGAL,5);
    
    move_servo_slowly(EM, ELBOW_BOTGAL,5);
    move_servo_slowly(CM, CLAW_OPEN,1);
    CCW(150,95);
    backward(350,500);
    //forward(200,30);
    msleep(150);
    
    
    //GRABING HER
    set_servo_position(CM, CLAW_BOTGAL);
    msleep(1000);
    
    //Pick her up
    set_servo_position(EM, ELBOW_UP);
    msleep(9000);
    
    //Drive to edge
    forward_to_bump(200);
    backward(100,150);
    
    //Turn to dropoff station
    CCW(150,120);
    
    //set her down
    move_servo_slowly(AM, 2047, 5);
    msleep(500);
    set_servo_position(CM, CLAW_OPEN);
    msleep(700);
    move_servo_slowly(AM, ARM_BOTGAL,5);
    //Getting in position for yellow cube 1 (nice code) - samee
    set_servo_position(EM, ELBOW_BOTGAL-75);
    set_servo_position(CM, CLAW_OPEN);
    backward(100,100);
    //Turning to it
    CW(150,40);
    //Driving
    backward(300,500);
	CW(150,75);
    backward(300,500);
    msleep(1000);
    //GRABBING CUBE NUM 1
    set_servo_position(CM, CLAW_BOTGAL);
    msleep(1000);
    //picking it up
    set_servo_position(EM, ELBOW_UP);
    msleep(35000);
    forward(200,100);
    //Turn to dropoff
    forward(300,300);
    CCW(100,36);
    msleep(500);
    move_servo_slowly(AM, 0, 5);
    move_servo_slowly(EM,2047,5);
    msleep(500);
    move_servo_slowly(CM, CLAW_OPEN,5);
	msleep(500);
    move_servo_slowly(AM, 2047, 5);
    set_servo_position(EM, 1777);
    
    backward(200,300);
    msleep(3000);
    set_servo_position(CM, CLAW_BOTGAL);
    msleep(1000);
    msleep(1000);
    move_servo_slowly(AM, 000, 10);
    msleep(1000);
    forward(300,250);
    CW(30,5);
    move_servo_slowly(EM, 2040, 5);
    msleep(3000);
    //move_servo_slowly(CM, 760, 5);
    msleep(1000);
    
    
    
    //move_servo_slowly(EM,2047,5);

    /*
    CCW(200,230);
    backward(300,300);
    msleep(1000);
    //Dropping off
    move_servo_slowly(AM, ARM_DOWN, 5);
    msleep(2500);
    set_servo_position(CM, CLAW_OPEN);
    msleep(1000);
    //Getting in pos for third
    move_servo_slowly(AM,200,5);
	msleep(3000);
    CCW(200,40);
    forward(200,400);
    move_servo_slowly(CM, CLAW_CLOSE, 5);
	move_servo_slowly(AM,ARM_DOWN ,   5);
    msleep(1000);
    */
    
    
    disable_servos();
    create_disconnect();
    return 0;
}
