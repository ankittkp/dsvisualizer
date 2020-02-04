#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include "binary_tree.h"
#include "binary_search_tree.h"


using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	char choice;
	cout<<"Enter N for no. of inputs of your choice or R for random inputs : ";
	cin>>choice;

	switch(choice)
	{

		case 'N':
		{
			cout<<"Enter no. of inputs : ";

			cin>>n;
			std::vector<int> input_nodes;

			for(int i=0;i<n;i++)
			{
				int temp;
				cin>>temp;
				input_nodes.push_back(temp);
			}
		}
			break;

		case 'R':
		{
			cout<<"\nRandom inputs will be taken automatically between 1 to 100 \n";
			srand(time(0));
			int No_Of_Items = rand()% 100 + 1;
			std::vector<int> random_nodes(No_Of_Items);
			cout << "\nRandom No. of items are : " << No_Of_Items<<endl;

			for(int i=0;i<No_Of_Items;i++)
			{
				random_nodes[i]=rand()% 100 + 1;
			}

			cout<<"\n\nBefore shuffling : ";
			for(int i : random_nodes)
				cout << i << " ";

			cout<<"\n\nAfter shuffling : ";
			random_shuffle(random_nodes.begin(), random_nodes.end());
			for(int i : random_nodes)
				cout << i << " ";
		}
			break;

		default:
			break;
	}
	return 0;
}