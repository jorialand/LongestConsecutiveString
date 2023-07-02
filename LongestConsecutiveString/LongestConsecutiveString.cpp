/* So do u feel like you have an algorithmic way of thinking?
 So do u feel like you know how to tell a machine to perform a given task?
 Implement longest_consecutive function, that takes an array of strings as its parameters, 
 and returns the first longest string consisting of n consecutive strings,
 in the given array.

 Examples:
	longest_consecutive(["theta","epsilon","sierra","theta"], 2)
		returns "epsilonsierra"

	longest_consecutive(["golf","oscar","romeo","india", "lima", "lima", "alpha"], 3)
		returns "oscarromeoindia"
**/

#include <iostream>
#include <vector>
#include <string>

std::string longest_consecutive(const std::vector<std::string>& strings, size_t n)
{
	std::string sLongestConsecutiveString;
	return sLongestConsecutiveString;
}
int main()
{
    std::cout << "Hello World!\n";

		std::string expectedResult = "epsilonsierra";
		std::string result = longest_consecutive({"theta","epsilon","sierra","theta"}, 2);
		if (expectedResult == result)
			std::cout << "Test 1 passed!" << std::endl;
		else
			std::cout << "Test 1 failed! --> " << expectedResult << " != " << result << std::endl;

		expectedResult = "oscarromeoindia";
		result = longest_consecutive({"golf","oscar","romeo","india", "lima", "lima", "alpha"}, 3);
		if (expectedResult == result)
			std::cout << "Test 2 passed!" << std::endl;
		else
			std::cout << "Test 2 failed! --> " << expectedResult << " != " << result << std::endl;

}

