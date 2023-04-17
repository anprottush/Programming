#include<iostream>
#include <algorithm>
using namespace std;
struct Item
{
    int value, weight;
    Item(int value, int weight)
    {
        this->value=value;
        this->weight=weight;
    }
};
double cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}

double fractionalKnapsack(int W, struct Item arr[], int n)
{
    sort(arr, arr + n, cmp);
    int curWeight = 0;
    double finalvalue = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (curWeight + arr[i].weight <= W)
        {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }

        else
        {
            int remain = W - curWeight;
            finalvalue += arr[i].value
                          * ((double)remain
                             / (double)arr[i].weight);
            break;
        }
    }

    return finalvalue;
}

int main()
{
    int W = 16;
    Item arr[] = { { 15, 2 }, { 30, 4 }, { 40, 6 },{20,8},{25,10} };

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum value: "<< fractionalKnapsack(W, arr, n);
    return 0;
}
