# Homework 3 : Agent based Simulation Assignment 

Request an additional day to complete this assignment.  I'll turn in all files on Wednesday 4-26-2017.

Part 1.  

The agent based simultion portion of the assignment 

Part 2 Simulating Pedestrian flow.

for this portion of the assignment I searched and found the floor plan for partnership II second floor.  This simulates a regular office environment
I modeled the floor plan for the second floor in Anylogic.  In the model I created 4 agent types Pedestrian, Researcher, Producers, and Graphic Artist.  
All four agent types had different interarrival rates, dwell point within the building and duration of time the agent dwelled.  While there were only two 
entrance and exit points in the building, these entry and exit points were varied as well based on nearest entry and exit point related to the dwell point 
for each agent type.  The pedestrian agent type entered the facility using the front entrance with a uniform distribution of (.5,.7,.9).  The dwell location for the
pedestrian is  xxx room.  Once in the room the dwell time of xxx was applied.  After the dwell time expired the agent exited the simulation through
the front entrance.  The researcher agent type entered the facility using the front entrance with a uniform distribution of (.5,.7,.9).  The dwell location for the
pedestrian is  xxx room.  Once in the room the dwell time of xxx was applied.  After the dwell time expired the researcher agent exited the simulation through
the front entrance.The pedestrian agent type entered the facility using the front entrance with a uniform distribution of (.5,.7,.9).  The dwell location for the
pedestrian is  xxx room.  Once in the room the dwell time of xxx was applied.  After the dwell time expired the agent exited the simulation through
the front entrance.The pedestrian agent type entered the facility using the front entrance with a uniform distribution of (.5,.7,.9).  The dwell location for the
pedestrian is  xxx room.  Once in the room the dwell time of xxx was applied.  After the dwell time expired the agent exited the simulation through
the front entrance.

Challenge: Define normal pedestrian traffic flow for this floor.  Identify any choke points on the floor and collect statistics

Describe the problem to be solved. Why was a simulation model the right approach vs any other approach?  This approach used agent based simulation for three pedestrian types Instructional designers, graphic artists, researchers, and producers.  When all of these types are in the facility at the same time, the main hallway approaching the rear exit becomes a choke point.  

Solution:
Since the building is already constructed, rooms should be monitored to ensure max capacity is adjusted to account for th choke point.

What did you do? How did you build the model? What architecture /techniques / features did you use?

Results:

What benefits were delivered? What surprises or new insights were gained? What savings, improvements, or new strategies were enabled by this model?

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