int size = 101;  //TODO
Eigen::MatrixXf TransitionMatrix(size, size);
Eigen::MatrixXf GameMatrix(size, size);
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

	TransitionMatrix(95, 95) = prob;
	TransitionMatrix(95, 96) = prob;
	TransitionMatrix(95, 97) = prob;
	TransitionMatrix(95, 98) = prob;
	TransitionMatrix(95, 99) = prob;
	TransitionMatrix(95, 100) = prob + prob;
	TransitionMatrix(96, 96) = prob;
	TransitionMatrix(96, 97) = prob;
	TransitionMatrix(96, 98) = prob;
	TransitionMatrix(96, 99) = prob;
	TransitionMatrix(96, 100) = prob + prob +prob;
	TransitionMatrix(97, 97) = prob;
	TransitionMatrix(97, 98) = prob;
	TransitionMatrix(97, 99) = prob;
	TransitionMatrix(97, 100) = prob + prob + prob + prob;
	TransitionMatrix(98, 98) = prob;
	TransitionMatrix(98, 99) = prob;
	TransitionMatrix(98, 100) = prob + prob + prob + prob + prob;
	TransitionMatrix(99, 99) = prob;
	TransitionMatrix(99, 100) = 1;
	TransitionMatrix(100, 100) = 1;
	//std::cout << TransitionMatrix << std::endl;
}

void setGameMatrix()
{

	GameMatrix = TransitionMatrix;

	for (int i = 0; i < size; i++)
	{
		if (GameMatrix(i, 3) > 0)
		{
			GameMatrix(i, 3) = GameMatrix(i, 19);
			GameMatrix(i, 3) = 0;
		}
		if (GameMatrix(i, 15) > 0)
		{
			GameMatrix(i, 15) = GameMatrix(i, 37);
			GameMatrix(i, 15) = 0;
		}
		if (GameMatrix(i, 22) > 0)
		{
			GameMatrix(i, 22) = GameMatrix(i, 42);
			GameMatrix(i, 22) = 0;
		}
		if (GameMatrix(i, 25) > 0)
		{
			GameMatrix(i, 25) = GameMatrix(i, 64);
			GameMatrix(i, 25) = 0;
		}
		if (GameMatrix(i, 41) > 0)
		{
			GameMatrix(i, 41) = GameMatrix(i, 73);
			GameMatrix(i, 41) = 0;
		}
		if (GameMatrix(i, 53) > 0)
		{
			GameMatrix(i, 53) = GameMatrix(i, 74);
			GameMatrix(i, 53) = 0;
		}
		if (GameMatrix(i, 63) > 0)
		{
			GameMatrix(i, 63) = GameMatrix(i, 86);
			GameMatrix(i, 63) = 0;
		}
		if (GameMatrix(i, 76) > 0)
		{
			GameMatrix(i, 76) = GameMatrix(i, 91);
			GameMatrix(i, 76) = 0;
		}
		if (GameMatrix(i, 84) > 0)
		{
			GameMatrix(i, 84) = GameMatrix(i, 98);
			GameMatrix(i, 84) = 0;
		}
		if (GameMatrix(i, 11) > 0)
		{
			GameMatrix(i, 11) = GameMatrix(i, 7);
			GameMatrix(i, 11) = 0;
		}
		if (GameMatrix(i, 18) > 0)
		{
			GameMatrix(i, 18) = GameMatrix(i, 13);
			GameMatrix(i, 18) = 0;
		}
		if (GameMatrix(i, 28) > 0)
		{
			GameMatrix(i, 28) = GameMatrix(i, 12);
			GameMatrix(i, 28) = 0;
		}
		if (GameMatrix(i, 36) > 0)
		{
			GameMatrix(i, 36) = GameMatrix(i, 34);
			GameMatrix(i, 36) = 0;
		}
		if (GameMatrix(i, 77) > 0)
		{
			GameMatrix(i, 77) = GameMatrix(i, 16);
			GameMatrix(i, 77) = 0;
		}
		if (GameMatrix(i, 47) > 0)
		{
			GameMatrix(i, 47) = GameMatrix(i, 26);
			GameMatrix(i, 26) = 0;
		}
		if (GameMatrix(i, 83) > 0)
		{
			GameMatrix(i, 83) = GameMatrix(i, 39);
			GameMatrix(i, 83) = 0;
		}
		if (GameMatrix(i, 92) > 0)
		{
			GameMatrix(i, 92) = GameMatrix(i, 75);
			GameMatrix(i, 92) = 0;
		}
		if (GameMatrix(i, 99) > 0)
		{
			GameMatrix(i, 99) = GameMatrix(i, 70);
			GameMatrix(i, 99) = 0;
		}









	}
}
 
