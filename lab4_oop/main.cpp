#include "Sort.h"
#include<iostream>
using namespace std;

void Sort::InsertSort(bool ascendent)
{
    int n = vector.size();
    for (int i = 1; i < n; ++i) {
        int key = vector[i];
        int j = i - 1;

        if (ascendent) {
            while (j >= 0 && vector[j] > key) {
                vector[j + 1] = vector[j];
                j = j - 1;
            }
        }
        else {
            while (j >= 0 && vector[j] < key) {
                vector[j + 1] = vector[j];
                j = j - 1;
            }
        }
        vector[j + 1] = key;
    }
}

void Sort::QuickSort(bool ascendent)
{
    int st = 0;
    int dr = vector.size() - 1;
    if (ascendent)
        if (st < dr)
        {
            int m = (st + dr) / 2;
            int aux = vector[st];
            vector[st] = vector[m];
            vector[m] = aux;
            int i = st, j = dr, d = 0;
            while (i < j)
            {
                if (vector[i] > vector[j])
                {
                    aux = vector[i];
                    vector[i] = vector[j];
                    vector[j] = aux;
                    d = 1 - d;
                }
                i += d;
                j -= 1 - d;
            }
            QuickSort(vector, st, i - 1);
            QuickSort(vector, i + 1, dr);
        }
    else
        if (st < dr)
        {
             int m = (st + dr) / 2;
             int aux = vector[st];
             vector[st] = vector[m];
             vector[m] = aux;
             int i = st, j = dr, d = 0;
             while (i > j)
             {
                  if (vector[i] < vector[j])
                  {
                       aux = vector[i];
                       vector[i] = vector[j];
                       vector[j] = aux;
                       d = 1 - d;
                  }
                  i += d;
                  j -= 1 - d;
             }
             QuickSort(vector, st, i - 1);
             QuickSort(vector, i + 1, dr);
        }
}

void Sort::BubbleSort(bool ascendent)
{
    int n = vector.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (ascendent) {
                if (vector[j] > vector[j + 1]) {
                    swap(vector[j], vector[j + 1]);
                }
            }
            else {
                if (vector[j] < vector[j + 1]) {
                    swap(vector[j], vector[j + 1]);
                }
            }
        }
    }
}

void Sort::Print()
{
    for (int num : vector)
    {
        cout << num << " ";
    }
    cout << std::endl;
}

int Sort::GetElementsCount()
{
    return vector.size();
}

int Sort::GetElementFromIndex(int index)
{
    if (index >= 0 && index < vector.size())
        return vector[index];
    else
        return -1;
}
