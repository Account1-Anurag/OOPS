// #include <iostream>
// using namespace std;

// int main(){
//     cout<<"1"<<"  "<<"2"<<"  "<<"3"<<"  "<<"4"<<"  "<<"5"<<endl;
//     cout<<"16"<<" "<<"17"<<" "<<"18"<<" "<<"19"<<" "<<"6"<<endl;
//     cout<<"15"<<" "<<"24"<<" "<<"25"<<" "<<"20"<<" "<<"7"<<endl;
//     cout<<"14"<<" "<<"23"<<" "<<"22"<<" "<<"21"<<" "<<"8"<<endl;
//     cout<<"13"<<" "<<"12"<<" "<<"11"<<" "<<"10"<<" "<<"9"<<endl;
//         return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int matrix[n][n];
    int counter = 1;

    // Fill the matrix with values
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = counter++;
            }
        } else {
            for (int j = n - 1; j >= 0; j--) {
                matrix[i][j] = counter++;
            }
        }
    }

    // Print the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
