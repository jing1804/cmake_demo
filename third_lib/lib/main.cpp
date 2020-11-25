#include "hello_third_static_lib.h"
#include "hello_third_share_lib.h"
int main(int argc, char** argv){
	hello_third_static_lib();
	hello_third_share_lib();
	return 0;
}
