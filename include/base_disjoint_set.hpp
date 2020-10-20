#ifndef DISJOINT_SET_BASE_DISJOINT_SET_HPP_
#define DISJOINT_SET_BASE_DISJOINT_SET_HPP_

#include "base_node.hpp"

namespace eda {

namespace disjoint_set {

template <typename T, class Node>
class BaseDisjointSet {
private:
	std::unordered_map<T, Node *> nodes_;

public:
	void insert(T);
	Node *find(T);
	void combine(Node *, Node *);
};

} // disjoint_set

} // eda

#endif // DISJOINT_SET_BASE_DISJOINT_SET_HPP_
