#include <iostream>
using namespace std;

bool ispossible(int arr[], int m, int n, int mid)
{

    int painterCount = 1;
    int unittime = 0;

    for (int i = 0; i < n; i++)
    {

        if (unittime + arr[i] <= mid)
        {
            unittime += arr[i];
        }
        else
        {
            painterCount++;
            if (painterCount > m || arr[i] > mid)
            {
                return false;
            }
            unittime = arr[i];
        }
    }
    return true;
}

int allocateunittime(int arr[], int n, int m)
{

    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
    }

    int e = sum;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (ispossible(arr, m, n, mid))
        {
            ans = mid;
            e = mid - 1; // Possible sol shift to left
        }
        else
        {
            s = mid + 1; // Not possible sol shift to right
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}



int main()
{

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cout << "Enter the no of painters: " << endl;
    cin >> m;

    cout << "The minimum amount of unit time to complete the whole board is: " << allocateunittime(arr, n, m) << endl;

    return 0;
}

// for submitting using test case

bool ispossible(vector<int> &board, int k, int mid){

    int painterCount = 1;
    int boardcount = 0;
    int n= board.size();

    for (int i = 0; i < n; i++)
    {

        if (boardcount + board[i] <= mid)
        {
            boardcount += board[i];
        }
        else
        {
            painterCount++;
            if (painterCount > k || board[i] > mid)
            {
                return false;
            }
            boardcount = board[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &board, int k)
{

    int s = 0;
    int sum = 0;
    int n= board.size();

    for (int i = 0; i < n; i++)
    {

        sum += board[i];
    }

    int e = sum;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (ispossible(board, k, mid))
        {
            ans = mid;
            e = mid - 1; // Possible sol shift to left
        }
        else
        {
            s = mid + 1; // Not possible sol shift to right
        }
        
    }
    return ans;
}



   
