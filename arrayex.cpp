#include <iostream>

using namespace std;

int main () {
	int array[2][3] ={{1,3,5},{2,4,8}};
	int row = sizeof(array)/sizeof(array[0]);
	int column = sizeof(array[0])/sizeof(array[0][0]);
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j< column; j++){
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
