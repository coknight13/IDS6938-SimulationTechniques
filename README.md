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
