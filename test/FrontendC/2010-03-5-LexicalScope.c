// RUN: %llvmgcc -S -O0 -g %s -o - | grep DW_TAG_lexical_block | count 2
int foo(int i) {
	if (i) {
		int j = 2;
	}
	else {
		int j = 3;
	}
	return i;
}
