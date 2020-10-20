#include <iostream>

#include "disjoint_set.hpp"

using namespace std;

int main() {
	eda::disjoint_set::DisjointSet<int> disjoint_set;

	disjoint_set.insert(1);
	disjoint_set.insert(2);
	disjoint_set.insert(3);
	disjoint_set.insert(4);

	cout << disjoint_set.same_set(1, 2) << endl;
	cout << disjoint_set.same_set(1, 3) << endl;
	cout << disjoint_set.same_set(1, 4) << endl;
	cout << disjoint_set.same_set(2, 3) << endl;
	cout << disjoint_set.same_set(2, 4) << endl;
	cout << disjoint_set.same_set(3, 4) << endl;

	disjoint_set.combine(1, 2);

	cout << disjoint_set.same_set(1, 2) << endl;
	cout << disjoint_set.same_set(1, 3) << endl;
	cout << disjoint_set.same_set(1, 4) << endl;
	cout << disjoint_set.same_set(2, 3) << endl;
	cout << disjoint_set.same_set(2, 4) << endl;
	cout << disjoint_set.same_set(3, 4) << endl;

	disjoint_set.combine(3, 4);

	cout << disjoint_set.same_set(1, 2) << endl;
	cout << disjoint_set.same_set(1, 3) << endl;
	cout << disjoint_set.same_set(1, 4) << endl;
	cout << disjoint_set.same_set(2, 3) << endl;
	cout << disjoint_set.same_set(2, 4) << endl;
	cout << disjoint_set.same_set(3, 4) << endl;

	disjoint_set.combine(2, 3);

	cout << disjoint_set.same_set(1, 2) << endl;
	cout << disjoint_set.same_set(1, 3) << endl;
	cout << disjoint_set.same_set(1, 4) << endl;
	cout << disjoint_set.same_set(2, 3) << endl;
	cout << disjoint_set.same_set(2, 4) << endl;
	cout << disjoint_set.same_set(3, 4) << endl;
	
	return 0;
}
