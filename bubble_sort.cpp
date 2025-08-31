#include <iostream>
#include <vector>

void bubble_sort(std::vector<int>& arr)
{
    int n = arr.size();
    for (int i = 0; i < n; ++i)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void show(const std::vector<int>& arr)
{
 std::cout << "Sorted array is: ";
    for (int i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
int main()
{
    std::vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> arr2 = {1,2,3,4,5,6,7,8,9,10};
    bubble_sort(arr1);
    show(arr1);

    bubble_sort(arr2);
    show(arr2);
   
    return 0;
}
