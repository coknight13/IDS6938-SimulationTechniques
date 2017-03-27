int size = 10;  //TODO
Eigen::MatrixXf TransitionMatrix(size, size);
Eigen::VectorXf v(size);

unsigned int ROLLS = 1; //TODO

double prob = 1.0/6.0;  //TODO




void SetTransitionMatrix()
{
	TransitionMatrix.setZero();
	
	//TODO

	
	//TransitionMatrix(0.0,1.0) = 6.0;

	for (int i = 0; i < TransitionMatrix.rows() - 6; i++)
	{
		
		TransitionMatrix(i, i) = 0;
		TransitionMatrix(i, i + 1) = prob;
		TransitionMatrix(i, i + 2) = prob;
		TransitionMatrix(i, i + 3) = prob;
		TransitionMatrix(i, i + 4) = prob;
		TransitionMatrix(i, i + 5) = prob;
		TransitionMatrix(i, i + 6) = prob;
	}

	TransitionMatrix(4, 5) = prob;
	TransitionMatrix(4, 6) = prob;
	TransitionMatrix(4, 7) = prob;
	TransitionMatrix(4, 8) = prob;
	TransitionMatrix(4, 9) = prob + prob;
	TransitionMatrix(5, 6) = prob;
	TransitionMatrix(5, 7) = prob;
	TransitionMatrix(5, 8) = prob;
	TransitionMatrix(5, 9) = prob + prob;
	TransitionMatrix(6, 7) = prob;
	TransitionMatrix(6, 8) = prob;
	TransitionMatrix(6, 9) = prob + prob + prob;
	TransitionMatrix(7, 8) = prob;
	TransitionMatrix(7, 9) = prob + prob + prob + prob;
	TransitionMatrix(8, 9) = prob + prob + prob + prob + prob;
	TransitionMatrix(9, 9) = 1;
	std::cout << TransitionMatrix << std::endl;


}