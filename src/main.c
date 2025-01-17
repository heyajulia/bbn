#include "chunk.h"
#include "common.h"
#include "debug.h"

int main(int argc, const char *argv[]) {
    Chunk chunk;

    chunk_init(&chunk);

    int constant = add_constant(&chunk, 3.1415926535);
    chunk_write(&chunk, OP_CONSTANT, 123);
    chunk_write(&chunk, constant, 123);
    chunk_write(&chunk, OP_RETURN, 123);

    disassemble_chunk(&chunk, "test chunk");
    chunk_free(&chunk);
}
