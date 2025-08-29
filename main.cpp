
int main()
{
    std::vector<int> arr = {3,4,2,1,5};
    bubble_sort(arr);
    std::cout << "Sorted array is: ";
    for (int i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    return 0;
}