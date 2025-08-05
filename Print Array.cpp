// Abir Seth
// 24070123003
// ENTC A1

#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the size of array\n";
    cin>>n;
    int x[n];
    cout<<"Enter the numbers\n";
    int a=0;
    while (a<n){
        cin>>x[a];
        a=a+1;
    }
    cout<<"The output is\n";
    for(int i=0;i<n;i++){
        cout<<x[i];
        cout<<endl;
    }
    return 0;
}

Enter the size of array
7
Enter the numbers
5
7
8
16
78
89
85
The output is
5
7
8
16
78
89
85


=== Code Execution Successful ===
