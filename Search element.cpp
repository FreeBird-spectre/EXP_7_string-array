// Abir Seth
// 24070123003
// ENTC A1

#include <iostream>
using namespace std;

int main() {
    int key,i;
    int x[5] = {31,56,98,90,70};
    cout << "Enter the number to find: ";
    cin >> key;
   
    for(i = 0;i<5;i++)
        {if (key == x[i])
        {cout << "Your number found at: " << i+1;
        break;
        }
        }
        if (i==5)
        cout<<"Number not found";
    return 0;
}

Enter the number to find: 70
Your number found at: 5

=== Code Execution Successful ===
