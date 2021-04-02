// DataStructurePractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Abdullah Mutaz Alshawa
//PID controller with Arduino for automatic braking system control system
//Copyright: http://bestengineeringprojects.com
//Thesis project
//Dr. Hossain
//3/29/2021
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <vector>
#include <algorithm>
#include <iostream>

//Functions used
void principle();
void calculateDistance();
void direction();
void close();

#define TRIGGER_PIN 10
#define ECHO_PIN 13
#define MAX_DISTANCE 400

//NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

float duration = 0,HIGH = 0;
double distance = 0;
char ssid[] = "yourNetwork";
//pinmode OUTPUT;

void setup()
{
    //Serial.begin(9600);
    //pinMode(TRIGGER_PIN, OUTPUT);
    //Use sockets to toggle radar sytem on and off
    //_WEB_SOCKET_ACTION.
}

void loop()
{
    //Sets the digital pin 13 on
    //digitalWrite(13, HIGH);
    //duration = sonar.ping();

    //Determine distance from duration
    //Use 343 meters per second as the speed of sound
    //
        distance = (duration / 2) * 0.0343;
    //
    /*catch (Exception e)
    {
        print(e.toString();
    }
    */
   

    //Send results to serial monitor
    //Serial.print("Distance");
}

int userInput()
{
    int choice;

    printf("Welcome to the radar system!");
    printf("====================\n");
    printf("(1) Move in the x-axis");
    printf("(2) Move in the y-axis");
    printf("(3) Move in the z-axis");
    printf("(4) Exit");
    printf("====================\n");

    printf("Enter your choice please\n");
    scanf_s("%d", &choice);

    return choice;
}

void printVector(std::vector<int> a)
{
    for (size_t i = 0; i < a.size(); i++)
    {
        std::cout << a[i] << " ";
    }

    std::cout << std::endl;
}

int main()
{
    //Initialize and declare variables
    int gd, popgm, x, y;
    //Initializing graphics mode
    //initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    principle();
    //distance();
    direction();
    close();
    int array[] = { 11, 17, 17, 19 };
    std::vector<int> v(array, array + 5);
    int* aptr;
    bool needToStop = false;
    bool isSensorActuatorConnected = false;
    bool isObjectInVehicleVincinity = false;
    bool isBluetoothOn = false;

    char a, b, c, * p;

    std::make_heap(v.begin(), v.end());
    std::cout << "max heap after pop : " << v.front() << '\n';

    //Assign 'A' to variable a
    a = 'A';
    //Set pointer p to address of a
    p = &a;
    //Assign variable b to the value addressed by pointer p
    b = *p;
    //Set pointer p to the address of c
    p = &c;
    //Assign the value addressed by pointer p to 'Z'
    *p = 'Z';

    printf("%c %c %c\n", a, b, c);

    //No need for an array
    aptr = &array[1];

    printf("Power state for the sensor actuator: ");
    if (isSensorActuatorConnected == false)
    {
        printf("the sensor actuator is off!\n");
    }
    else if(isSensorActuatorConnected == true)
    { 
        printf(" the sensor actuator is on!\n");
    }
    else
    {
        printf("Unknown sensor actuator state!");
    }
    printf("The element is %d\n", *aptr);

    //Select number for menu
    int sel = 1;
    do
    {
        sel = userInput();

        switch (sel)
        {
        case 1:
            printf("Moving in the x-axis\n");
            break;
        case 2:
            printf("Moving in the y-axis\n");
            break;
        case 3:
            printf("Moving in the z-axis\n");
            break;
        case 4:
            printf("Now exiting, thank you and goodbye!\n");
            return 0;
            break;
        case 0:
            break;
        };
    } while (userInput() >= 1 && userInput() <= 3);

    //Use the passive radar algorithm to detect objects
    //1. Using FM radar, satellites from TVs and more to detect nearby objects
    //2  Matlab may turn MatLab code into embedded C
    int detected = 0;

    //Return and exit
    printf("Now exiting the program, thank you and goodbye!");
    /*
    getchar();
    getchar();
    */
    //System("PAUSE");
    return(0);
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

 //   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

void principle()
{
    //TODO:
    //Declare and intialize variables
    int R, G, B;
    R = 0;
    G = 0;
    B = 0;
    int normalized = (R + G * 256 + B * 256 * 256) / (256 * 256 - 1);
    int in_meters = 1000 * normalized;
    /*
    Location location = new carla.location;

    for location in lidar_measurement:
    print(location);
    */

}

void calculateDistance()
{
    //TODO:
    int x = 0;
    int y = 0;

    int distance = x - y;
}

void direction()
{
    bool up = true;
}

void close()
{
    bool close = true;
}
