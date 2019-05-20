#include<iostream>
#include<vector>

using namespace std;

void foo(int num)
{

}
void foo(int *ptr)
{

}
int main()
{
    foo(NULL);// no vaild except declear nullptr in function parameter.
    foo(nullptr)  // nullptr could cast to pointer if needed.Remove ambigurity on overload function.
    auto x=5;
    vector<int> v;
    v.push_back(5);

    for(auto i = v.begin();v.end();i++)
    {
        *i=i;
    }
    for(auto &i: v) // modify original container need referrence to the orginal container.
    {
        i++; // with auto then depend what V is, to determind wheater or not use derefrence.
    }

    // Smart pointer , do garbage collection by itself uisng template.

    unique_ptr<Task>task_ptr (new Task(23)); //Smart pointer, free by itself.
    auto taxk_ptr2=move(task_ptr); // move pointer from one object to another, delete the oringial pointer.
    // Access the element through uniue_ptr
    int id = task_ptr->mId;

    task_ptr.reset(new Task(23));

    Task* standard_ptr = task_ptr.release();// puth smart pointer on the heap, than you need to delete it
    delete standard_ptr;
    
}