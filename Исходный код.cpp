#include <iostream>
using namespace std;

void rush (int y, int x)
{
	for (int i=0;i<x;i++)
	{
		for (int j=0;j<y;j++)
		{
		if ((i==0 && j==0) || (i==x-1 && j==y-2 && x!=1)) 
	       cout << "/";
		if ((i==0 && j==y-2) || (i==x-1 && j==0 && x!=1))
			cout << "\\";

		if (((x-1)>i>0 && j==0 && i!=0) || ((x-1)>i>0 && j==y-1 && i!=0) || (i==0 && (y-2)>j>0) || (i==x-1 && (y-2)>j>0))
		
			   cout << "*";
		   else
			   cout << " ";
		}
		
		cout << endl;
		
	}

}
 int main()
 {
	 setlocale (0, "rus");
	 int n, m;
	 cout << "¬ведите n\n";
	 cin >> n;
	 cout << "¬ведите m\n";
	 cin >> m;
	 if (m<0 || n<0)
		 cout << "ќшибка!";
	 rush(n,m);
		 return 0;
 }
