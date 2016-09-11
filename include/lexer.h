#ifndef LEXER_H_
#define LEXER_H_
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <string>

// The lexer returns tokens [0-255] if it is an unknown character, otherwise one
// of these for known things.
enum Token {
  tok_eof = -1,

  // commands
  tok_def = -2,
  tok_extern = -3,

  // primary
  tok_identifier = -4,
  tok_number = -5
};

extern std::string IdentifierStr; // Filled in if tok_identifier
extern double NumVal;             // Filled in if tok_number
int gettok(void);


#endif
