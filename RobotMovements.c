#include <stdio.h>
#include <stdlib.h>
#include"RoboDef.h"

Robot_Movement(){
    int User_Pick;
    printf("Please choose something you wanna move :\n");
    printf("if You want to move the right ARM 90 Deg press 1 \n");
    printf("if you want to move the left ARM 90 Deg press 2 \n");
    printf("if you want to move the right LEG 90 Deg press 3 \n");
    printf("if you want to move the left LEG 90 Deg press 4 \n");
    printf("if You want to move the right ARM 180 Deg press 5 \n");
    printf("if you want to move the left ARM 180 Deg press 6 \n");
    printf("if you want to move the right LEG 180 Deg press 7 \n");
    printf("if you want to move the left LEG 180 Deg press 8 \n");
    scanf("%i",&User_Pick);
    if(User_Pick==1)
    {
        RIGHT_ARM.shoulder.volt = MOVE_90;
        printf("RIGHT Arm has moved .");
        delay_one(10000);
    }
    else if(User_Pick==2){
         LEFT_ARM.shoulder.volt = MOVE_90;
         printf("Left Arm has moved .");
         delay_one(10000);
    }
    else if(User_Pick==3){
            RIGHT_LEG.waist_end.volt = MOVE_90;
            printf("Right Leg has moved .");
            delay_one(10000);

    }
    else if(User_Pick==4){
            LEFT_LEG.waist_end.volt = MOVE_90;
            printf("Left Leg has moved .");
            delay_one(10000);

    }
    else if(User_Pick==5){
            RIGHT_ARM.shoulder.volt = MOVE_180;
            printf("RIGHT Arm has moved .");
            delay_one(10000);

    }
    else if(User_Pick==6){
            LEFT_ARM.shoulder.volt = MOVE_180;
         printf("Left Arm has moved .");
         delay_one(10000);

    }
    else if(User_Pick==7){
             RIGHT_LEG.waist_end.volt = MOVE_180;
            printf("Right Leg has moved .");
            delay_one(10000);

    }
    else if(User_Pick==8){
            LEFT_LEG.waist_end.volt = MOVE_180;
            printf("Right Leg has moved .");
            delay_one(10000);

    }
    else {
        printf("Movement Failed , Please Re-enter a suitable number .");
    }


}
