#ifndef CLOX_DEBUG_H_
#define CLOX_DEBUG_H_

#include "chunk.h"

void disassemble_chunk(Chunk* chunk, const char* name);
int disassemble_instruction(Chunk* chunk, int offset);

#endif  // CLOX_DEBUG_H_
