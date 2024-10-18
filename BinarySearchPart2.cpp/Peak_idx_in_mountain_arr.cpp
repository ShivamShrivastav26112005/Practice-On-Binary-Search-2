// ques-> find peak index in mountain array 
// mountain array-> ele.s in mountain array 1st increasing and than decreasing genrally

// given mountain array 
// 1,3,5,-4,3,44,2,7,41,6,9,12,9,8 

 // Method.1-> T.C.=O(n)


// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int n = 14;
//     int arr[] = {1,3,5,-4,3,44,2,7,41,6,9,12,9,8};
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int max = INT_MIN;
//     int idx=-1;
//     for (int i = 0; i < n; i++)
//     {
//         if ( max<arr[i] )
//         {
//             max = arr[i]; // found max ele.
//             idx=i; // found max index
//     }
//     }
//     cout << max;
//     cout<<endl;
//     cout<<idx;
// }


// // 1 3 5 4 3 1 
// // 5


// // 1 3 5 -4 3 44 2 7 41 6 9 12 9 8 
// // 44 // max ele. of mountain array 
// // 5  // max index of mountain array 





// Method.2->T.C.=O(n)

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 8;
//     int arr[] = {1,3,5,4,3,2,1,0};
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;


// // array me traverse karne ke liye loop -> run 
//     for (int i = 1; i <= n-2; i++)
//      {
//         // if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
//         if(arr[i]>arr[i-1] && arr[i+1]<arr[i])
//         {
//         cout<<arr[i]; //ele.
//         cout<<endl;
//         cout<<i; // index
//         }   
//     }
// }

// // 1 3 5 4 3 2 1 0 
// // 5 // max ele. 
// // 2 // max index of mountain array 





// // Methods.3->
// // USING BINARY SEARCH
// // Methods.3-> T.C.= O(log(n))
// // VERY IMPORTANT BECAUSE HERE USE BINARY SEARCHING


// //  * this code works on when ele.(n) is odd *
// // ** it does not works when ele.(n) is even **


// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 8;
//     int arr[] = {1,3,6,9,7,4,1,0};
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // BINARY SEARCH

//     int lo=1;
//     int hi=n-2;
//   bool flag= false; 

//     while(lo<=hi)
//     {
//         int mid=lo+(hi-lo)/2;
//         if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
//         {
//             flag= true;
//             cout<<arr[mid];
//             cout<<endl;
//             cout<<mid; // mid index 
//             break;
//         }

//      else if(arr[mid]>arr[mid-1] )
//      {
//         lo=mid+1;
//         cout<<arr[mid]; // max ele.
//         cout<<endl;
//         cout<<mid; // max index
//         break;
//      }
//      else 
//      //if(arr[mid]>arr[mid+1])
//      {
//         hi=mid-1;
//         cout<<arr[mid];
//         cout<<endl;
//         cout<<mid;
//         break;
//      }
    
//     if(flag==false)
//     cout<<-1;
// }
// }



// // some times code runs but some times code is not run

// // n=11 (odd) code works properly
// // 1 3 5 6 9 77 4 3 2 1 0 
// // 77
// // 


// // n=9 (odd) code does not works properly
// // 1 3 6 9 7 4 3 1 0 
// // 7
// // 4


// // n=8 (even) code works properly
// // 1 3 6 9 7 4 1 0 
// // 9
// // 3




// Methods.4-> Most efficient 
//  T.C.= O(log(n))
// binary searching use
// it runs when ele.(n) is even or odd


// in this code some error while we changing the array size
// we resolve later




#include <iostream>
using namespace std;
int main()
{
    int n =6;
    int arr[] = {1,3,9,7,4,8};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // BINARY SEARCH

    int lo=1;
    int hi=n-2;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if (arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
        {
            cout<<arr[mid];
            cout<<endl;
            cout<<mid; // mid index 
            break;
        }

     else if(arr[mid]>arr[mid+1])
        hi=mid-1;
     else 
        lo=mid+1;
     }
}

// 1 3 9 7 4 8 
// 9
// 2