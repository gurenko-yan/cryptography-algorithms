#pragma once
class VIGENER {
public:
	VIGENER(char* key_ptr, int size) {
		string_key = key_ptr;
		key_size = size;
	}
	char* encr(char* m, int sz) {
		return conv(m, sz, 1);
	}

	char* decr(char* m, int sz) {
		return conv(m, sz, -1);
	}

protected:
	char* conv(char* msg, int msg_size, __int8 factor) {
		int offset;
		int key_index;
		char* new_msg = new char[msg_size];

		for (int i = 0; i < msg_size; i++) {
			key_index = i % key_size;
			offset = get_index(msg + i) + factor * get_index(string_key + key_index) + 26;
			offset = offset % 26;

			new_msg[i] = abc_en[offset];
		}

		return new_msg;
	}
	int get_index(char* c) {
		for (int i = 0; i < 26; i++) {
			if (abc_en[i] == *c) {
				return i;
			}
		}
	}

	char* string_key;
	int key_size;


	const char abc_en[27] = "abcdefghijklmnopqrstuvwxyz";
};