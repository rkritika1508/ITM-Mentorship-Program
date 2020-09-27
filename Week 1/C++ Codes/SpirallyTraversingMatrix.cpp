#include <iostream>
using namespace std;

void spiral_traversal(int arr[], int m, int n) {
    int temp[m][n], counter = 0;
    // converting 1D array to 2D array (matrix)
    for (int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            temp[i][j] = arr[counter];
            counter += 1;
        }
    }

    int colStart = 0, rowStart = 0, colLength = n-1, rowLength = m-1, direction = 0;
    int result[m*n];
    counter = 0;
    // there are 4 directions: 0 --> right, 1 --> bottom, 2 --> left, 3 --> up
    while (colStart <= colLength && rowStart <= rowLength) {
        if (direction == 0) { // right
            for(int i=colStart; i<=colLength; i++) {
                result[counter] = temp[rowStart][i];
                counter += 1;
            }
            rowStart += 1;
        }

        else if (direction == 1) { // bottom
            for(int i=rowStart; i<= rowLength; i++) {
                result[counter] = temp[i][colLength];
                counter += 1;
            }
            colLength -= 1;
        }


        else if (direction == 2) { // left
            for(int i=colLength; i>=colStart; i--) {
                result[counter] = temp[rowLength][i];
                counter += 1;
            }
            rowLength -= 1;
        }

        else if (direction == 3) { // up
            for(int i=rowLength; i>=rowStart; i--) {
                result[counter] = temp[i][colStart];
                counter += 1;
            }
            colStart += 1;
        }

        direction = (direction + 1) % 4;
    }

    for(int i=0; i<m*n; i++)
        cout<<result[i]<<" ";
    cout<<"\n";
}

int main() {
	//code
	int t, m, n;
	cin>>t;
	while(t--) {
        cin>>m>>n;
        int arr[m*n];
        for(int i=0; i<m*n; i++)
            cin>>arr[i];
        spiral_traversal(arr, m, n);
	}
	return 0;
}
