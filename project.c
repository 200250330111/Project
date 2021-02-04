#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<time.h>
#include "client.c"

int Temperature_ControlSystem();
int Temperature_Thrusters();
int Acceleration_Rocket();
int Gyro_Rocket();

struct packetData
{
    u_int8_t packetId;
    time_t packetNumber;
    u_int16_t data;
    time_t timeStamp;
};

int main(int argc, char const *argv[])
{
    int t1,t2,a,g;
    do
    {
        t1=Temperature_ControlSystem();
        t2=Temperature_Thrusters();
        a=Acceleration_Rocket();
        g=Gyro_Rocket();
    } while (1);
    
    
    return 0;
}
int Temperature_ControlSystem(){
    int x; 
     x = (rand() %(300 - 30+1) + 30);

    if (x>30 && x<300)
    {
        return x;
    }
    else{
        printf("Range Beyond\n ")
    }   
}
int Temperature_Thrusters(){
    int x; 
     x = (rand() %(100 -(-100-1) -100));

    if (x>-100 && x<100)
    {
        return x;
    }
    
}
int Acceleration_Rocket(){
    int x; 
     x = (rand() %(20 - 2+1) + 2);

    if (x>2&& x<20)
    {
        return x;
    }
}
int Gyro_Rocket(){
    int x; 
     x = (rand() %360);

    if (x>30 && x<300)
    {
        return x;
    }
    
}


