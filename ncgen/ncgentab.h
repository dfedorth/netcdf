/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_NCG_NCGEN_TAB_H_INCLUDED
# define YY_NCG_NCGEN_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int ncgdebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NC_UNLIMITED_K = 258,
     CHAR_K = 259,
     BYTE_K = 260,
     SHORT_K = 261,
     INT_K = 262,
     FLOAT_K = 263,
     DOUBLE_K = 264,
     UBYTE_K = 265,
     USHORT_K = 266,
     UINT_K = 267,
     INT64_K = 268,
     UINT64_K = 269,
     IDENT = 270,
     TERMSTRING = 271,
     CHAR_CONST = 272,
     BYTE_CONST = 273,
     SHORT_CONST = 274,
     INT_CONST = 275,
     INT64_CONST = 276,
     UBYTE_CONST = 277,
     USHORT_CONST = 278,
     UINT_CONST = 279,
     UINT64_CONST = 280,
     FLOAT_CONST = 281,
     DOUBLE_CONST = 282,
     DIMENSIONS = 283,
     VARIABLES = 284,
     NETCDF = 285,
     DATA = 286,
     TYPES = 287,
     COMPOUND = 288,
     ENUM = 289,
     OPAQUE = 290,
     OPAQUESTRING = 291,
     GROUP = 292,
     PATH = 293,
     FILLMARKER = 294,
     _FILLVALUE = 295,
     _FORMAT = 296,
     _STORAGE = 297,
     _CHUNKSIZES = 298,
     _DEFLATELEVEL = 299,
     _SHUFFLE = 300,
     _ENDIANNESS = 301,
     _NOFILL = 302,
     _FLETCHER32 = 303,
     DATASETID = 304
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 131 "ncgen.y"

Symbol* sym;
unsigned long  size; /* allow for zero size to indicate e.g. UNLIMITED*/
long           mark; /* track indices into the sequence*/
int            nctype; /* for tracking attribute list type*/
Datalist*      datalist;
Constant       constant;


/* Line 2058 of yacc.c  */
#line 116 "ncgen.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE ncglval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int ncgparse (void *YYPARSE_PARAM);
#else
int ncgparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int ncgparse (void);
#else
int ncgparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_NCG_NCGEN_TAB_H_INCLUDED  */
