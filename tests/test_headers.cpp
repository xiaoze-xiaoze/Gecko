#include <vector>
#include <string>

#include "Error/Error.hpp"

#include "Graph/AdjacencyMatrixGraph.hpp"

#include "Hash/Hash.hpp"
#include "Heap/Heap.hpp"

#include "LinearList/CircularDoubleLinkedList.hpp"
#include "LinearList/CircularLinkedList.hpp"
#include "LinearList/DoubleLinkedList.hpp"
#include "LinearList/LinkedList.hpp"
#include "LinearList/SequentialList.hpp"
#include "LinearList/StaticLinkedList.hpp"

#include "Queue/CircularDequeue.hpp"
#include "Queue/CircularQueue.hpp"
#include "Queue/ListDequeue.hpp"
#include "Queue/ListQueue.hpp"

#include "Random/Random.hpp"

#include "SelectionAlgorithms/Selection.hpp"

#include "Set/UnionFindSet.hpp"

#include "SortingAlgorithms/Sorting.hpp"

#include "Stack/ListStack.hpp"
#include "Stack/VectorStack.hpp"

#include "String/String.hpp"

#include "Tree/AVLTree.hpp"
#include "Tree/BinarySearchTree.hpp"
#include "Tree/BinaryTree.hpp"
#include "Tree/RedBlackTree.hpp"

int main() {
    std::vector<int> a{3, 1, 2};
    auto res = kthSmallest(a, 2);
    if (!res) return 1;

    auto pos = kmp_find_first("ababcabcacbab", "abcac");
    if (!pos) return 1;

    HashMap<int, int> hm;
    hm.insert(1, 2);
    auto v = hm.get(1);
    if (!v) return 1;

    MaxHeap<int> heap;
    heap.push(1);
    auto t = heap.top();
    if (!t) return 1;

    return 0;
}

