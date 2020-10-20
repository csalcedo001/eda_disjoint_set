#ifndef DISJOINT_SET_BASE_NODE_HPP_
#define DISJOINT_SET_BASE_NODE_HPP_

namespace eda {

namespace disjoint_set {

template <typename T, class Node>
class BaseNode {
private:
	T value;
	Node *set_;

public:
	BaseNode(T);
};

} // disjoint_set

} // eda

#endif // DISJOINT_SET_BASE_NODE_HPP_
