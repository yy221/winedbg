/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_DBG_DBG_TAB_H_INCLUDED
# define YY_DBG_DBG_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int dbg_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    tCONT = 258,
    tPASS = 259,
    tSTEP = 260,
    tLIST = 261,
    tNEXT = 262,
    tQUIT = 263,
    tHELP = 264,
    tBACKTRACE = 265,
    tALL = 266,
    tINFO = 267,
    tUP = 268,
    tDOWN = 269,
    tENABLE = 270,
    tDISABLE = 271,
    tBREAK = 272,
    tHBREAK = 273,
    tWATCH = 274,
    tRWATCH = 275,
    tDELETE = 276,
    tSET = 277,
    tPRINT = 278,
    tEXAM = 279,
    tABORT = 280,
    tECHO = 281,
    tCLASS = 282,
    tMAPS = 283,
    tSTACK = 284,
    tSEGMENTS = 285,
    tSYMBOL = 286,
    tREGS = 287,
    tALLREGS = 288,
    tWND = 289,
    tLOCAL = 290,
    tEXCEPTION = 291,
    tHANDLE = 292,
    tPROCESS = 293,
    tTHREAD = 294,
    tEOL = 295,
    tEOF = 296,
    tFRAME = 297,
    tSHARE = 298,
    tMODULE = 299,
    tCOND = 300,
    tDISPLAY = 301,
    tUNDISPLAY = 302,
    tDISASSEMBLE = 303,
    tSTEPI = 304,
    tNEXTI = 305,
    tFINISH = 306,
    tSHOW = 307,
    tDIR = 308,
    tWHATIS = 309,
    tSOURCE = 310,
    tPATH = 311,
    tIDENTIFIER = 312,
    tSTRING = 313,
    tINTVAR = 314,
    tNUM = 315,
    tFORMAT = 316,
    tSYMBOLFILE = 317,
    tRUN = 318,
    tATTACH = 319,
    tDETACH = 320,
    tKILL = 321,
    tMAINTENANCE = 322,
    tTYPE = 323,
    tMINIDUMP = 324,
    tNOPROCESS = 325,
    tCHAR = 326,
    tSHORT = 327,
    tINT = 328,
    tLONG = 329,
    tFLOAT = 330,
    tDOUBLE = 331,
    tUNSIGNED = 332,
    tSIGNED = 333,
    tSTRUCT = 334,
    tUNION = 335,
    tENUM = 336,
    OP_LOR = 337,
    OP_LAND = 338,
    OP_EQ = 339,
    OP_NE = 340,
    OP_LE = 341,
    OP_GE = 342,
    OP_SHL = 343,
    OP_SHR = 344,
    OP_SIGN = 345,
    OP_DEREF = 346,
    OP_DRF = 347,
    OP_SCOPE = 348
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 42 "dbg.y" /* yacc.c:1909  */

    struct dbg_lvalue   lvalue;
    char*               string;
    INT_PTR             integer;
    IMAGEHLP_LINE64     listing;
    struct expr*        expression;
    struct type_expr_t  type;

#line 157 "dbg.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE dbg_lval;

int dbg_parse (void);

#endif /* !YY_DBG_DBG_TAB_H_INCLUDED  */
