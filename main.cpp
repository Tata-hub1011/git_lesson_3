
int main()
{
    std::vector<int> arr = {17,8,9,10};
    bubble_sort(arr);
    std::cout << "Sorted array is: ";
    for (int i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    return 0;
}