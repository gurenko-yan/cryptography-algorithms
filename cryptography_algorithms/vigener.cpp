#include <iostream>
#include "vigener.h"
using namespace std;

int main() {
	const int key_size = 3;
	const int msg_size = 5;
	char key[key_size + 1] = "foo";
	char dmsg[msg_size + 1] = "qsatb";
	char emsg[msg_size + 1] = "lemon";

	VIGENER v(&key[0], key_size);
	cout << v.encr(&emsg[0], msg_size) << endl;
	cout << v.decr(&dmsg[0], msg_size) << endl;

	return 0;
}
