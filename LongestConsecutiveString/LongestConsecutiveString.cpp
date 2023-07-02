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
**/

#include <iostream>
#include <vector>
#include <string>

std::string longest_consecutive(const std::vector<std::string>& strings, size_t n)
{
	std::string nMexLenWord;
	size_t nMaxLen = 0;

	const size_t nStringsSize = strings.size();
	const size_t nConsecutiveStrings = n;

	if (nStringsSize < nConsecutiveStrings)
	{
		std::cout << "Invalid inputs.\n";
		return {};
	}

	//const size_t nPossibleCombinations = !(nStringsSize % 2) ?
	//	(nStringsSize - nConsecutiveStrings + 1) :
	//	(nStringsSize - nConsecutiveStrings + 2);
	const size_t nPossibleCombinations = nStringsSize - nConsecutiveStrings + 1;
	for (size_t i = 0; i < nPossibleCombinations; i++)
	{
		std::string theWord;
		for (size_t j = 0; j < n; j++)
			theWord += strings[i + j];
		std::cout << "Combination " << i + 1 << ": " << theWord << std::endl;
		if (theWord.length() > nMaxLen)
		{
			nMaxLen = theWord.length();
			nMexLenWord = theWord;
		}
	}

	return nMexLenWord;
}
int main()
{
	std::cout << "longest_consecutive!\n";

	std::string expectedResult = "epsilonsierra";
	std::string result = longest_consecutive({ "theta","epsilon","sierra","theta" }, 2);
	if (expectedResult == result)
		std::cout << "Test 1 passed! Result: " << result << std::endl;
	else
		std::cout << "Test 1 failed! --> " << expectedResult << " != " << result << std::endl;

	expectedResult = "oscarromeoindia";
	result = longest_consecutive({ "golf","oscar","romeo","india", "lima", "lima", "alpha" }, 3);
	if (expectedResult == result)
		std::cout << "Test 2 passed! Result: " << result << std::endl;
	else
		std::cout << "Test 2 failed! --> " << expectedResult << " != " << result << std::endl;

}

