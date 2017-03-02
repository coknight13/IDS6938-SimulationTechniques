# IDS6938-SimulationTechniques
Official website for IDS6938 Simulation Techniques

Homework Part 1

Question 1 Plot of RK values

The path to each of the charts required for question 1 can be found based on the paths below.

IDS6938-SimulationTechniques\Lecture6-Solution\project\Question_1_C_RK1_RK2_RK4.jpg
IDS6938-SimulationTechniques\Lecture6-Solution\project\Question_1_D_Error_Plot_Chart.jpg
IDS6938-SimulationTechniques\Lecture6-Solution\project\Varying_Step_Sizes_.5_1.0_2.0.jpg

(1.f)
(1) Describe how varying the integration method changes the accuracy. 
Varying the intgration method used to calculate the Initial Value Problem (IVP) produces results with differing levels of accuracy based on the chosen method.  The Euler method's 
level of accuracy decreases significantly as the X value assoicated with the problem increases over time.  The Midpoint method decreases the amount of error associated with
the Euler method by reducing the time between measurements.  The increase in measurements reduces the decay in result accuracy.  By utilizing the RK4 method, the highest
level of accuracy associated with the IVP is realized.  This methodology combines Euler, Midpoint, and additional measurement point to significantly reduce the error and 
decay in accuracy as realized in the previous methods.  As observed in the results of this exercise, initially all three methods started with relatively similiar results.  However as 
X increased to 2.1 significant differences can be seen between the 3 methods Euler had the worst metrics at -1.7 with a 30% error as the Midpoint achieved -2.1 with a reasonable 
error term of 14%.  However the most accurate results came from RK4 with a result of -2.5 with an error term of 13%.  As X increases overtime the RK4 method continues to stay
aligned with the exact value.

(2) What happens as you increase the x value to the accuracy. 
There is a decay in the accuracy of the results produced from each method as the X value increases.  By reviewing the error term we can see the error percentage increas over
time for each method.  As X increased from 0 to 3 the error term for each method increased as well.  The error tem associated with the Euler method increased from 1% to 5%, while 
the Midpoint and RK4 methods increased from 1% to 8%.

(3) How does varying the step size effect the accuracy. 
By decreasing the step size between measurements, a more accurate result set is identified.  As described above the RK4 method demonstrates a higher level of accuracy as compared
with the Euler and Midpoint methods. 

(4) Which method is the most accurate and why (in particular explain what is taken to account in the solution).
The most accurate method is the RK4 approach.  The RK4 Method incorporates Euler, Midpoint, and additional measurement point to significantly reduce the error and 
decay in accuracy as realized in the previous methods.  This approach takes measurements at the full, half, third, and sixth of a step.  This level of accuracy allows for changes in vector 
direction to be identified faster than the Euler, and Midpoint methods which in turn produce more accurate results.

Part 3: Written Questions (10 pts).

What is the effect of the Ks and Kd parameters on the jello?
Both the Ks and Kd parameters adjust the internal forces associated with the integrity of the Jello Cube.  The Ks parameter adjusts the structural strength of the Jello Cube.
This value will adjust how much "give" is associated with the structural springs.  If these values are adjusted to high, the stress will be to great and the Jello Cube will destabilize.
If the values are too low the structural integrity of the Cube will nto be maintained and it will collapse on itself.  Kd, adjusts the internal dampening forces of the Jello Cube.
These forces are applied to reduce the shock applied across the cube when it makes contact with another object.

What are the benefits and the drawbacks of the collision system used here? What are some different ways in which it could be improved? .
The benefit of the collision system is a variety of parameters can be adjusted to "tune" the system to respond to a variety of variables.  This approach allows for internal forces associated
with the Jello Cube to be adjusted.  However the drawback of the collision system is each parameter can be adjusted to a point where it has a negative impact on another
"tuned" force.  

What are some example systems you could model with Mass-spring simulations? Explain how you would you construct the model.

An example system that can be modeled using a Mass-spring simulation is a missile container radio antenna.  The antenna has sensitive components housed above the spring.
the contents of the antenna would be modeled as a solid structure supported by a pole mounted on a spring hinge.  As the antenna makes contact with other objects (trees, ect.)
The force applied to the components within the solid housing can be measured.  Maximum impact tolerances before component failure can be identified using this method.  

Does the jello behave realistically? What integration method did you choose to make the Jello stable?
I chose the RK4 method to stabilize the Jello cube.  This method provided a high h sample rate which allowed for an increased amount of structural impact calculations.  These
additional calculations allowed the Cube to maintain it's stability through multiple simulations.

How would you model and simulate water (in terms of a continuous simulation)?

Water would be modeled using a 1 x 1 wire mesh.  The particles on the wire mesh would have multiple bend and structural springs between them.  The Ks assocated with the
water structure would be low and the Kd would be high.  The Ks is low as there isn't a structure to maintain as water is formless.  The Kd is high as the impact that external objects
have with the water is immediately dampened upon contact.

Extra Credit 

I Created an interaction with the Sphere. and I've posted a video of my project file to Youtube.  You can access the video by using the following URL.

https://youtu.be/8NPwLkph1V8

