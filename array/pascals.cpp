//pascal's triangle

#include <iostream>

using namespace std;

int main()
{
	int c = 1;
	for(int i = 0; i < 5 ; i++)
	{
		for(int j = 0;j <= i ;j++)
		{
			if (i == 0 || j == 0)
				c = 1;

			else 
			{	
				c = c *(i-j+1)/j;
			}
			cout<<c<<" ";
			
		}
		cout<<endl;

	}
	return 0;
}