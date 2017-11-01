// Decompiled Web Assembly generated by wasmdec. Preamble:
#include <stdint.h> // For the bit size specific types
#include <math.h> // For certian WASM operations
typedef const char* wasm_table_t; // WASM tables
// Bit size specific types not declared in stdint.h:
typedef float float32_t;
typedef double float64_t;
// C implementation of WASM expressions:
unsigned int _rotl(const unsigned int value, int shift) {
	if ((shift &= sizeof(value) * 8 - 1) == 0)
		return value;
	return (value << shift) | (value >> (sizeof(value)*8 - shift));
}
unsigned int _rotr(const unsigned int value, int shift) {
	if ((shift &= sizeof(value) * 8 - 1) == 0)
		return value;
	return (value >> shift) | (value << (sizeof(value)*8 - shift));
}
#define MAX(a,b) ((a) > (b) ? a : b)
#define MIN(a,b) ((a) < (b) ? a : b)
// Host functions: used to request information from host machine.
extern int32_t host_has_feature(int32_t feature_opcode);
extern void host_grow_memory(int32_t size);
extern int32_t host_get_current_memory(void);
extern int32_t host_get_page_size(void);
// End of preamble

// WASM imports:
/*
	Import 'import$0':
	Module: 'env'
	Base: 'DYNAMICTOP_PTR'
*/
extern int32_t import$0;
/*
	Import 'import$1':
	Module: 'env'
	Base: 'tempDoublePtr'
*/
extern int32_t import$1;
/*
	Import 'import$2':
	Module: 'env'
	Base: 'ABORT'
*/
extern int32_t import$2;
/*
	Import 'import$3':
	Module: 'env'
	Base: 'memoryBase'
*/
extern int32_t import$3;
/*
	Import 'import$4':
	Module: 'env'
	Base: 'tableBase'
*/
extern int32_t import$4;
/*
	Import 'import$5':
	Module: 'global'
	Base: 'NaN'
*/
extern float64_t import$5;
/*
	Import 'import$6':
	Module: 'global'
	Base: 'Infinity'
*/
extern float64_t import$6;
/*
	Import 'import$7':
	Module: 'env'
	Base: 'abortStackOverflow'
*/
extern void import$7(int32_t local_0)
/*
	Import 'import$8':
	Module: 'env'
	Base: '_printf'
*/
extern int32_t import$8(int32_t local_0, int32_t local_1)
/*
	Import 'import$9':
	Module: 'env'
	Base: 'memory'
*/
extern const char* import$9; // <Imported memory>
/*
	Import 'import$10':
	Module: 'env'
	Base: 'table'
*/
extern wasm_table_t import$10; // <Imported table>
// WASM globals:
int32_t global$0 = import$0;
int32_t global$1 = import$1;
int32_t global$2 = import$2;
int32_t global$3 = 0;
int32_t global$4 = 0;
int32_t global$5 = 0;
int32_t global$6 = 0;
int32_t global$7 = 0;
int32_t global$8 = 0;
float64_t global$9 = import$5;
float64_t global$10 = import$6;
int32_t global$11 = 0;
int32_t global$12 = 0;
int32_t global$13 = 0;
int32_t global$14 = 0;
float64_t global$15 = 0.000000;
int32_t global$16 = 0;
float32_t global$17 = 0.000000;
float32_t global$18 = 0.000000;

// WASM functions:

/*
	Function '$stackAlloc'
	Local variables: 1
	Parameters: 1
	Immediate block expressions: 1
*/
int32_t fn_stackAlloc(int32_t local_0) {
	// Parsed WASM function locals:
	int32_t local_1 = 0; // Local with index '1'

	local_1 = global$3;
	global$3 = global$3 + local_0;
	global$3 = global$3 + 15 && -16;
	if (global$3 >= global$4) {
		import$7(local_0);

	} // <No else block>
	return local_1;
}
/*
	Function '$stackSave'
	Local variables: 0
	Parameters: 0
	Immediate block expressions: 1
*/
int32_t fn_stackSave() {
	// Function contains no non-parameter locals
	return global$3;
}
/*
	Function '$stackRestore'
	Local variables: 0
	Parameters: 1
	Immediate block expressions: 1
*/
void fn_stackRestore(int32_t local_0) {
	// Function contains no non-parameter locals
	global$3 = local_0;
}
/*
	Function '$establishStackSpace'
	Local variables: 0
	Parameters: 2
	Immediate block expressions: 1
*/
void fn_establishStackSpace(int32_t local_0, int32_t local_1) {
	// Function contains no non-parameter locals
	global$3 = local_0;
	global$4 = local_1;
}
/*
	Function '$setThrew'
	Local variables: 0
	Parameters: 2
	Immediate block expressions: 1
*/
void fn_setThrew(int32_t local_0, int32_t local_1) {
	// Function contains no non-parameter locals
	if (global$5 == 0) {
	global$5 = local_0;
	global$6 = local_1;

	} // <No else block>
}
/*
	Function '$_main'
	Local variables: 9
	Parameters: 0
	Immediate block expressions: 1
*/
int32_t fn__main() {
	// Parsed WASM function locals:
	int32_t local_0 = 0; // Local with index '0'
	int32_t local_1 = 0; // Local with index '1'
	int32_t local_2 = 0; // Local with index '2'
	int32_t local_3 = 0; // Local with index '3'
	int32_t local_4 = 0; // Local with index '4'
	int32_t local_5 = 0; // Local with index '5'
	int32_t local_6 = 0; // Local with index '6'
	int32_t local_7 = 0; // Local with index '7'
	int32_t local_8 = 0; // Local with index '8'

	local_8 = global$3;
	global$3 = global$3 + 16;
	if (global$3 >= global$4) {
		import$7(16);

	} // <No else block>
	local_6 = local_8;
	local_0 = 0;
	while (1) { // Loop name: 'label$2'
		local_2 = local_1;
		local_3 = local_2 + 1;
		local_1 = local_3;
		local_4 = local_1;
		local_5 = local_4 < 10;
		if (local_5) {
			break;
		} // <No else block>
		break;
	} // End of loop 'label$2'
	/*  Store:
		Offset: 0x00000000
		Align:  0x00000004
		Bytes:  0x00000004
		Atomic: false  */
	local_6 = import$3 + 4; 
	/* Drop routine */
	import$8(import$3 + 0, local_6);
	/* End of drop routine */
	global$3 = local_8;
	return 0;
}
/*
	Function '$runPostSets'
	Local variables: 1
	Parameters: 0
	Immediate block expressions: 1
*/
void fn_runPostSets() {
	// Parsed WASM function locals:
	int32_t local_0 = 0; // Local with index '0'

	// <Nop expression>
}
/*
	Function '$__post_instantiate'
	Local variables: 0
	Parameters: 0
	Immediate block expressions: 1
*/
void fn___post_instantiate() {
	// Function contains no non-parameter locals
	global$3 = import$3 + 32;
	global$4 = global$3 + 5242880;
	fn_runPostSets();
}

/*
	Exported WASM functions:
	Function 'fn___post_instantiate':
		WASM name: '__post_instantiate'
		Export name: '__post_instantiate'

	Function 'fn__main':
		WASM name: '_main'
		Export name: '_main'

	Function 'fn_runPostSets':
		WASM name: 'runPostSets'
		Export name: 'runPostSets'

*/
