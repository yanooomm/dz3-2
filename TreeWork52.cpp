/* ListWork52 Дано бинарное дерево и указатель на корень дерева Р1. Необходимо определить является ли оно
идеальным деревом. В качестве результата вывести логическое значение True или False. Идеальным называется 
дерево, у которого полностью заполнены все уровни*/

#include "pt4.h"
using namespace std;

bool IdealTree(PNode p) {
	bool ans;
	if ((p->Left != NULL && p->Right == NULL) || (p->Right != NULL && p->Left == NULL))
		return false;
	else 
	{
		if (p->Left == NULL && p->Right == NULL)
			ans = true;
		else 
		{
			if (IdealTree(p->Left)) 
				ans = true; 
			else 
				return false;
			if (IdealTree(p->Right)) 
				ans = true; 
			else 
				return false;
		}
	}
	return ans;
}

void Solve() {
	Task("TreeWork52");
	PNode p1;
	pt >> p1;
	pt << IdealTree(p1);
}