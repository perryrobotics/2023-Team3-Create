int analog_average(int port, int readings);
void forward_to_black(int speed, int port);
void back_to_black(int speed, int port);
//void left_to_black(int speed, int port);
//void right_to_black(int speed, int port);
void forward_for_black(int speed, int port, int amount);
void drive_botgal();
void drive_to_bump(int speed);

void CCW_to_black(int speed, int port);
void CW_to_black(int speed, int port);
    
void line_follow_to_black(int speed);