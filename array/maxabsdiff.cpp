#include <iostream>
#include <vector>

using namespace std;

int maxdiff(vector<int> &A) 
{   
    int max = 0;
    for(int i = 0; i < A.size();i++)
    {
        for(int j = A.size() - 1;j > i;j--)
        {
            int b = abs(A[i] - A[j]) + abs((i+1) -(j+1));
            if(max < b)
            {
                max = b;
            }
            
        }
        
    }
    return max;
}

int main()
{
	vector <int> A;
	int i = 0,b;
	while(true)
	{
		cin>>b;
		if( b == 0)
			break;
		else
			A.push_back(b);
		i++;
	}
	b = maxdiff(A);
	cout <<b<<endl;

	return 0;
}

