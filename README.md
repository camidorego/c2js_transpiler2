# c2js_transpiler
Implementación de un esquema de traducción dirigida por la sintaxis que permite la traslación de un código en C a un código equivalente en JavaScript, utilizando las herramientas LEX/FLEX y YACC /BISON.

### Para ejecutar el traductor
```
    bison -d yacc.y
    flex lex.l
    gcc -o traductor lex.yy.c yacc.tab.c -lfl
    ./traductor < prueba.c

    

