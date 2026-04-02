#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	int N, nextval;
cout << " enter two numbers" << endl;
	cin >> n1 >> n2;
	cout << "enter number of sequences" << endl;
	cin >> N;
cout << n1 << "\t" << n2 << "\t";

	// TODO
	for ( int i =0; i < N - 2; i++){
		nextval = n1 + n2;
		cout << nextval << "\t";
		n1 = n2;
		n2 = nextval;

	}
	cout << endl;
	return 0;
}
