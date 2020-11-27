#include <iostream>
#include "hello_third_src_static_lib.h"
#include "hello_third_src_share_lib.h"
#include "hello_third_static_lib.h"
#include "hello_third_share_lib.h"
#include "hello_world.h"
using namespace std;

int main(int argc, char** argv){
	hello_world();
	hello_third_static_lib();
	hello_third_share_lib();
	hello_third_src_static_lib();
	hello_third_src_share_lib();
	return 0;
}
