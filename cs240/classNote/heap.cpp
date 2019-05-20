/* heap has to implement on a complete tree
implement a heap not in link base but in array base

i = index of the node

left: 2i+1
right: 2i + 2
parent (i-1)/2



Priority Queue:
    Priority values
    Constant time
    Heap:
        -Priority value alway at the root
        -Parent has higher priority than children
        -complete 
    Heapify start with (arraysize()-2/2)


heapify(){
	for(int i = (heap.size()-2)/2; i >= 0; i--){
	siftdown(i)
	}

	heapify(int i)
	{
		while(!isLeaf(i))
		{ 
			int n = left(i);
			if(n+1<heap.size() && heap[n]<heap[n+1])
		}
	}


Heap access the priorty value very quickly
Heaplify O(n) operating 

int removePriority(){
	int ret = heap[0];
	heap[0] = heap[heap.size()-1];
	heap.pop_back();

	siftdown(0);
	return ret;
} remove priority siftdown log(n)

Heapify [3,5,6,7,5,4,6,6,3] // 跳过所有叶子节点, 查每一个节点是不是heap,不是heap就要做siftdown
怎么sort 一个array using heap

heap sort secondFast, but unstable. Same value did not garrently tobe sorted.
remove the prority valuable and sitfdown and than heapify
swap the first elment and last element 
maxheap acceding
minheap decending 