void bubbleSort(int arr[], int size)
{
    int temp;

    for(int i=0; i<size-1; i++)
	{
		for(int j=0; j<size-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void insertionSort(int arr[], int size)
{
    int i, j, temp;
    i = 1;
    while(i<size)
    {
        j = i;
        while ((j>0) && (arr[j-1]>arr[j]))
        {
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;

            j--;
        }
        i++;
    }   
}

void selectionSort(int arr[], int size)
{
    int temp, jMin;
    for (int i=0; i<size-1; i++)
    {
        // inisialisasi jMin dengan index ke-i
        jMin = i;
        for (int j=i+1; j<size; j++)
        {
            //
            if (arr[j]<arr[jMin])
            {
                jMin = j;
            }
        }
        if (jMin!=i)
        {
            temp = arr[i];
            arr[i] = arr[jMin];
            arr[jMin] = temp;
        }
    }
}