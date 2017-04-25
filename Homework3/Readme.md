# Homework 3 : Agent based Simulation Assignment 

Request an additional day to complete this assignment.  I'll turn in all files on Wednesday 4-26-2017.

Part 1.  

The agent based simultion portion of the assignment.  In this portion of the assignment I added functions for seek, FindDeriv, flee, Arrival, Departure, Wander,
Avoid, Separation, Alignment, Cohesion, Flocking, and Leader.  For each of these functions I followed the directions provided either in the comments in the 
code or based on the instructions provided in webcourses.  The logic I applied to define the seek function was to calculate the desired velocity (vd) based on 
the target minus the current position.  Theta d was calculated based on the arctangent of the vectors dy and dx.  The flee function called exactly the same methods
only Theta D was modified to include Pi.  This resulted in a 180 degree reversal of the current tragectory.  Arrival is similar to seek, however the velocity of the agent 
is modified as the agent approaches the goal.  In order to achieve this behavior vd equals the absolute value of Vd or the lenght of the goal minus the current position.
For the departure function, I implemented a check so once the agent exceeded a the radius of KDeparture the agent slowed its pace.  In the wander function I multiplied
the Kwander function to the Knoise function and then multiplied it by distance over radius.  By using this approach I reduced the amount of variable behavior exibited by 
the agents as they wandered away from the goal.  In the avoidance function I created a for loop to iterate through all of the environmental obstacles.  I implemented two 
"Radar" functions to identify near and far obstacles.  Within the for loop I implemented an if statement to adjust the trajectory of the agent if an obstacle was detected.
In the separation functional block I wanted to fix the existing distance between the agents.  This way they wouldn't get any closer as they approached the goal.  To perform
this action I created a for loop that would iterate through the quantity of agents present in the simulation.  For each agent I calculated the distance between each agent
and the goal position.  I then defined the variable tmpsum to calculate the amount of separation between each agent using the Kseparate function while each agent 
moved towards the goal.  In the alignment function, I created a for loop to calcualte the number of agents in the simulation.  Within the for loop I calculated the average
rate of travel for each agent and adjusted the rate across all of the agents.  Also I calculated the desired orientation for the agent to reach the goal.  The formula for
cohesion is very similar to the code written for alignment.  However in cohesion I programmed the agents to constantly reduce the distance between each of the agents 
as they all moved towards the goal.  I then adjusted the desired velocity and desired orientation within the for loop as well.  Once all of the previous functions were defined
the programming associated with flocking and leader following were simple to implement, based on the instructions posted on webcourses.  Both, Constant (static Variables
defined in the code and in the console) and Vectors for seperate, align, and cohesion were multiplied together for flocking.  The same methodology was applied to defining
leader following.  However, the variables for this function were seperate and arrival.  This researcher found that the alignment function produced a more desired behavior than
the separate function.  I would recommend updating this function to use align.


Part 2 Simulating Pedestrian flow.

for this portion of the assignment I searched and found the floor plan for partnership II second floor.  This simulates a regular office environment
I modeled the floor plan for the second floor in Anylogic.  In the model I created 4 agent types Instructional Designers, Researcher, Producers, and Graphic Artist.  
My objective for this simulation was to define normal pedestrian traffic flow for this floor.  Once the traffic flow was correctly simulated, the objective
was to identify any choke points on the floor based on the quantity of personnel on the floor and the average dwell times associated with the agent types
and collect statistics associated with the identified choke points as well as the entry rate of the pedestrians onto the floor.  By collecting statistics on the
quantity of agents currently occupying the floor as well as the statistics associated with the possible choke point, one can identify the point where the 
choke point starts to emerge on the floor, based on number of personnel entering and exiting the floor.  All four agent types had different interarrival rates, 
dwell point within the building and duration of time the agent dwelled.  While there were only two  entrance and exit points in the building, 
these entry and exit points were varied as well based on nearest entry and exit point related to the dwell point  for each agent type.  The Instructional Designer agent type 
entered the facility using the front entrance at a rate of 70 personnel per hour.  The dwell location for the pedestrian is  the Instructional Development room.  Once in the 
room the dwell time of a uniform distribution of 5.0, 10.0 was applied.  After the dwell time expired the agent exited the simulation through the rear entrance.  
The researcher agent type entered the facility using the front entrance at a rate of 75 personnel per hour.  The dwell location for the pedestrian is  the research 
work area.  Once in the room a dwell time of  5.0, 10.0 based on a uniform distribution was applied.  After the dwell time expired the researcher agent exited the 
simulation through the front entrance. The producer agent type entered the facility using the rear entrance  at a rate of 80 personnel per hour.  The dwell location for the
pedestrian is  production studio.  Once in the studio the dwell time of  8.5, 15.0 based on a uniform distribution was applied.  After the dwell time expired the agent exited the simulation through
the rear entrance. The graphic artist agent type entered the facility using the rear entrance at a rate of 90 personnel per hour.  The dwell location for the
graphic artists is  CDL Graphics room.  Once in the room the dwell time of  9.5, 13.0 based on a uniform distribution was applied.  After the dwell time expired the agent exited the simulation through
the rear entrance.  Based upon a all variables defined, after a period of 16 hours traffic in the Main hallway exceeds the number of personnel in each of the rooms 
causing a choke point in the building.   There were 156 people walking in the Main Hallway during over the hour.  While on

Part 3 Anylogic Maze
### Part 2: Behaviors
In this part of the assignment you will need to implement 6 types of individual behaviors and 5 types of group behaviors. 
**(a)** : Create the following behaviors through appropriate computation of V<sub> d</sub>  and θ<sub>d</sub>  commands:
* Seek
* Flee
* Arrival
* Departure
* Wander
* Obstacle Avoidance

**(b)**: Implement the functions for the following group behaviors: 