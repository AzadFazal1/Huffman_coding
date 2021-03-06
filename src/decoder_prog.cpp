/**
 * @file decoder_prog.cpp
 * Decoder program for decoding files compressed with HuffmanTrees.
 *
 */

#include "decoder.h"

using namespace std;

int main( int argc, char ** argv ) {
	vector<string> args( argv, argv + argc );
	return decoder::main( args );
}
