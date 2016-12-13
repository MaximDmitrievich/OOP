#include "ntree.h"
#include "ntree_2.h"

using namespace std;

int main(int argc, char *argv[])
{
	shared_ptr<NTree_2<TShape, TNTree<TShape>>> globaltree(new NTree_2<TShape, TNTree<TShape>>);
	shared_ptr<TNTree<TShape>> tree1 (new TNTree<TShape>());
	shared_ptr<TShape> shape1 (new TPentagon(0.0, 0.0, 1.0, 1.0, 5.0, 5.0, -10.0, -10.0, 0.0, -3.0));
	shared_ptr<TShape> shape2 (new TOctagon(1.0, 1.0, 2.0, 2.0, 6.0, 6.0, -9.0, -9.0, 1.0, -2.0, 2.0, 3.0, 5.0, 7.0, 0.0, 0.0));
	shared_ptr<TShape> shape3 (new THexagon(2.0, 2.0, 3.0, 3.0, 7.0, 7.0, -8.0, -8.0, 2.0, -1.0, -2, -3));
	shared_ptr<TShape> shape4 (new TPentagon(1.0, 3.0, 4.0, 4.0, 8.0, 8.0, -7.0, -7.0, 3.0, 0.0));

	shared_ptr<TNTree<TShape>> tree2(new TNTree<TShape>());
	shared_ptr<TShape> shape5(new TPentagon(2.0, 0.0, 1.0, 1.0, 5.0, 5.0, -10.0, -10.0, 0.0, -3.0));
	shared_ptr<TShape> shape6(new TOctagon(3.0, 1.0, 2.0, 2.0, 6.0, 6.0, -9.0, -9.0, 1.0, -2.0, 2.0, 3.0, 5.0, 7.0, 0.0, 0.0));
	shared_ptr<TShape> shape7(new THexagon(8.0, 2.0, 3.0, 3.0, 7.0, 7.0, -8.0, -8.0, 2.0, -1.0, -2, -3));
	shared_ptr<TShape> shape8(new TPentagon(9.0, 3.0, 4.0, 4.0, 8.0, 8.0, -7.0, -7.0, 3.0, 0.0));

	shared_ptr<TNTree<TShape>> tree3(new TNTree<TShape>());
	shared_ptr<TShape> shape9(new TPentagon(2.0, 2.0, 5.0, 1.0, 5.0, 5.0, -10.0, -10.0, 0.0, -3.0));
	shared_ptr<TShape> shape10(new TOctagon(3.0, 7.0, 6.0, 2.0, 6.0, 6.0, -9.0, -9.0, 1.0, -2.0, 2.0, 3.0, 5.0, 7.0, 0.0, 0.0));
	shared_ptr<TShape> shape11(new THexagon(8.0, 8.0, 1.0, 3.0, 7.0, 7.0, -8.0, -8.0, 2.0, -1.0, -2, -3));
	shared_ptr<TShape> shape12(new TPentagon(9.0, 4.0, 2.0, 4.0, 8.0, 8.0, -7.0, -7.0, 3.0, 0.0));

	cout << "INSERTION" << endl;
	cout << "FIRST TREE" << endl;
	tree1->Insert(shape1, "r\0", "r\0"); //r
	tree1->Insert(shape2, "r\0", "s\0"); //rs
	tree1->Insert(shape3, "rs\0", "s\0"); //rss
	tree1->Insert(shape4, "rss\0", "b\0"); //rssb
	cout << endl << "SECOND TREE" << endl;
	tree2->Insert(shape5, "r\0", "r\0"); //r
	tree2->Insert(shape6, "r\0", "s\0"); //rs
	tree2->Insert(shape7, "rs\0", "s\0"); //rss
	tree2->Insert(shape8, "rss\0", "b\0"); //rssb
	cout << endl << "THIRD TREE" << endl;
	tree3->Insert(shape9, "r\0", "r\0"); //r
	tree3->Insert(shape10, "r\0", "s\0"); //rs
	tree3->Insert(shape11, "rs\0", "s\0"); //rss
	tree3->Insert(shape12, "rss\0", "b\0"); //rssb

	cout << endl << "PRINT" << endl;
	cout << "FIRST TREE" << endl;
	tree1->Print("r\0");
	tree1->Print("rs\0");
	tree1->Print("rss\0");
	tree1->Print("rssb\0");
	cout << endl << "SECOND TREE" << endl;
	tree2->Print("r\0");
	tree2->Print("rs\0");
	tree2->Print("rss\0");
	tree2->Print("rssb\0");
	cout << endl << "THIRD TREE" << endl;
	tree3->Print("r\0");
	tree3->Print("rs\0");
	tree3->Print("rss\0");
	tree3->Print("rssb\0");

	globaltree->Insert_2(tree2, "r\0", "r\0");
	globaltree->Insert_2(tree1, "r\0", "s\0");
	globaltree->Insert_2(tree1, "rs\0", "b\0");

	cout << endl << "ITERATOR1" << endl;
	TIterator<TNode<TShape>, TShape> it1 = tree1->begin();
	TIterator<TNode<TShape>, TShape> end1 = tree1->end();
	for (it1, end1; it1 != end1; it1++) {
		cout << *it1 << endl;
	}
	cout << *it1 << endl;
	cout << endl << "ITERATOR2" << endl;
	TIterator<TNode<TShape>, TShape> it2 = tree2->begin();
	TIterator<TNode<TShape>, TShape> end2 = tree2->end();
	for (it2, end2; it2 != end2; it2++) {
		cout << *it2 << endl;
	}
	cout << *it2 << endl;
	cout << endl << "GLOBAL TREE"<< endl;
	TIterator<TNode_2<TNTree<TShape>>, TNTree<TShape>> it3 = globaltree->begin();
	TIterator<TNode_2<TNTree<TShape>>, TNTree<TShape>> end3 = globaltree->end();
	for (it3, end3; it3 != end3; it3++) {
		TIterator<TNode<TShape>, TShape> it4 = it3->begin();
		TIterator<TNode<TShape>, TShape> end4 = it3->end();
		for (it4, end4; it4 != end4; it4++) {
			cout << *it4 << endl;
		}
		cout << *it4 << endl;
	}
	system("pause");
	return 0;
}