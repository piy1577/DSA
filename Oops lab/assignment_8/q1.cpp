#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    fstream sourceone("./source1.txt");
    fstream sourcetwo("./source2.txt");
    vector<int> arr1, arr2;
    int x;
    while (sourceone >> x)
    {
        arr1.push_back(x);
    }
    while (sourcetwo >> x)
    {
        arr2.push_back(x);
    }
    vector<int> target;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            target.push_back(arr1[i]);
            i++;
        }
        else
        {
            target.push_back(arr2[j]);
            j++;
        }
    }

    while (i < arr1.size())
    {
        target.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size())
    {
        target.push_back(arr2[j]);
        j++;
    }
    ofstream targetfile("target.txt");
    i = 0;
    while (i < target.size())
    {
        targetfile << target[i] << " ";
        i++;
    }
    return 0;
}