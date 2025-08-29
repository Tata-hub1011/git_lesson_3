
int main()
{
    std::vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    bubble_sort(arr);
    std::cout << "Sorted array is: ";
    for (int i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    return 0;
}