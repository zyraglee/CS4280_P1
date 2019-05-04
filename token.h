#ifndef TOKEN_H
#define TOKEN_H

#define MAX 9
#define LIMIT 200

typedef enum {
	IDENTIFIER,
	KEYWORD,
	INT,	
	EQUAL,
	GREATER_THAN,
	LESS_THAN,
	COLON,
	PLUS,
	MINUS,
	STAR,
	SLASH,
	PERCENT,
	DOT,
	LEFT_PARENT,
	RIGHT_PARENT,
	COMMA,
	LEFT_BRACE,
	RIGHT_BRACE,
	SEMICOLON,
	LEFT_BRACKETS,
	RIGHT_BRACKETS,
	
	//keywords
	BEGIN_KEYWORD,
	END_KEYWORD,
	LOOP_KEYWORD,
	VOID_KEYWORD,
	INT_KEYWORD,
	RETURN_KEYWORD,
	READ_KEYWORD,
	OUTPUT_KEYWORD,
	PROGRAM_KEYWORD,
	IFF_KEYWORD,
	THEN_KEYWORD,
	LET_KEYWORD,
	EOT // end of token
} TokenType;

typedef struct {
	TokenType tokenType;
	char instance[100];
	int lineNum;
} Token;

Token* tokens;

#endif