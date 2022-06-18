#ifndef AST_H
#define AST_H
#include <stdlib.h>
typedef struct AST_STRUCT{
    enum{
        AST_VARIABLE_DEFINITION,
        AST_VARIABLE,
        AST_FUNCTION_CALL,
        AST_STRING,
        AST_COMPOUND
    } type;

    /*AST variable definition*/
    char* variable_definition_variable_name;
    struct AST_STRUCT* variable_definition_value;

    /*AST variable */
    char* variable_name;

    /*AST function call*/
    char* function_call_name;
    struct AST_STRUCT** function_call_arguments;
    size_t function_call_arguments_size;

    /*AST string*/
    char* string_value;

    /*AST compound*/
    struct AST_STRUCT** compound_value;
    size_t compound_size;
} AST_T;

AST_T* init_ast(int type);
#endif