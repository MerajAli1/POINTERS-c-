//Write a program to print the address of a variable whose value is input from user.
/*#include <iostream>

using namespace std;

int main()
{

    int a;
    cout << "ENTER VALUE TO FIND ADDRESS: " << endl;
    cin>>a;
    int* aPtr=&a;
    cout << "THE ADDRESS OF ENTERED VALUE IS: " <<aPtr<< endl;
    return 0;
}*/
    //Write a function which will take pointer and display the number on screen.
    //Take number from user and print it on screen using that function.
/*#include <iostream>

using namespace std;
  void inp(int *a){
    cout<<*a<<endl;
    }
int main()
{
    int x;
    cout<<"ENTER NUMBER: ";
    cin>>x;
    inp(&x);
    return 0;
}*/

//Write a program to find out the greatest and the smallest among three numbers using pointers.
/*#include <iostream>
using namespace std;
// Function to find the greatest and smallest numbers using pointers
void findMinMax(int* num1, int* num2, int* num3, int* min, int* max) {
    // Finding the minimum number
    *min = *num1;
    if (*num2 < *min) {
        *min = *num2;
    }
    if (*num3 < *min) {
        *min = *num3;
    }

    // Finding the maximum number
    *max = *num1;
    if (*num2 > *max) {
        *max = *num2;
    }
    if (*num3 > *max) {
        *max = *num3;
    }
}

int main() {
    int num1, num2, num3, min, max;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    findMinMax(&num1, &num2, &num3, &min, &max);

    cout << "Greatest number: " << max << endl;
    cout << "Smallest number: " << min << endl;

    return 0;
}
*/

