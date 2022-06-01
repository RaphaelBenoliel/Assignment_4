#include <iostream>
#include "Date.h"
using namespace std;
template<class T>
int bigger(T* arr,int size,T val)
{
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if(arr[i]>= val)
            count++;
    }
    return count;
}
int main() {
    int *arr, size, sizeD,day, month,year,val;
    Date *date;
    cout << "Enter size of integer array: ";
    cin >> size;
    arr = new int[size];
    cout<<"Enter integer to the integer array: ";
    for (int i = 0; i < size; ++i)
        cin >> arr[i];
    cout << "Enter size of Date array: ";
    cin >> sizeD;
    date = new Date[sizeD];
    cout<<"Enter Date to the Date array: ";
    for (int i = 0; i < sizeD; ++i)
    {
        cout<< "Enter day, month, year: ";
        cin>>day>>month>>year;
        date[i] = Date(day, month, year);
    }
    cout<<"Enter integer val: ";
    cin >>val;
    cout<<bigger(arr,size,val)<<endl;
    cout<<"Enter Date val day, month, year: ";
    cin>>day>>month>>year;
    Date valD(day,month,year);
    cout<<bigger(date,size,valD)<<endl;
    return 0;
}
