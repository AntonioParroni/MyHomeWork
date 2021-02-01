void delete_special (int *&arr, int &size)
{
    int pos;
    cout << "Please insert your desired position " << endl;
    cin >> pos;
    int *new_arr = new int [size-1];
    if (pos > size)
    {
        cout << "Your position excels arrays length. \n Please try again! " << endl;
    }
    for (int i = 0, j = 0; i < size; i++)
    {
        if (i == pos)
        {
            i++;
        }
        new_arr[j++] = arr [i];
    }
    delete [] arr;
    arr = new_arr;
    size = size - 1;
}