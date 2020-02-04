#include<iostream>
using namestream std;

template<typename tree_node>
class bn_tree
{
	public:
		bn_tree(int value, binary_node_tree *parent = nullptr)
		{
			this->value = value;
			this->parent = parent;
			this->left = this->right = nullptr;
		}
		~bn_tree()
		{
			if(this->left != nullptr)
				delete this->left;
			if(this->right != nullptr)
				delete this->right;
		}
		int value;
		tree_node parent = nullptr;
		tree_node left = nullptr;
		tree_node right = nullptr;
};
int main()
{
	bn_tree node;
	node
}