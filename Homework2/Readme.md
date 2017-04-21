Part 1: Empirical Tests of Randomness (20 pts)....

For the empirical test of randomness I used the Mtwister, minstd, knuth_b, ranlux48, and quasi random generators using a uniform distribution.  
In each use case I selected N values of 10,000, 50,000, and 100,000.  The random numbers produced based on my selected values identified significant 
differences in mean values.  To verify the differences I utilized Minitab 17 statistical software package to conduct a difference of means, ANOVA, Empirical
CDF, and Probability plot.  I conducted a 2 sample t Test to the compare the means of the Ranlux48 and the Knuth_b as these two random generators had 
the largest deviation to the mean of all generators that were utilized.  The results of the 2 sample t Test empirically validated that there is a significant 
difference in means between the 2 random number generators when using a uniform distribution for an N value of 100,000.   The same statistical analysis 
was performed at N values of 50,000 and 10,000.  While some variance in the mean was identified between the random number generators, the one way 
ANOVA performed on the randomly generated results did not empirically identify a significant difference between the means.  This result leads this 
researcher to the conclusion that the selection of a random number generator should be under greater scrutiny as it is applied to larger data sets.  The unit 
square plot of the random number generators identified a greater dispersal of points as the N value was decreased.  The same results was identified for the 
unit circle plots using polar coordinates.  A power point presentation was created to graphically depict the results of the statistical analysis.  The file 
is named Statistics  Two image files were created to disply the unit circle and square scatter plot results.  These files are called Circle plot and Scatter Plot.
All of these files can be located in Discrete2/Build/Results.  The raw and consolidated results files are located in the same 
directory in the 10000, 50000, 100000, and distributions directories.
The empirical test of randomness as it relates to distributions the Mtwister method was selected as the standard random number generator.  Weibull, 
Lognormal, Uniform, Chi_Squared, and Normal distributions where selected for the study.  To verify the differences I utilized Minitab 17 statistical software 
package to conduct a difference of means, ANOVA, Empirical CDF, and Probability plot.  As expected, the lognormal distribution produced a significantly 
different mean than all other distributions.  The variance of the mean was so significant that it was removed in some analysis to make comparisons of the 
means between the other distributions easier.  Once the lognormal distribution was removed from the dataset, the distribution with the greatest variance 
to the mean was the Weibull distribution.  

Part 2 - Snakes and Ladders (Discrete Event Markov Chains and Monte Carlo Simulations) (30 pts)

The results of the Snakes and Ladders simulation can be found in the snakesandladders/build directory.  
How often are the snakes and ladders used, how do the probability of finishing change, etc?  
Based upon the observed results the probability of finishing the game increases as the game progresses.  After plotting the probability of finishing the 
plot resembles an “S” curve where the probability increases significantly in the middle of the game and then tapers off at the end.

Think - 0pts: If these games are built entirely on chance, do they require any strategy? No there isn’t a strategy with Snakes and ladders.  This is a pure chance game.   Is it really a game, would you rather play games of chance or games of strategy?  I would rather play games of strategy that require thought versus a game of pure chance.  However, I believe similar techniques of chance are used in the gambling industry.  I have heard that experienced slots players will recognize the sequence of values and understand how close the machine is to paying out the player.

Part 3 - Discrete Event Simulation - Queue Simulation (30 pts)

The anylogic model developed for this portion of the project is called “Option B”.  This file is located in the queues directory at queues\Option B.

Part 4 - Implementing Extra Features (10 pts)
The two features on the extra features list that were implemented as a part of this homework assignment are identified below.  These two features are located within the Option B anylogic file.   
•	(10 Points) - Add a 2D visualization to AnyLogic for Part 3.
•	(10 Points) - Add a 3D visualization to AnyLogic for Part 3.

