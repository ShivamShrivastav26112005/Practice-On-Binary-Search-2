
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int x = 3; // target
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // binary searching

    int lo = 0;
    int hi = n - 1;
    bool flag = false;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] == x)
        {
            flag=true;
            cout<<arr[mid]<<endl;;
            cout<<mid;
            break;
        }
        else if (arr[mid] > x)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    if(flag==false)
    cout<<-1;
}


