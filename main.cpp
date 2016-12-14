#include "ntree.h"
#include "ntree_2.h"

using namespace std;

int main(int argc, char *argv[])
{
	cout << "=============================================" << endl;
	cout << "5 for inserting pent" << endl;
	cout << "6 for inserting hex" << endl;
	cout << "8 for inserting oct" << endl;
	cout << "t for inserting in global tree" << endl;
	cout << "d for deleting chain of directorites in path" << endl;
	cout << "l for iterating local tree" << endl;
	cout << "s for size of tree" << endl;
	cout << "i for iterating" << endl;
	cout << "p for print by path" << endl;
	cout << "q for quit" << endl;
	cout << "=============================================" << endl << endl;
	char cmd = 0;
	char path[30] = { '\0' };
	char who[2] = { '\0' };
	double length = 0.0;
	shared_ptr<TNTree<TShape>> tree(new TNTree<TShape>());
	shared_ptr<NTree_2<TShape, TNTree<TShape>>> globaltree(new NTree_2<TShape, TNTree<TShape>>());
	while (true) {
		memset(path, '\0', sizeof(char));
		cout << "cmd: ";
		cin >> cmd;
		switch (cmd) {
		case '5': {
			cout << "LENGTH OF PENTAGON: ";
			cin >> length;
			shared_ptr<TShape> shape(new TPentagon(length));
			cout << "DIRECTORY: ";
			cin >> path;
			path[29] = '\0';
			cout << "WHO: ";
			cin >> who;
			tree->Insert(shape, path, who);
			cout << "OK" << endl;
			break;
		}
		case '6': {
			cout << "LENGTH OF HEXAGON: ";
			cin >> length;
			shared_ptr<TShape> shape(new THexagon(length));
			cout << "DIRECTORY: ";
			cin >> path;
			path[29] = '\0';
			cout << "WHO: ";
			cin >> who;
			tree->Insert(shape, path, who);
			cout << "OK" << endl;
			break;
		}
		case '8': {
			cout << "OCTAGON: ";
			cin >> length;
			shared_ptr<TShape> shape(new TOctagon(length));
			cout << "DIRECTORY: ";
			cin >> path;
			cout << "WHO: ";
			cin >> who;
			tree->Insert(shape, path, who);
			cout << "OK" << endl;
			break;
		}
		case 't': {
			cout << "DIRECTORY: ";
			cin >> path;
			path[29] = '\0';
			cout << "WHO: ";
			cin >> who;
			globaltree->Insert_2(tree, path, who);
			shared_ptr<TNTree<TShape>> newtree(new TNTree<TShape>());
			tree = newtree;
			cout << "OK" << endl;
			break;
		}
		case 'd': {
			cout << "DIRECTORY: ";
			cin >> path;
			path[29] = '\0';
			tree->Delete(path);
			break;
		}
		case 'p': {
			cout << "DIRECTORY: ";
			cin >> path;
			path[29] = '\0';
			tree->Print(path);
			break;
		}
		case 'l': {
			TIterator<TNode<TShape>, TShape> it_loc = tree->begin();
			TIterator<TNode<TShape>, TShape> end_loc = tree->end();
			for (it_loc, end_loc; it_loc != end_loc; it_loc++) {
				cout << *it_loc << endl;
			}
			cout << *it_loc << endl;
			break;
		}
		case 's': {
			cout << "QUANTITY OF TREE'S NODES: " << tree->Size() << endl;
			break;
		}
		case 'i': {
		TIterator<TNode_2<TNTree<TShape>>, TNTree<TShape>> it = globaltree->begin();
		TIterator<TNode_2<TNTree<TShape>>, TNTree<TShape>> end = globaltree->end();
		for (it, end; it != end; it++) {
			TIterator<TNode<TShape>, TShape> it_in = it->begin();
			TIterator<TNode<TShape>, TShape> end_in = it->end();
			for (it_in, end_in; it_in != end_in; it_in++) {
				cout << *it_in << endl;
			}
			cout << *it_in << endl;
			continue;
		}
		break;
		}
		case 'q': {
			system("pause");
			return 0;
		}
		}
	}
}