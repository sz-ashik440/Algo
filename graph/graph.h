#include<iostream>
using namespace std;

class graph
{
	
	public:
		int G[100][100];
		int node;

		void set_node()
		{
			cout << "Please Enter node number: ";
			cin >> node;
			cout << endl;

			for(int i=1; i<=node; i++)
			{
				for(int j=1; j<= node; j++)
				{
					G[i][j] = 0;
				}
			}
		}	

		void set_G()
		{
			cout << "Enter the adjacency neighbor \n(Terminate Node by giving input 0)" << endl;
			
			int temp;

			for(int i=1; i<=node; i++)
			{
				temp =1;				
				while(1)
				{
					cout << i << " is connected to = ";
					cin >> temp;
					if (temp!=0)
					{
						G[i][temp] = 1;						
					}
					else 
					{
						cout << endl;
						break;
					}
				}
			}
		}

		void print_G()
		{
			cout << "The Graph is:" << endl;
			for(int i=1; i<=node; i++)
			{
				for(int j=1; j<= node; j++)
				{
					cout << G[i][j] << " ";
				}
				cout << endl;
			}
		}

		void G_example()
		{
			/*
				A 6 node graph 

				(1)---->(2)     (3)
				 |	   / |	   / |
				 |	 /	 |	 /	 |
				 | /	 | /	 |
				(4)<----(5)		(6)<--
								 |	 |
								 |___|
			*/
			cout << "A Stock Graph" << endl << endl;
			
			node = 6;

			for(int i=1; i<=node; i++)
			{
				for(int j=1; j<= node; j++)
				{
					G[i][j] = 0;
				}
			}

			G[1][2] = 1;
			G[1][4] = 1;
			G[2][5] = 1;
			G[3][5] = 1;
			G[3][6] = 1;
			G[4][2] = 1;
			G[5][4] = 1;
			G[6][6] = 1;

			print_G();

		}
};