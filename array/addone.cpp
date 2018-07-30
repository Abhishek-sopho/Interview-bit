/*
Given a non-negative number represented as an array of digits,

add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.

Example:

If the vector has [1, 2, 3]

the returned vector should be [1, 2, 4]

as 123 + 1 = 124.

*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> v(5,9);
	vector <int> result;
	vector <int> answer;
	int s = v.size();
	int sum = 0,carry = 1;

	for(int i = s-1;i>= 0;i--)
	{
		sum = v[i] + carry;
		carry = sum / 10;
		result.push_back(sum%10);
	}
	result.push_back(carry);
	int i = s-1;
	while(i >=0 && result[i] == 0)
	{
		i--;
	}
	while(i >= 0)
	{
		answer.push_back(result[i]);
		i--;
	}
	return answer;
}