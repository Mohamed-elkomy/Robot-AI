#define VOLT_HIGH 5
#define VOLT_LOW 0
#define MOVE_90 7
#define MOVE_180 10
#define set_bit(x,y) (x|(1<<y))
typedef unsigned char robot_orders;
typedef unsigned int u32;
typedef unsigned long long u64;
//Delay Function


//ARM Joints
struct ARM {
    int volt;
    struct ARM *next_joint;
};



// LEG Joints
struct LEG {
    int volt;
    struct LEG *next_joint;
};



//THE LEG
struct FULL_LEG {
struct LEG waist_end;
struct LEG knee;
struct LEG foot;
}LEFT_LEG,RIGHT_LEG;

//THE ARM
struct FULL_ARM {
struct ARM shoulder;
struct ARM elbow;
struct ARM wrist;
struct ARM finger;
}LEFT_ARM,RIGHT_ARM;


//ARM Enabled
struct ARM_Motor{
    struct FULL_ARM *EN_ARM;
}EN_Right_ARM,EN_Left_ARM;


//LEG Enabled
struct Leg_Motor{
    struct FULL_LEG *EN_Leg;
}EN_Right_Leg,EN_Left_Leg;

//Brain
struct controller{
struct ARM_Motor *right_arm;
struct ARM_Motor *left_arm;
struct Leg_Motor *right_leg;
struct Leg_Motor *left_leg;
}Right_Brain_Cell;



//ProtoTypes

Robot_Init();
Robot_Electricity_ON();
Robot_Movement();
Search(char Search_Algorithm[]);
delay_one(u64 x);
