// Write a program to create a class template for the ‘Array’ class

#include <iostream>

using namespace std;

template <typename T>
class Array{

    private :
        T* data;
        int size;

    public :
        Array(T arr[],int size)
        {
            this->size=size;
            data=new T[size];
            
            for (int i = 0; i < size; i++)
            {
                data[i]=arr[i];
            }
            
        }
         void printArray() {
        for (int i = 0; i < size; i++) {
            cout << this->data[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    Array<int> obj1(arr1,10);
    obj1.printArray();
    return 0;
}