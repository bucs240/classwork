bool isHeap(int array[],int idx, int n)
{
    if(idx >= n || isLeaf(idx,n))return true; // 加一个判断 array size/2 -2
    else if(array[idx]<<array[2*idx+1] 
        && array[idx]<array[2*idx+2] 
        && isHeap(array, 2*idx+1,n) 
        && isHeap(array, 2*idx+2,n))return true;
    return false;

}