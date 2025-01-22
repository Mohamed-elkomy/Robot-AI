# 4.Robot-AI
Robot Control Program
This program is designed to control a robotic system with various joints, including arms and legs. It provides the following functionalities:

Robot Initialization (Robot_Init()): Initializes the robot by setting joint voltages to a low level and establishing joint connections.

Robot Electricity ON (Robot_Electricity_ON()): Allows the user to enable specific parts of the robot (arms and legs) based on user input. The function utilizes a search algorithm (Search()) to interpret user commands.

Search Algorithm (Search()): Interprets user input and enables the specified robot part if the input matches predefined patterns.

Robot Movement (Robot_Movement()): Allows the user to select and move specific robot parts (arms and legs) by adjusting the voltage levels of the corresponding joints.

Delay Function (delay_one()): Provides a custom delay function for introducing delays in the program.

How to Use
Compile the code using a C compiler.

Run the compiled executable.

Follow the on-screen prompts to initialize the robot, enable specific parts, and control its movement.

Usage Examples
To enable the right arm, you can use the command "ERA."

To move the left leg 90 degrees, select option 4 and follow the instructions.

To exit the program, choose option 2 during the "Electricity ON" phase.

Author
[Mohamed Magdy Mohamed Elkomy]

License
This code is provided under the [MIT License] license. See the LICENSE file for details.

Feel free to customize this README file with additional information and licensing details as needed.