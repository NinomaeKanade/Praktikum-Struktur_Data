// NAMA : Rafli Arianto
// NIM  : 23343051

#include <stdio.h>

void bubbleSort(int array[], int size)
{
    for (int step = 0; step < size - 1; ++step)
    {
        for (int i = 0; i < size - step - 1; ++i)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int data[] = {-1, 25, 11, 6, -5};
    int size = sizeof(data) / sizeof(data[0]);
    bubbleSort(data, size);
    printf("Array terurut dari yang terbesar:\n~> ");
    printArray(data, size);
}
