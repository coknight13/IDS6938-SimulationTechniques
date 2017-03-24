#include <iostream>
#include <functional>   
#include <numeric>  
#include <map>
#include "markov.h"

int main(){
  //SIMULATE DISCRETE TIME MARKOV CHAIN
  std::vector< std::vector<double> > matrix(3,std::vector<double> (3)); //initializes a 3x3 matrix with zeros

  //set transition matrix
<<<<<<< HEAD
  matrix[0][0] = .5;
  matrix[0][1] = .5;
=======
  matrix[0][1] = 1;
>>>>>>> 851056092e8f9d57fee634149c911d4cc0bbfbf9
  matrix[1][2] = 1;
  matrix[2][0] = 1;

  int steps = 10;
  int start = 0;
  double T = 8.5;
  
  //simulate discrete time Markov Chain
<<<<<<< HEAD
  unsigned int N = 100000;
  std::map<int, int> hist;
  std::vector<int> discreteMC;
  for (unsigned int i = 0; i < N; ++i){
	 discreteMC = DTMC(matrix, steps, start);
	  ++hist[std::round(discreteMC.back())];
  }
=======
  //unsigned int N = 100000;
  //std::map<int, int> hist;
  std::vector<int> discreteMC;
  //for (unsigned int i = 0; i < N; ++i){
	 discreteMC = DTMC(matrix, steps, start);
//	  ++hist[std::round(discreteMC.back())];
//  }
>>>>>>> 851056092e8f9d57fee634149c911d4cc0bbfbf9
  //Returns an array with the states at each step of the discrete-time Markov Chain
  //The number of transitions is given by steps. The initial state is given by start 
  //(the states are indexed from 0 to n-1 where n is the number of arrays in transMatrix).

  for (auto elem : discreteMC)
	  std::cout << elem << std::endl;

  std::cout  << std::endl;

<<<<<<< HEAD
  for (auto p : hist)
	  std::cout << p.first << "\t" << p.second << std::endl;
=======
//  for (auto p : hist)
//	  std::cout << p.first << "\t" << p.second << std::endl;
>>>>>>> 851056092e8f9d57fee634149c911d4cc0bbfbf9


   std::cout<<std::endl << "End State is: " << discreteMC.back() << std::endl << std::endl;





  return 0;
}