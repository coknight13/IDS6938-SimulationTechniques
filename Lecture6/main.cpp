//Eulers Method to solve a differential equation
#define _USE_MATH_DEFINES

#include <cmath>
#include<iostream>
#include<iomanip>
#include<math.h>




/*
Compute the dy/dx
*/
double df(double x, double y)            //function for defining dy/dx
{
    return (y * log(y)) / x;
}


/*
Compute the exact answer
*/
double exact(double x)            //function for defining dy/dx
{
    return pow(M_E, (x / 2));
}


/*
Calculate the error
*/
double error(double exact, double approx)
{
    return abs(exact - approx) / exact;
}


/*
This implements the Euler method equation
*/
double rk1(double y, double h, double x)
{
    return y + h * df(x, y);
}


/*
This implements the Midpoint method equation
*/
double rk2(double y, double h, double x)
{

	double k1;

 k1 = df(x, y);
    return df(x + h / 2, y + h / 2 * k1);
}


/*
This implements the RK4 method equation
*/
double rk4(double y, double h, double x)
{
	double k1;


k1 = df(x, y);
	double k2 = df(x+h/2, y+h/2*k1);
	double k3 = df(x + h / 2, y + h / 2 * k2);
	double k4 = df(x + h, y + h*k3);

		return y + 1 / 6 * h*(k1 + 2 * k2 + 2 * k3 + k4);
   
}




int main()
{

    double y = M_E;
    double x = 2.0;
    double h = 0.1;


    // Euler Method Test
    //*************************
    // This code reproduces the table: (Euler's Method (Example 1 - Accuracy))
    
    std::cout << "x" << "\t" << "y (Euler)" << "\t" << "dy/dx" << "\t\t" << "EXACT" << "\t\t" 
        << "%Error(Euler)" << std::endl;
    std::cout << "----" << "\t" << "----------" << "\t" << "----------" << "\t" << "----------" 
        << "\t" << "----------" << std::endl;

    std::cout << x << "\t" << std::setprecision(11) << y << "\t" << std::setprecision(11) 
        << df(x, y) << "\t" << exact(x) << "\t" << error(exact(x), y) * 100 << "%" << std::endl;


    for (int i = 0; i < 10; i++)
    {
        y = rk1(y,h,x);  //caculate y_{i+1}
        x = x + h;       //increment x

        std::cout<< x << "\t" << std::setprecision(11) << y <<  "\t" << std::setprecision(11) 
            << df(x, y) << "\t" <<exact(x)<< "\t" << error(exact(x), y) * 100<<"%" << std::endl;
    }


    return 0;
}