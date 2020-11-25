#include <iostream>
#include "hello_static_library.h"
#include "hello_share_library.h"
using namespace std;

int main(int argc, char** argv){
	hello_static_library();
	hello_share_library();
	return 0;
}
