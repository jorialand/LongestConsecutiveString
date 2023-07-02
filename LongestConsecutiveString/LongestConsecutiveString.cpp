/* So do u feel like you have an algorithmic way of thinking?
 So do u feel like you know how to tell a machine to perform a given task?
 Implement longest_consecutive function, that takes an array of strings as its parameters,
 and returns the first longest string consisting of n consecutive strings,
 in the given array.

 Examples:
	longest_consecutive(["theta","epsilon","sierra","theta"], 2)
		returns "epsilonsierra"

		Playground:
		strings.size() = 4
		n = 2
		test thetaepsilon 0 1
		test epsilonsierra 1 2
		test sierra theta	2 3

	longest_consecutive(["golf","oscar","romeo","india", "lima", "lima", "alpha"], 3)
		returns "oscarromeoindia"

		!! Cuántas combis hay de n palabras consecutivas en una lista de m palabras?
		Condición m>=n
		m = n -> 1 combi

		m=5 n=2 -> 4
		m=4 n=2 -> 3
		m=3 n=2 -> 2
		m=2 n=2 -> 1
		m-n+1 ? ok SUUUUUUUUUUU

		Solo para i=1
		m-n+1-i?

		Para impares, m-n+2-i? 6, 5, 4, 3, 2, 1, 0 okkkkk

**/

#include <iostream>
#include <vector>
#include <string>

std::string longest_consecutive(const std::vector<std::string>& strings, size_t n)
{
	std::string sString;
	size_t nIndex;
	size_t nMaxLen = 0;

	size_t nStringsSize = strings.size();
	size_t nConsecutiveStrings = n;

	if (nStringsSize < nConsecutiveStrings)
	{
		std::cout << "Invalid inputs.\n";
		return {};
	}

	// Loop i
	for (size_t i = 0; i < nStringsSize; i++)
	{
		//std::cout << (nStringsSize % 2) << std::endl;
		//size_t nPossibleCombinations = nStringsSize - nConsecutiveStrings + 1 - i;
		size_t nPossibleCombinations = !(nStringsSize % 2) ? 
		(nStringsSize - nConsecutiveStrings + 1 - i) :
		(nStringsSize - nConsecutiveStrings + 2 -i);

		std::cout << "[loop i] " << strings[i] << std::endl;

		// Loop j
		for (size_t j = 0; j < nPossibleCombinations; j++)
		{
			std::cout << "Combination " << j+1 << ": " << strings[i+j] + strings[i+j+1] << std::endl;
		}
		break;
	}

	return sString;
}
int main()
{
	std::cout << "Hello World!\n";

	std::string expectedResult = "epsilonsierra";
	std::string result = longest_consecutive({ "theta","epsilon","sierra","theta" }, 2);
	if (expectedResult == result)
		std::cout << "Test 1 passed!" << std::endl;
	else
		std::cout << "Test 1 failed! --> " << expectedResult << " != " << result << std::endl;

	expectedResult = "oscarromeoindia";
	result = longest_consecutive({ "golf","oscar","romeo","india", "lima", "lima", "alpha" }, 3);
	if (expectedResult == result)
		std::cout << "Test 2 passed!" << std::endl;
	else
		std::cout << "Test 2 failed! --> " << expectedResult << " != " << result << std::endl;

}

