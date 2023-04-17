 #include <iostream>

using namespace std;

 	int main() {

    	int rows, cols;

 	cout << "Enter the number of rows: ";

    	cin >> rows;

    	cout << "Enter the number of columns: ";

    	cin >> cols;

        	int table[rows][cols];

    	for (int i = 0; i < rows; i++) {

        	for (int j = 0; j < cols; j++) {

            	table[i][j] = (i+1)*(j+1);

        }

    }

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            cout << table[i][j] << "\t";

        }

        cout << endl;

    }

 return 0;

}
