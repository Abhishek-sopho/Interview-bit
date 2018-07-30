// spiral printing using vectors



#include <iostream>
#include <vector>

using namespace std;

//display 2d vector
void display(vector <vector<int> > &vec)
{
	for(int i = 0;i <vec.size();i++)\
	{
		for(int j = 0;j <vec[i].size();j++)
		{
			cout<<vec[i][j]<<' ';
		}
	}
	cout<<endl;

}

int main()
{	
	int n = 4;
	
	vector <vector<int> > vec(n,vector<int>(n,0));

	int top = 0, bottom = n - 1, left = 0, right = n - 1;
 	int direction = 0,b = 1;
 	while(top <= bottom && left <= right)
 	{
 		switch(direction)
 		{	
 			case 0: // left -> right
 				for(int i = left;i<right+1;i++)
 				{
 					vec[top][i] =  b;
 					b++;
 				}
 				
 				top++;
 				direction = (++direction)%4;
 				break;

 			case 1: // up -> down
 				for(int i = top;i <bottom +1 ;i++)
 				{
 					//vec1.push_back(b);
 					vec[i][right] = b;
 					b++;
 				}	
 				right--;
 				direction = (++direction) % 4;
 				break;

 			case 2: // right -> left
 				for(int i = right; i >= left;i--)
 				{
 					vec[bottom][i] = b;
 					b++;
 				}
 				bottom --;
 				direction =(++direction)%4;
 				break;
 			
 			case 3 : // bottom -> up;
 				for(int i = bottom;i >= top; i--)
 				{
 					//vec1.push_back(b);
 					vec[i][left] = b;
 					//vec1.clear();
 					b++;
 				}
 				left ++;
 				direction = (++direction)%4;
 				break;
 		}
	}
	
	display(vec);
	cout<<endl;
	return 0;
}