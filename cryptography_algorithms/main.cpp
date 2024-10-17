#include <iostream>
#include "vigener.h"
using namespace std;

int main() {
	const int key_size = 3;
	const int msg_size = 5;
	char key[key_size + 1] = "foo";
	char msg[msg_size + 1] = "lemon";

	VIGENER v(&key[0], key_size);
	cout << v.encr(&msg[0], msg_size);

	return 0;
}