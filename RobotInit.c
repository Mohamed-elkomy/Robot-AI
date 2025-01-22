#include <stdio.h>
#include <stdlib.h>
#include "RoboDef.h"

Robot_Init(){
    //setting all volts with 0 to remove any un-needed data
    RIGHT_ARM.shoulder.volt = VOLT_LOW;
    RIGHT_ARM.elbow.volt = VOLT_LOW;
    RIGHT_ARM.wrist.volt = VOLT_LOW;
    RIGHT_ARM.finger.volt = VOLT_LOW;


    LEFT_ARM.shoulder.volt = VOLT_LOW;
    LEFT_ARM.elbow.volt = VOLT_LOW;
    LEFT_ARM.wrist.volt = VOLT_LOW;
    LEFT_ARM.finger.volt = VOLT_LOW;



    RIGHT_LEG.waist_end.volt= VOLT_LOW;
    RIGHT_LEG.knee.volt= VOLT_LOW;
    RIGHT_LEG.foot.volt= VOLT_LOW ;


    LEFT_LEG.waist_end.volt = VOLT_LOW;
    LEFT_LEG.knee.volt = VOLT_LOW;
    LEFT_LEG.foot.volt = VOLT_LOW;

    //Making the Linked Lists
    Right_Brain_Cell.right_arm = & EN_Right_ARM ;
    Right_Brain_Cell.left_arm = & EN_Left_ARM;
    EN_Right_ARM.EN_ARM=& RIGHT_ARM;
    EN_Left_ARM.EN_ARM=& LEFT_ARM;

    LEFT_ARM.shoulder.next_joint = & LEFT_ARM.elbow;
    LEFT_ARM.shoulder.next_joint->next_joint = & LEFT_ARM.wrist;
    LEFT_ARM.shoulder.next_joint->next_joint->next_joint = &LEFT_ARM.finger;

    RIGHT_ARM.shoulder.next_joint = &RIGHT_ARM.elbow;
    RIGHT_ARM.shoulder.next_joint->next_joint = &RIGHT_ARM.wrist;
    RIGHT_ARM.shoulder.next_joint->next_joint->next_joint = &RIGHT_ARM.finger;

    RIGHT_LEG.waist_end.next_joint = & RIGHT_LEG.knee;
    RIGHT_LEG.waist_end.next_joint->next_joint = & RIGHT_LEG.foot;

    LEFT_LEG.waist_end.next_joint = &LEFT_LEG.knee;
    LEFT_LEG.waist_end.next_joint->next_joint = &LEFT_LEG.foot;

    printf("Processing Robot ....");
    delay_one(10000);
    printf("\nRobot Brain Initialized :");
    delay_one(10000);
    printf("\nRobot Link Initialized :");
    delay_one(10000);
    printf("\nRobot is ready to be Ordered ....");
    delay_one(10000);
    printf("\nEntering the Enabling Phase ...\n");
    delay_one(10000);
    delay_one(10000);
    Robot_Electricity_ON();

}

Robot_Electricity_ON(){
    char Order[10];
    int user_pick;
    printf("Please Enter One to Enable a part of the robot , Two to Go Back :");
    scanf("%i",&user_pick);
    for(;;)
    {
    if(user_pick==1)
    {
        Search(Order);
    }
    else if(user_pick==2){
        break;
    }
    if(RIGHT_ARM.shoulder.volt == VOLT_HIGH && RIGHT_LEG.waist_end.volt== VOLT_HIGH && LEFT_LEG.waist_end.volt==VOLT_HIGH && LEFT_ARM.shoulder.volt == VOLT_HIGH){
        printf("\nThe Robot has been Enabled successfully .\n");
        break;
    }
    }
    printf(".....Process Ended .....");


}

Search(char Search_Algorithm[]){

    printf("\nPlease Order the controller To Enable a part :");
    scanf("%s",Search_Algorithm);
    if(Search_Algorithm[0]=='E' && Search_Algorithm[6]=='R' && Search_Algorithm[7]== 'A'){
            RIGHT_ARM.shoulder.volt=VOLT_HIGH;
            printf("\nRight Arm Enabled Successfully.\n");
    }
    else if( Search_Algorithm[0]=='E' && Search_Algorithm[6]=='R'  && Search_Algorithm[7]== 'L')
    {
        RIGHT_LEG.waist_end.volt=VOLT_HIGH;
        printf("\nLeft Leg Enabled Successfully. \n");
    }
    else if( Search_Algorithm[0]=='E' &&  Search_Algorithm[6]=='L'  && Search_Algorithm[7]== 'A')
    {
        LEFT_ARM.shoulder.volt=VOLT_HIGH;
        printf("\nLeft Arm Enabled Successfully.");
    }
    else if(Search_Algorithm[0]=='E'  && Search_Algorithm[6]=='L'  && Search_Algorithm[7]== 'L')
    {
        LEFT_LEG.waist_end.volt=VOLT_HIGH;
        printf("\nLeft Leg Enabled Successfully.");
    }
    else {
        printf("\nYou've Entered a Wrong Order , please Try Again with a suitable Order .");
    }
}
delay_one(u64 x){
    u64 i;
    u32 m;
    for(i=0;i<x*10000;i++)
    {
        set_bit(m,2);
    }

}
