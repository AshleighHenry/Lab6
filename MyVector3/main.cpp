/// <summary>
/// Ashleigh Henry
/// login C00225954
/// estimate 15 hours
/// time spent 11 hours roughly
/// 20 minutes 07/12/2017 - working out git. still haven't figured it out
/// 21 dec 2 hours, static casts
/// 3 jan 2 hours work on main
/// 5 jan 4 hours work on those hard maths yo
/// 8 jan finishing comments and double checking and testing 3 hours
/// 
/// issues
/// angle between isn't working
/// 
/// </summary>
#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 


#include "MyVector3.h"
#include <SFML\Graphics.hpp>
#include <string>



// you need more comments for Pete's sake

int main()
{
	MyVector3 vectorOne{ 1.1,2.2,-3.3 };  // vector 1. base vector for most operations
	MyVector3 vectorTwo{ 2.0,-4.5,3.3 }; // 
	MyVector3 vectorThree{};
	std::cout << "----------------------" << std::endl;
	std::cout << "VectorOne = " << vectorOne.toString() << std::endl;
	std::cout << "----------------------" << std::endl;

	std::cout << "VectorTwo = " << vectorTwo.toString() << std::endl;
	std::cout << "----------------------" << std::endl;
	std::cout << "" << std::endl;
	// == operator
	std::cout << "--- Equality ---" << std::endl;
	if (vectorOne.operator==(vectorTwo))
	{
		std::cout << "Equality is true." << std::endl;
	}
	else
	{
		std::cout << "Equality is false" << std::endl;
	}
	std::cout << "" << std::endl;

	// != operator
	if (vectorOne.operator!=(vectorTwo))
	{
		std::cout << "Inequality is True." << std::endl;
	}
	else
	{
		std::cout << "Inequality is false" << std::endl;
	}
	std::cout << "" << std::endl;

	// basic operators
	std::cout << "--- Addition ---" << std::endl;											// +
	std::cout << "Calculate " << MyVector3{ 3.1,-2.3,0.0 }.toString() << std::endl;
	std::cout << "Function " << vectorOne.operator+(vectorTwo).toString() << std::endl;		// vector one + vector two
	std::cout << "" << std::endl;

	std::cout << "--- - operator ---" << std::endl;											// -
	std::cout << "Calculate " << MyVector3{ -0.9, 6.7, -6.6 }.toString() << std::endl;
	std::cout << "Function " << vectorOne.operator-(vectorTwo).toString() << std::endl;		// vector one - vector two
	std::cout << "" << std::endl;


	std::cout << "--- * operator ---" << std::endl;											// *
	std::cout << "Calculate " << MyVector3{ 3.3,6.6,-9.9 }.toString() << std::endl;
	std::cout << vectorOne.operator*(3).toString() << std::endl;							// vector 1 * x num
	std::cout << "" << std::endl;

	std::cout << "--- / operator ---" << std::endl;											// /
	std::cout << "Calculate " << MyVector3{ 0.275,0.55,-0.825 }.toString() << std::endl;
	vectorThree = vectorOne.operator/(4);
	if (vectorThree == MyVector3(0, 0, 0))
	{
		std::cout << "Can't divide by 0" << std::endl;										// shows error if divided by zero
	}
	else
	{
		std::cout << "Function " << vectorThree.toString() << std::endl;					// vector one divided by num
	}
	std::cout << "" << std::endl;


	std::cout << "--- += operator ----" << std::endl;
	std::cout << "Calculate " << MyVector3{ 3.1,-2.3,0.0 }.toString() << std::endl;			// +
	//std::cout << vectorOne.operator+=(vectorTwo).toString() <<std::endl; corrupts vectorOne
	// assign vector 1 values to vector three and then add two to three 
	// to keep 1 the same as original values. 3 will be reassigned again later
	vectorThree = vectorOne;
	std::cout << " Function " << vectorThree.operator+=(vectorTwo).toString() << std::endl;		// vectorone + vector two
	std::cout << "" << std::endl;

	std::cout << "--- -= operator ---" << std::endl;											// -
	std::cout << "Calculate " << MyVector3{ -0.9, 6.7, -6.6 }.toString() << std::endl;			// vectorone - vectortwo
	vectorThree = vectorOne;
	std::cout << vectorThree.operator-=(vectorTwo).toString() << std::endl;
	std::cout << "" << std::endl;



	std::cout << "--- Length ---" << std::endl;													// Length
	std::cout << "Calculate 4.115823125451335" << std::endl;									// calculates answer
	double length = vectorOne.length();															// answer provided by function, returned to main. 
	std::cout << "Function " << length << std::endl;
	std::cout << "" << std::endl;

	std::cout << "--- Length Squared ---" << std::endl;											// length squared
	std::cout << "Calculate 16.94" << std::endl;												// calculated answer
	std::cout << vectorOne.lengthSquared() << std::endl;											// function calls for length function and squares it
	std::cout << "" << std::endl;

	std::cout << "--- Dot ---" << std::endl;													// dot
	std::cout << "Calculate -18.59" << std::endl;												// calculated answer
	std::cout << "Function " << vectorOne.dot(vectorTwo) << std::endl;							// answer returned by function
	std::cout << "" << std::endl;

	std::cout << "--- Cross Product" << std::endl;												// cross product
	std::cout << "Calculate " << MyVector3{ -7.59,-10.23, -9.35 }.toString() << std::endl;
	std::cout << "Function " << vectorOne.crossProduct(vectorTwo).toString() << std::endl;


	std::cout << "--- Angle Between ---" << std::endl;
	// this one is unsavable
	std::cout << vectorOne.angleBetween(vectorTwo) << std::endl;
	std::cout << "" << std::endl;

	std::cout << "--- Unit ---" << std::endl;
	std::cout << "Calculate " << MyVector3{0.26726, 0.5345, -0.8018}.toString() << std::endl;
	std::cout << vectorOne.unit().toString() << std::endl;
	std::cout << "" << std::endl;

	std::cout << "--- Projection ---" << std::endl;
	std::cout << vectorOne.projection(vectorTwo).toString() << std::endl;
	std::cout << "" << std::endl;

	std::cout << "--- Rejection ---" << std::endl;
	std::cout << vectorOne.rejection(vectorTwo).toString() << std::end;	
	std::system("pause");
	return EXIT_SUCCESS;
}


