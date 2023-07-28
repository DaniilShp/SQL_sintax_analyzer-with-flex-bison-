/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "analyzer.y"

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
void yyerror(char *s, ...);
void emit(char *s, ...);

#line 80 "analyzer.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "analyzer.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NAME = 3,                       /* NAME  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_INTNUM = 5,                     /* INTNUM  */
  YYSYMBOL_BOOL = 6,                       /* BOOL  */
  YYSYMBOL_APPROXNUM = 7,                  /* APPROXNUM  */
  YYSYMBOL_USERVAR = 8,                    /* USERVAR  */
  YYSYMBOL_ASSIGN = 9,                     /* ASSIGN  */
  YYSYMBOL_ANDOP = 10,                     /* ANDOP  */
  YYSYMBOL_11_ = 11,                       /* '!'  */
  YYSYMBOL_COMPARISON = 12,                /* COMPARISON  */
  YYSYMBOL_13_ = 13,                       /* '|'  */
  YYSYMBOL_14_ = 14,                       /* '&'  */
  YYSYMBOL_SHIFT = 15,                     /* SHIFT  */
  YYSYMBOL_16_ = 16,                       /* '+'  */
  YYSYMBOL_17_ = 17,                       /* '-'  */
  YYSYMBOL_18_ = 18,                       /* '*'  */
  YYSYMBOL_19_ = 19,                       /* '/'  */
  YYSYMBOL_20_ = 20,                       /* '%'  */
  YYSYMBOL_21_ = 21,                       /* '^'  */
  YYSYMBOL_UMINUS = 22,                    /* UMINUS  */
  YYSYMBOL_ADD = 23,                       /* ADD  */
  YYSYMBOL_ALL = 24,                       /* ALL  */
  YYSYMBOL_ALTER = 25,                     /* ALTER  */
  YYSYMBOL_ANALYZE = 26,                   /* ANALYZE  */
  YYSYMBOL_AND = 27,                       /* AND  */
  YYSYMBOL_ANY = 28,                       /* ANY  */
  YYSYMBOL_AS = 29,                        /* AS  */
  YYSYMBOL_ASC = 30,                       /* ASC  */
  YYSYMBOL_AUTO_INCREMENT = 31,            /* AUTO_INCREMENT  */
  YYSYMBOL_BEFORE = 32,                    /* BEFORE  */
  YYSYMBOL_BETWEEN = 33,                   /* BETWEEN  */
  YYSYMBOL_BIGINT = 34,                    /* BIGINT  */
  YYSYMBOL_BINARY = 35,                    /* BINARY  */
  YYSYMBOL_BIT = 36,                       /* BIT  */
  YYSYMBOL_BLOB = 37,                      /* BLOB  */
  YYSYMBOL_BOTH = 38,                      /* BOTH  */
  YYSYMBOL_BY = 39,                        /* BY  */
  YYSYMBOL_CALL = 40,                      /* CALL  */
  YYSYMBOL_CASCADE = 41,                   /* CASCADE  */
  YYSYMBOL_CASE = 42,                      /* CASE  */
  YYSYMBOL_CHANGE = 43,                    /* CHANGE  */
  YYSYMBOL_CHAR = 44,                      /* CHAR  */
  YYSYMBOL_CHECK = 45,                     /* CHECK  */
  YYSYMBOL_COLLATE = 46,                   /* COLLATE  */
  YYSYMBOL_COLUMN = 47,                    /* COLUMN  */
  YYSYMBOL_COMMENT = 48,                   /* COMMENT  */
  YYSYMBOL_CONDITION = 49,                 /* CONDITION  */
  YYSYMBOL_CONSTRAINT = 50,                /* CONSTRAINT  */
  YYSYMBOL_CONTINUE = 51,                  /* CONTINUE  */
  YYSYMBOL_CONVERT = 52,                   /* CONVERT  */
  YYSYMBOL_CREATE = 53,                    /* CREATE  */
  YYSYMBOL_CROSS = 54,                     /* CROSS  */
  YYSYMBOL_CURRENT_DATE = 55,              /* CURRENT_DATE  */
  YYSYMBOL_CURRENT_TIME = 56,              /* CURRENT_TIME  */
  YYSYMBOL_CURRENT_TIMESTAMP = 57,         /* CURRENT_TIMESTAMP  */
  YYSYMBOL_CURRENT_USER = 58,              /* CURRENT_USER  */
  YYSYMBOL_CURSOR = 59,                    /* CURSOR  */
  YYSYMBOL_DATABASE = 60,                  /* DATABASE  */
  YYSYMBOL_DATABASES = 61,                 /* DATABASES  */
  YYSYMBOL_DATE = 62,                      /* DATE  */
  YYSYMBOL_DATETIME = 63,                  /* DATETIME  */
  YYSYMBOL_DAY_HOUR = 64,                  /* DAY_HOUR  */
  YYSYMBOL_DAY_MICROSECOND = 65,           /* DAY_MICROSECOND  */
  YYSYMBOL_DAY_MINUTE = 66,                /* DAY_MINUTE  */
  YYSYMBOL_DAY_SECOND = 67,                /* DAY_SECOND  */
  YYSYMBOL_DECIMAL = 68,                   /* DECIMAL  */
  YYSYMBOL_DECLARE = 69,                   /* DECLARE  */
  YYSYMBOL_DEFAULT = 70,                   /* DEFAULT  */
  YYSYMBOL_DELAYED = 71,                   /* DELAYED  */
  YYSYMBOL_DELETE = 72,                    /* DELETE  */
  YYSYMBOL_DESC = 73,                      /* DESC  */
  YYSYMBOL_DESCRIBE = 74,                  /* DESCRIBE  */
  YYSYMBOL_DETERMINISTIC = 75,             /* DETERMINISTIC  */
  YYSYMBOL_DISTINCT = 76,                  /* DISTINCT  */
  YYSYMBOL_DISTINCTROW = 77,               /* DISTINCTROW  */
  YYSYMBOL_DIV = 78,                       /* DIV  */
  YYSYMBOL_DOUBLE = 79,                    /* DOUBLE  */
  YYSYMBOL_DROP = 80,                      /* DROP  */
  YYSYMBOL_DUAL = 81,                      /* DUAL  */
  YYSYMBOL_EACH = 82,                      /* EACH  */
  YYSYMBOL_ELSE = 83,                      /* ELSE  */
  YYSYMBOL_ELSEIF = 84,                    /* ELSEIF  */
  YYSYMBOL_END = 85,                       /* END  */
  YYSYMBOL_ENUM = 86,                      /* ENUM  */
  YYSYMBOL_ESCAPED = 87,                   /* ESCAPED  */
  YYSYMBOL_EXIT = 88,                      /* EXIT  */
  YYSYMBOL_EXPLAIN = 89,                   /* EXPLAIN  */
  YYSYMBOL_FETCH = 90,                     /* FETCH  */
  YYSYMBOL_FLOAT = 91,                     /* FLOAT  */
  YYSYMBOL_FOR = 92,                       /* FOR  */
  YYSYMBOL_FORCE = 93,                     /* FORCE  */
  YYSYMBOL_FOREIGN = 94,                   /* FOREIGN  */
  YYSYMBOL_FROM = 95,                      /* FROM  */
  YYSYMBOL_FULLTEXT = 96,                  /* FULLTEXT  */
  YYSYMBOL_GRANT = 97,                     /* GRANT  */
  YYSYMBOL_GROUP = 98,                     /* GROUP  */
  YYSYMBOL_HAVING = 99,                    /* HAVING  */
  YYSYMBOL_HIGH_PRIORITY = 100,            /* HIGH_PRIORITY  */
  YYSYMBOL_HOUR_MICROSECOND = 101,         /* HOUR_MICROSECOND  */
  YYSYMBOL_HOUR_MINUTE = 102,              /* HOUR_MINUTE  */
  YYSYMBOL_HOUR_SECOND = 103,              /* HOUR_SECOND  */
  YYSYMBOL_INDEX = 104,                    /* INDEX  */
  YYSYMBOL_IF = 105,                       /* IF  */
  YYSYMBOL_IGNORE = 106,                   /* IGNORE  */
  YYSYMBOL_IN = 107,                       /* IN  */
  YYSYMBOL_INFILE = 108,                   /* INFILE  */
  YYSYMBOL_INNER = 109,                    /* INNER  */
  YYSYMBOL_INOUT = 110,                    /* INOUT  */
  YYSYMBOL_INSENSITIVE = 111,              /* INSENSITIVE  */
  YYSYMBOL_INSERT = 112,                   /* INSERT  */
  YYSYMBOL_INT = 113,                      /* INT  */
  YYSYMBOL_INTEGER = 114,                  /* INTEGER  */
  YYSYMBOL_INTERVAL = 115,                 /* INTERVAL  */
  YYSYMBOL_INTO = 116,                     /* INTO  */
  YYSYMBOL_IS = 117,                       /* IS  */
  YYSYMBOL_ITERATE = 118,                  /* ITERATE  */
  YYSYMBOL_JOIN = 119,                     /* JOIN  */
  YYSYMBOL_KEY = 120,                      /* KEY  */
  YYSYMBOL_KEYS = 121,                     /* KEYS  */
  YYSYMBOL_KILL = 122,                     /* KILL  */
  YYSYMBOL_LEADING = 123,                  /* LEADING  */
  YYSYMBOL_LEAVE = 124,                    /* LEAVE  */
  YYSYMBOL_LEFT = 125,                     /* LEFT  */
  YYSYMBOL_LIKE = 126,                     /* LIKE  */
  YYSYMBOL_LIMIT = 127,                    /* LIMIT  */
  YYSYMBOL_LINES = 128,                    /* LINES  */
  YYSYMBOL_LOAD = 129,                     /* LOAD  */
  YYSYMBOL_LOCALTIME = 130,                /* LOCALTIME  */
  YYSYMBOL_LOCALTIMESTAMP = 131,           /* LOCALTIMESTAMP  */
  YYSYMBOL_LOCK = 132,                     /* LOCK  */
  YYSYMBOL_LONG = 133,                     /* LONG  */
  YYSYMBOL_LONGBLOB = 134,                 /* LONGBLOB  */
  YYSYMBOL_LONGTEXT = 135,                 /* LONGTEXT  */
  YYSYMBOL_LOOP = 136,                     /* LOOP  */
  YYSYMBOL_LOW_PRIORITY = 137,             /* LOW_PRIORITY  */
  YYSYMBOL_MATCH = 138,                    /* MATCH  */
  YYSYMBOL_MEDIUMBLOB = 139,               /* MEDIUMBLOB  */
  YYSYMBOL_MEDIUMINT = 140,                /* MEDIUMINT  */
  YYSYMBOL_MEDIUMTEXT = 141,               /* MEDIUMTEXT  */
  YYSYMBOL_MINUTE_MICROSECOND = 142,       /* MINUTE_MICROSECOND  */
  YYSYMBOL_MINUTE_SECOND = 143,            /* MINUTE_SECOND  */
  YYSYMBOL_MOD = 144,                      /* MOD  */
  YYSYMBOL_MODIFIES = 145,                 /* MODIFIES  */
  YYSYMBOL_NATURAL = 146,                  /* NATURAL  */
  YYSYMBOL_NOT = 147,                      /* NOT  */
  YYSYMBOL_O_WRITE_TO_BINLOG = 148,        /* O_WRITE_TO_BINLOG  */
  YYSYMBOL_NULLX = 149,                    /* NULLX  */
  YYSYMBOL_NUMBER = 150,                   /* NUMBER  */
  YYSYMBOL_ON = 151,                       /* ON  */
  YYSYMBOL_ONDUPLICATE = 152,              /* ONDUPLICATE  */
  YYSYMBOL_OPTIMIZE = 153,                 /* OPTIMIZE  */
  YYSYMBOL_OPTION = 154,                   /* OPTION  */
  YYSYMBOL_OPTIONALLY = 155,               /* OPTIONALLY  */
  YYSYMBOL_OR = 156,                       /* OR  */
  YYSYMBOL_ORDER = 157,                    /* ORDER  */
  YYSYMBOL_OUT = 158,                      /* OUT  */
  YYSYMBOL_OUTER = 159,                    /* OUTER  */
  YYSYMBOL_OUTFILE = 160,                  /* OUTFILE  */
  YYSYMBOL_PRECISION = 161,                /* PRECISION  */
  YYSYMBOL_PRIMARY = 162,                  /* PRIMARY  */
  YYSYMBOL_PROCEDURE = 163,                /* PROCEDURE  */
  YYSYMBOL_PURGE = 164,                    /* PURGE  */
  YYSYMBOL_QUICK = 165,                    /* QUICK  */
  YYSYMBOL_READ = 166,                     /* READ  */
  YYSYMBOL_READS = 167,                    /* READS  */
  YYSYMBOL_REAL = 168,                     /* REAL  */
  YYSYMBOL_REFERENCES = 169,               /* REFERENCES  */
  YYSYMBOL_REGEXP = 170,                   /* REGEXP  */
  YYSYMBOL_RELEASE = 171,                  /* RELEASE  */
  YYSYMBOL_RENAME = 172,                   /* RENAME  */
  YYSYMBOL_REPEAT = 173,                   /* REPEAT  */
  YYSYMBOL_REPLACE = 174,                  /* REPLACE  */
  YYSYMBOL_REQUIRE = 175,                  /* REQUIRE  */
  YYSYMBOL_RESTRICT = 176,                 /* RESTRICT  */
  YYSYMBOL_RETURN = 177,                   /* RETURN  */
  YYSYMBOL_REVOKE = 178,                   /* REVOKE  */
  YYSYMBOL_RIGHT = 179,                    /* RIGHT  */
  YYSYMBOL_ROLLUP = 180,                   /* ROLLUP  */
  YYSYMBOL_SCHEMA = 181,                   /* SCHEMA  */
  YYSYMBOL_SCHEMAS = 182,                  /* SCHEMAS  */
  YYSYMBOL_SECOND_MICROSECOND = 183,       /* SECOND_MICROSECOND  */
  YYSYMBOL_SELECT = 184,                   /* SELECT  */
  YYSYMBOL_SENSITIVE = 185,                /* SENSITIVE  */
  YYSYMBOL_SEPARATOR = 186,                /* SEPARATOR  */
  YYSYMBOL_SET = 187,                      /* SET  */
  YYSYMBOL_SHOW = 188,                     /* SHOW  */
  YYSYMBOL_SMALLINT = 189,                 /* SMALLINT  */
  YYSYMBOL_SOME = 190,                     /* SOME  */
  YYSYMBOL_SONAME = 191,                   /* SONAME  */
  YYSYMBOL_SPATIAL = 192,                  /* SPATIAL  */
  YYSYMBOL_SPECIFIC = 193,                 /* SPECIFIC  */
  YYSYMBOL_SQL = 194,                      /* SQL  */
  YYSYMBOL_SQLEXCEPTION = 195,             /* SQLEXCEPTION  */
  YYSYMBOL_SQLSTATE = 196,                 /* SQLSTATE  */
  YYSYMBOL_SQLWARNING = 197,               /* SQLWARNING  */
  YYSYMBOL_SQL_BIG_RESULT = 198,           /* SQL_BIG_RESULT  */
  YYSYMBOL_SQL_CALC_FOUND_ROWS = 199,      /* SQL_CALC_FOUND_ROWS  */
  YYSYMBOL_SQL_SMALL_RESULT = 200,         /* SQL_SMALL_RESULT  */
  YYSYMBOL_SSL = 201,                      /* SSL  */
  YYSYMBOL_STARTING = 202,                 /* STARTING  */
  YYSYMBOL_STRAIGHT_JOIN = 203,            /* STRAIGHT_JOIN  */
  YYSYMBOL_TABLE = 204,                    /* TABLE  */
  YYSYMBOL_TEMPORARY = 205,                /* TEMPORARY  */
  YYSYMBOL_TERMINATED = 206,               /* TERMINATED  */
  YYSYMBOL_TEXT = 207,                     /* TEXT  */
  YYSYMBOL_THEN = 208,                     /* THEN  */
  YYSYMBOL_TIME = 209,                     /* TIME  */
  YYSYMBOL_TIMESTAMP = 210,                /* TIMESTAMP  */
  YYSYMBOL_TINYINT = 211,                  /* TINYINT  */
  YYSYMBOL_TINYTEXT = 212,                 /* TINYTEXT  */
  YYSYMBOL_TINYBLOB = 213,                 /* TINYBLOB  */
  YYSYMBOL_TO = 214,                       /* TO  */
  YYSYMBOL_TRAILING = 215,                 /* TRAILING  */
  YYSYMBOL_TRIGGER = 216,                  /* TRIGGER  */
  YYSYMBOL_UNDO = 217,                     /* UNDO  */
  YYSYMBOL_UNION = 218,                    /* UNION  */
  YYSYMBOL_UNIQUE = 219,                   /* UNIQUE  */
  YYSYMBOL_UNLOCK = 220,                   /* UNLOCK  */
  YYSYMBOL_UNSIGNED = 221,                 /* UNSIGNED  */
  YYSYMBOL_UPDATE = 222,                   /* UPDATE  */
  YYSYMBOL_USAGE = 223,                    /* USAGE  */
  YYSYMBOL_USE = 224,                      /* USE  */
  YYSYMBOL_USING = 225,                    /* USING  */
  YYSYMBOL_UTC_DATE = 226,                 /* UTC_DATE  */
  YYSYMBOL_UTC_TIME = 227,                 /* UTC_TIME  */
  YYSYMBOL_UTC_TIMESTAMP = 228,            /* UTC_TIMESTAMP  */
  YYSYMBOL_VALUES = 229,                   /* VALUES  */
  YYSYMBOL_VARBINARY = 230,                /* VARBINARY  */
  YYSYMBOL_VARCHAR = 231,                  /* VARCHAR  */
  YYSYMBOL_VARYING = 232,                  /* VARYING  */
  YYSYMBOL_WHEN = 233,                     /* WHEN  */
  YYSYMBOL_WHERE = 234,                    /* WHERE  */
  YYSYMBOL_WHILE = 235,                    /* WHILE  */
  YYSYMBOL_WITH = 236,                     /* WITH  */
  YYSYMBOL_WRITE = 237,                    /* WRITE  */
  YYSYMBOL_XOR = 238,                      /* XOR  */
  YYSYMBOL_YEAR = 239,                     /* YEAR  */
  YYSYMBOL_YEAR_MONTH = 240,               /* YEAR_MONTH  */
  YYSYMBOL_ZEROFILL = 241,                 /* ZEROFILL  */
  YYSYMBOL_EXISTS = 242,                   /* EXISTS  */
  YYSYMBOL_FSUBSTRING = 243,               /* FSUBSTRING  */
  YYSYMBOL_FTRIM = 244,                    /* FTRIM  */
  YYSYMBOL_FDATE_ADD = 245,                /* FDATE_ADD  */
  YYSYMBOL_FDATE_SUB = 246,                /* FDATE_SUB  */
  YYSYMBOL_FCOUNT = 247,                   /* FCOUNT  */
  YYSYMBOL_248_ = 248,                     /* ';'  */
  YYSYMBOL_249_ = 249,                     /* '.'  */
  YYSYMBOL_250_ = 250,                     /* '('  */
  YYSYMBOL_251_ = 251,                     /* ')'  */
  YYSYMBOL_252_ = 252,                     /* ','  */
  YYSYMBOL_YYACCEPT = 253,                 /* $accept  */
  YYSYMBOL_stmt_list = 254,                /* stmt_list  */
  YYSYMBOL_expr = 255,                     /* expr  */
  YYSYMBOL_val_list = 256,                 /* val_list  */
  YYSYMBOL_opt_val_list = 257,             /* opt_val_list  */
  YYSYMBOL_trim_ltb = 258,                 /* trim_ltb  */
  YYSYMBOL_interval_exp = 259,             /* interval_exp  */
  YYSYMBOL_case_list = 260,                /* case_list  */
  YYSYMBOL_stmt = 261,                     /* stmt  */
  YYSYMBOL_select_stmt = 262,              /* select_stmt  */
  YYSYMBOL_opt_where = 263,                /* opt_where  */
  YYSYMBOL_opt_groupby = 264,              /* opt_groupby  */
  YYSYMBOL_groupby_list = 265,             /* groupby_list  */
  YYSYMBOL_opt_asc_desc = 266,             /* opt_asc_desc  */
  YYSYMBOL_opt_with_rollup = 267,          /* opt_with_rollup  */
  YYSYMBOL_opt_having = 268,               /* opt_having  */
  YYSYMBOL_opt_orderby = 269,              /* opt_orderby  */
  YYSYMBOL_opt_limit = 270,                /* opt_limit  */
  YYSYMBOL_opt_into_list = 271,            /* opt_into_list  */
  YYSYMBOL_column_list = 272,              /* column_list  */
  YYSYMBOL_select_opts = 273,              /* select_opts  */
  YYSYMBOL_select_expr_list = 274,         /* select_expr_list  */
  YYSYMBOL_select_expr = 275,              /* select_expr  */
  YYSYMBOL_opt_as_alias = 276,             /* opt_as_alias  */
  YYSYMBOL_table_references = 277,         /* table_references  */
  YYSYMBOL_table_reference = 278,          /* table_reference  */
  YYSYMBOL_table_factor = 279,             /* table_factor  */
  YYSYMBOL_opt_as = 280,                   /* opt_as  */
  YYSYMBOL_join_table = 281,               /* join_table  */
  YYSYMBOL_opt_inner_cross = 282,          /* opt_inner_cross  */
  YYSYMBOL_opt_outer = 283,                /* opt_outer  */
  YYSYMBOL_left_or_right = 284,            /* left_or_right  */
  YYSYMBOL_opt_left_or_right_outer = 285,  /* opt_left_or_right_outer  */
  YYSYMBOL_opt_join_condition = 286,       /* opt_join_condition  */
  YYSYMBOL_join_condition = 287,           /* join_condition  */
  YYSYMBOL_index_hint = 288,               /* index_hint  */
  YYSYMBOL_opt_for_join = 289,             /* opt_for_join  */
  YYSYMBOL_index_list = 290,               /* index_list  */
  YYSYMBOL_table_subquery = 291,           /* table_subquery  */
  YYSYMBOL_delete_stmt = 292,              /* delete_stmt  */
  YYSYMBOL_delete_opts = 293,              /* delete_opts  */
  YYSYMBOL_delete_list = 294,              /* delete_list  */
  YYSYMBOL_opt_dot_star = 295,             /* opt_dot_star  */
  YYSYMBOL_insert_stmt = 296,              /* insert_stmt  */
  YYSYMBOL_opt_ondupupdate = 297,          /* opt_ondupupdate  */
  YYSYMBOL_insert_opts = 298,              /* insert_opts  */
  YYSYMBOL_opt_into = 299,                 /* opt_into  */
  YYSYMBOL_opt_col_names = 300,            /* opt_col_names  */
  YYSYMBOL_insert_vals_list = 301,         /* insert_vals_list  */
  YYSYMBOL_insert_vals = 302,              /* insert_vals  */
  YYSYMBOL_insert_asgn_list = 303,         /* insert_asgn_list  */
  YYSYMBOL_replace_stmt = 304,             /* replace_stmt  */
  YYSYMBOL_update_stmt = 305,              /* update_stmt  */
  YYSYMBOL_update_opts = 306,              /* update_opts  */
  YYSYMBOL_update_asgn_list = 307,         /* update_asgn_list  */
  YYSYMBOL_create_database_stmt = 308,     /* create_database_stmt  */
  YYSYMBOL_opt_if_not_exists = 309,        /* opt_if_not_exists  */
  YYSYMBOL_create_table_stmt = 310,        /* create_table_stmt  */
  YYSYMBOL_opt_temporary = 311,            /* opt_temporary  */
  YYSYMBOL_create_col_list = 312,          /* create_col_list  */
  YYSYMBOL_create_definition = 313,        /* create_definition  */
  YYSYMBOL_314_1 = 314,                    /* $@1  */
  YYSYMBOL_column_atts = 315,              /* column_atts  */
  YYSYMBOL_opt_length = 316,               /* opt_length  */
  YYSYMBOL_opt_binary = 317,               /* opt_binary  */
  YYSYMBOL_opt_uz = 318,                   /* opt_uz  */
  YYSYMBOL_opt_csc = 319,                  /* opt_csc  */
  YYSYMBOL_data_type = 320,                /* data_type  */
  YYSYMBOL_enum_list = 321,                /* enum_list  */
  YYSYMBOL_create_select_statement = 322,  /* create_select_statement  */
  YYSYMBOL_opt_ignore_replace = 323,       /* opt_ignore_replace  */
  YYSYMBOL_set_stmt = 324,                 /* set_stmt  */
  YYSYMBOL_set_list = 325,                 /* set_list  */
  YYSYMBOL_set_expr = 326                  /* set_expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2256

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  253
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  300
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  620

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   493


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    11,     2,     2,     2,    20,    14,     2,
     250,   251,    18,    16,   252,    17,   249,    19,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   248,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    21,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    13,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    12,    15,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   281,   281,   282,   286,   287,   288,   289,   290,   291,
     292,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   313,   314,
     315,   316,   319,   320,   321,   322,   323,   325,   327,   328,
     330,   331,   333,   334,   335,   336,   337,   340,   343,   344,
     345,   346,   347,   348,   349,   351,   352,   353,   355,   356,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   368,
     369,   370,   371,   373,   374,   376,   377,   379,   380,   382,
     383,   384,   386,   389,   391,   393,   398,   399,   400,   401,
     404,   406,   409,   410,   411,   413,   414,   416,   417,   418,
     419,   421,   421,   422,   424,   425,   427,   428,   430,   431,
     433,   435,   437,   439,   441,   443,   445,   449,   450,   451,
     453,   454,   455,   456,   458,   459,   461,   462,   465,   466,
     468,   469,   471,   472,   475,   477,   479,   481,   483,   486,
     487,   488,   490,   491,   493,   494,   496,   497,   498,   500,
     501,   503,   504,   507,   509,   511,   513,   515,   516,   518,
     519,   521,   524,   527,   531,   532,   533,   534,   537,   541,
     542,   545,   545,   547,   553,   555,   560,   561,   563,   564,
     565,   566,   567,   569,   569,   571,   572,   574,   575,   577,
     578,   579,   580,   582,   588,   591,   594,   597,   601,   606,
     608,   613,   618,   623,   625,   631,   632,   633,   636,   639,
     642,   645,   651,   654,   656,   659,   660,   665,   667,   670,
     674,   678,   681,   686,   690,   691,   693,   694,   696,   697,
     698,   699,   700,   702,   702,   704,   705,   706,   707,   709,
     711,   713,   715,   717,   719,   720,   721,   722,   725,   726,
     727,   729,   730,   732,   733,   734,   736,   737,   738,   741,
     742,   743,   744,   745,   746,   747,   748,   749,   750,   751,
     752,   753,   754,   755,   756,   757,   758,   759,   760,   761,
     762,   763,   764,   765,   766,   767,   768,   769,   770,   772,
     773,   775,   777,   778,   779,   782,   784,   785,   785,   787,
     789
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NAME", "STRING",
  "INTNUM", "BOOL", "APPROXNUM", "USERVAR", "ASSIGN", "ANDOP", "'!'",
  "COMPARISON", "'|'", "'&'", "SHIFT", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'^'", "UMINUS", "ADD", "ALL", "ALTER", "ANALYZE", "AND", "ANY", "AS",
  "ASC", "AUTO_INCREMENT", "BEFORE", "BETWEEN", "BIGINT", "BINARY", "BIT",
  "BLOB", "BOTH", "BY", "CALL", "CASCADE", "CASE", "CHANGE", "CHAR",
  "CHECK", "COLLATE", "COLUMN", "COMMENT", "CONDITION", "CONSTRAINT",
  "CONTINUE", "CONVERT", "CREATE", "CROSS", "CURRENT_DATE", "CURRENT_TIME",
  "CURRENT_TIMESTAMP", "CURRENT_USER", "CURSOR", "DATABASE", "DATABASES",
  "DATE", "DATETIME", "DAY_HOUR", "DAY_MICROSECOND", "DAY_MINUTE",
  "DAY_SECOND", "DECIMAL", "DECLARE", "DEFAULT", "DELAYED", "DELETE",
  "DESC", "DESCRIBE", "DETERMINISTIC", "DISTINCT", "DISTINCTROW", "DIV",
  "DOUBLE", "DROP", "DUAL", "EACH", "ELSE", "ELSEIF", "END", "ENUM",
  "ESCAPED", "EXIT", "EXPLAIN", "FETCH", "FLOAT", "FOR", "FORCE",
  "FOREIGN", "FROM", "FULLTEXT", "GRANT", "GROUP", "HAVING",
  "HIGH_PRIORITY", "HOUR_MICROSECOND", "HOUR_MINUTE", "HOUR_SECOND",
  "INDEX", "IF", "IGNORE", "IN", "INFILE", "INNER", "INOUT", "INSENSITIVE",
  "INSERT", "INT", "INTEGER", "INTERVAL", "INTO", "IS", "ITERATE", "JOIN",
  "KEY", "KEYS", "KILL", "LEADING", "LEAVE", "LEFT", "LIKE", "LIMIT",
  "LINES", "LOAD", "LOCALTIME", "LOCALTIMESTAMP", "LOCK", "LONG",
  "LONGBLOB", "LONGTEXT", "LOOP", "LOW_PRIORITY", "MATCH", "MEDIUMBLOB",
  "MEDIUMINT", "MEDIUMTEXT", "MINUTE_MICROSECOND", "MINUTE_SECOND", "MOD",
  "MODIFIES", "NATURAL", "NOT", "O_WRITE_TO_BINLOG", "NULLX", "NUMBER",
  "ON", "ONDUPLICATE", "OPTIMIZE", "OPTION", "OPTIONALLY", "OR", "ORDER",
  "OUT", "OUTER", "OUTFILE", "PRECISION", "PRIMARY", "PROCEDURE", "PURGE",
  "QUICK", "READ", "READS", "REAL", "REFERENCES", "REGEXP", "RELEASE",
  "RENAME", "REPEAT", "REPLACE", "REQUIRE", "RESTRICT", "RETURN", "REVOKE",
  "RIGHT", "ROLLUP", "SCHEMA", "SCHEMAS", "SECOND_MICROSECOND", "SELECT",
  "SENSITIVE", "SEPARATOR", "SET", "SHOW", "SMALLINT", "SOME", "SONAME",
  "SPATIAL", "SPECIFIC", "SQL", "SQLEXCEPTION", "SQLSTATE", "SQLWARNING",
  "SQL_BIG_RESULT", "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SSL",
  "STARTING", "STRAIGHT_JOIN", "TABLE", "TEMPORARY", "TERMINATED", "TEXT",
  "THEN", "TIME", "TIMESTAMP", "TINYINT", "TINYTEXT", "TINYBLOB", "TO",
  "TRAILING", "TRIGGER", "UNDO", "UNION", "UNIQUE", "UNLOCK", "UNSIGNED",
  "UPDATE", "USAGE", "USE", "USING", "UTC_DATE", "UTC_TIME",
  "UTC_TIMESTAMP", "VALUES", "VARBINARY", "VARCHAR", "VARYING", "WHEN",
  "WHERE", "WHILE", "WITH", "WRITE", "XOR", "YEAR", "YEAR_MONTH",
  "ZEROFILL", "EXISTS", "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB",
  "FCOUNT", "';'", "'.'", "'('", "')'", "','", "$accept", "stmt_list",
  "expr", "val_list", "opt_val_list", "trim_ltb", "interval_exp",
  "case_list", "stmt", "select_stmt", "opt_where", "opt_groupby",
  "groupby_list", "opt_asc_desc", "opt_with_rollup", "opt_having",
  "opt_orderby", "opt_limit", "opt_into_list", "column_list",
  "select_opts", "select_expr_list", "select_expr", "opt_as_alias",
  "table_references", "table_reference", "table_factor", "opt_as",
  "join_table", "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_into",
  "opt_col_names", "insert_vals_list", "insert_vals", "insert_asgn_list",
  "replace_stmt", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_table_stmt",
  "opt_temporary", "create_col_list", "create_definition", "$@1",
  "column_atts", "opt_length", "opt_binary", "opt_uz", "opt_csc",
  "data_type", "enum_list", "create_select_statement",
  "opt_ignore_replace", "set_stmt", "set_list", "set_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-372)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-220)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     105,   -31,  -372,  -372,  -372,  -372,    37,     2,    99,  -135,
    -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,    17,    17,
    -372,   -76,    38,   233,   233,   131,   209,   -36,  -372,   201,
       3,  -372,  -107,  -372,   -66,   217,   225,    17,   -17,   266,
    -372,  -372,  -372,   -87,  -372,  -372,  -372,  -372,  -372,   273,
     282,  -197,  -372,  -372,  -372,  -372,   279,   720,   720,  -372,
    -372,   720,   309,  -372,  -372,  -372,  -372,  -372,  -372,   720,
    -372,  -372,  -372,  -372,    58,    60,    68,    87,    93,   100,
    1278,   -71,  -372,   720,   720,    37,     4,    12,    -1,     1,
    -141,   223,  -372,  -372,   262,  -372,  -372,  -372,  -372,   357,
     365,  -372,    41,  -159,     3,   390,  -124,   -60,   398,   720,
     720,   595,  -372,  -372,   720,  1485,   -18,   595,   220,   720,
     188,   720,   720,   350,  -372,   720,    14,   720,   720,   720,
     720,   720,   720,   720,   720,   720,   407,   720,   175,    21,
     720,   720,   -53,   720,   720,   720,  -372,     3,   720,  1792,
    1792,  -372,   426,   -67,   194,   -68,   445,     3,  -372,  -372,
    -372,   -48,  -372,     3,   336,   315,  -372,   473,   -96,  -372,
     720,   320,     3,   -28,   -17,   481,   482,  -105,   481,  -104,
    -372,   731,  -372,   236,  1792,  1509,   -11,   720,  -372,   720,
     245,   672,   248,  -372,  -372,  -372,   249,   720,   878,   902,
     250,  1093,  1253,   264,   268,   270,   220,   520,   568,   488,
     619,   215,   215,   494,   494,   494,  -372,  -372,  1531,   433,
    -372,    29,  -372,  2086,   494,   272,   720,   720,  1939,  2086,
    1967,   -28,  -372,    52,   396,   399,   403,  -372,  -372,  -372,
      -9,    -5,   223,   315,   315,   405,   374,     3,  -372,   408,
    -372,  -372,  -372,   526,   232,  -372,   262,  1792,   504,   419,
     -28,  -372,  -372,   535,  -122,  -372,   -10,   298,   397,  -122,
     298,   397,   720,  -372,   720,   720,  -372,  1565,  1712,  -372,
     720,  -372,  -372,  1740,   435,   435,  -372,  -372,   220,   220,
     220,   308,   720,   310,   311,  -372,  -372,   433,  2086,  2086,
     465,   -67,   472,   472,   472,   720,   562,   563,   320,  -372,
    -372,     3,   720,  -111,     3,   -90,    59,   323,   324,   457,
      30,  -372,   573,   220,   720,   720,  -372,  -372,   456,   458,
     576,  -372,  -372,   587,   475,  -109,  -372,  -372,  -109,  -372,
    -372,  1792,  1768,  -372,   720,  1071,   720,   720,   340,   347,
     349,   351,   353,  -372,   400,  -372,  -372,   354,   367,   584,
     502,  -372,   506,   376,   379,   380,  1792,   621,    -3,   419,
    -372,  1792,   720,   381,  -372,  -372,  -111,   232,  -372,   391,
     402,   482,   482,   411,    15,   232,  1929,  -372,  1338,   401,
     924,  -372,  1792,   447,   658,  -372,  -372,  1792,    46,   422,
    -372,  -372,  -372,  1792,   720,  -372,   432,  1300,  -372,  -372,
    -372,  -372,  -372,  -372,  -372,   720,   720,   320,  -372,   670,
     670,   670,   720,   720,   694,  -372,  1792,   482,  -372,    54,
     482,   482,    73,    89,   482,  -372,  -372,   454,   454,   454,
    -372,   454,  -372,  -372,   454,   454,   460,   454,   454,   454,
    -372,   671,  -372,   454,   671,   454,   463,   454,   671,  -372,
    -372,   454,   671,  -372,   464,   466,  -372,  -372,  -372,  -372,
    -372,   720,   720,   481,   564,  -372,   639,   475,  1131,  -372,
    -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -160,
    1792,   419,  -372,    94,   111,   120,  1792,  1792,   695,   129,
      23,   144,   148,  -372,  -372,   157,   703,  -372,  -372,  -372,
    -372,  -372,  -372,   711,  -372,  -372,  -372,  -372,  -372,  -372,
    -372,  -372,   711,  -372,  -372,  -372,  -372,   724,   725,    20,
    1338,  1792,   480,  -372,  1792,  -372,  1792,   171,  -372,   553,
    -372,   618,  -372,   732,  -372,  -372,   720,  -372,  -372,  -372,
    -372,  -372,   176,  -146,    42,  -146,  -146,  -372,   191,  -146,
    -146,  -146,    42,  -146,    42,  -146,   202,  -146,    42,  -146,
      42,   491,   503,  -372,   749,   382,  -372,   607,  -372,   637,
     -70,  -372,  -372,  -372,   482,  -372,  -372,  1792,  -372,   753,
    -372,  -372,   572,   756,  -372,   757,  -372,  -372,  -372,  -372,
    -372,  -372,  -372,  -372,  -372,  -372,  -372,   482,   513,   515,
     764,  -372,    42,  -372,    42,    42,   206,  -372,  -372,  -372
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   224,   167,   178,   178,   108,     0,   178,     0,     0,
      83,   162,   174,   199,   203,   212,   217,   295,   215,   215,
     225,     0,     0,   184,   184,     0,     0,   296,   297,     0,
       0,     1,     0,     2,     0,     0,     0,   215,   171,     0,
     166,   164,   165,     0,   180,   181,   182,   183,   179,     0,
       0,     4,     7,     8,    10,     9,     6,     0,     0,   119,
     109,     0,     0,    80,    81,    79,   110,   111,   112,     0,
     115,   116,   114,   113,     0,     0,     0,     0,     0,     0,
     123,    84,   117,     0,     0,     0,   182,   179,   123,     0,
       0,   124,   126,   127,   133,     3,   216,   213,   214,     0,
       0,   169,    86,     0,     0,     0,   185,   185,     0,    40,
       0,    26,    17,    82,     0,     0,     0,    25,     0,     0,
       0,     0,     0,     0,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   120,     0,     0,   300,
     299,   298,     0,   156,     0,     0,     0,     0,   141,   140,
     144,   148,   145,     0,     0,   142,   132,     0,   292,   172,
       0,    99,     0,    86,   171,     0,     0,     0,     0,     0,
       5,    38,    41,     0,    36,     0,     0,     0,    71,     0,
       0,    38,     0,    57,    55,    56,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,    27,    21,    22,
      24,    11,    12,    13,    14,    15,    23,   121,     0,     0,
      34,     0,    32,    75,    16,     0,     0,     0,    19,    77,
      20,    86,   118,   123,     0,     0,     0,   128,   161,   131,
       0,    86,   125,   142,   142,     0,   135,     0,   143,     0,
     130,   293,   294,     0,   233,   221,   133,    87,     0,   101,
      86,   168,   170,     0,   176,   106,     0,     0,   176,   176,
       0,   176,     0,    47,     0,     0,    69,     0,     0,    46,
       0,    50,    53,     0,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,     0,    35,    33,     0,    76,    78,
      88,   156,   158,   158,   158,     0,     0,     0,    99,   146,
     147,     0,     0,   149,     0,   292,     0,     0,     0,     0,
       0,   226,     0,     0,     0,     0,   163,   173,     0,     0,
       0,   193,   186,     0,     0,   176,   198,   201,   176,   202,
      39,    73,     0,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    37,    42,    44,     0,     0,     0,
      97,   129,     0,     0,     0,     0,   208,     0,     0,   101,
     138,   136,     0,     0,   134,   150,     0,   233,   223,     0,
       0,     0,     0,     0,   292,   233,     0,   291,    92,   100,
     102,   195,   194,     0,     0,   107,   190,   189,     0,     0,
     175,   200,    70,    74,     0,    51,     0,     0,    58,    59,
      31,    29,    30,    43,    45,     0,     0,    99,   157,     0,
       0,     0,     0,     0,     0,   204,   151,     0,   137,     0,
       0,     0,     0,     0,     0,   220,   227,   248,   248,   248,
     280,   248,   270,   273,   248,   248,     0,   248,   248,   248,
     282,   251,   281,   248,   251,   248,     0,   248,   251,   271,
     272,   248,   251,   279,     0,     0,   274,   235,    93,    94,
      90,     0,     0,     0,     0,   187,     0,     0,     0,    54,
      60,    61,    62,    63,    66,    67,    68,    65,    64,    95,
      98,   101,   159,     0,     0,     0,   209,   210,     0,     0,
     292,     0,     0,   230,   229,     0,     0,   253,   277,   259,
     256,   253,   253,     0,   253,   253,   253,   252,   256,   253,
     256,   253,     0,   253,   256,   253,   256,     0,     0,   234,
      92,   103,   177,   197,   196,   192,   191,     0,    52,     0,
      89,   104,   155,     0,   154,   153,     0,   152,   222,   231,
     232,   228,     0,   265,   275,   269,   267,   289,     0,   268,
     263,   264,   286,   262,   285,   266,     0,   261,   284,   260,
     283,     0,     0,   242,     0,     0,   246,     0,   237,     0,
       0,    91,   188,    96,     0,    85,   160,   211,   249,     0,
     254,   255,     0,     0,   256,     0,   256,   278,   256,   247,
     238,   239,   241,   240,   236,   245,   244,     0,   105,     0,
       0,   258,   287,   290,   288,   276,     0,   250,   257,   243
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -372,  -372,   -25,   -72,  -372,  -372,   484,   655,   763,   205,
     -22,  -372,   358,   242,  -372,  -372,  -285,  -335,  -372,  -370,
    -372,  -372,   626,   -74,   123,   625,  -101,   522,  -372,  -372,
     222,  -372,  -372,  -372,   415,   486,   166,    51,  -372,  -372,
    -372,   754,   622,  -372,   289,   261,   771,   690,   529,   325,
    -177,  -372,  -372,  -372,  -372,  -372,   265,  -372,  -372,   423,
     416,  -372,  -372,   210,  -371,   269,   142,  -372,   281,  -302,
    -372,  -372,  -372,   719
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     8,   181,   182,   183,   197,   348,   116,     9,    10,
     171,   360,   389,   470,   540,   417,   259,   326,   585,   266,
      25,    81,    82,   146,    90,    91,    92,   167,    93,   164,
     249,   165,   245,   374,   375,   237,   363,   493,    94,    11,
      22,    43,   101,    12,   331,    23,    49,   177,   335,   398,
     264,    13,    14,    30,   241,    15,    35,    16,    21,   320,
     321,   322,   529,   507,   518,   553,   554,   467,   558,   255,
     256,    17,    27,    28
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,   269,   124,   305,    88,  -205,    88,  -207,   104,   423,
     251,   432,   433,   378,   153,  -206,   251,    51,    52,    53,
      54,    55,    56,   369,   147,    57,   234,   220,   136,    18,
     329,    58,   111,   112,   425,   295,   113,   115,   203,   235,
     372,    38,   204,   329,   117,    26,   156,   192,   196,    61,
     606,   573,   108,   109,   225,   124,    62,   499,   149,   150,
     501,   502,   246,   175,   505,   187,   172,   188,   574,    63,
      64,    65,   275,   226,   276,   590,   539,   243,   252,     5,
       5,   136,   435,   520,   252,   184,   592,   524,   593,   185,
     575,   526,   471,   105,   191,   591,   198,   199,   201,    31,
     202,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   157,   218,    33,   373,   223,   224,   227,   228,   229,
     230,   251,    34,    80,   267,   270,   176,   178,    37,   251,
     330,   244,   491,    39,    51,    52,    53,    54,    55,    56,
     576,    95,    57,   399,    40,   257,   313,   293,    58,    59,
      19,   261,     1,   253,   254,    60,   541,   236,     1,   301,
     377,    69,   277,   379,   278,   105,    61,   577,   221,   578,
     222,     2,   283,    62,    20,    41,    96,     2,   296,   380,
     607,   148,   579,   239,   157,     5,    63,    64,    65,   252,
     176,    51,    52,    53,    54,    55,    56,   252,   548,    57,
     340,   298,   299,    42,   205,    58,   170,    66,    67,   300,
     370,     3,   155,   376,   608,   189,    85,     3,    83,   308,
      97,    84,   189,    61,   157,   357,   193,   173,    98,   170,
      62,    68,   100,   132,   133,   134,   135,   616,   327,   580,
     306,   332,   333,    63,    64,    65,   424,   307,   152,   341,
     342,    89,  -205,    89,  -207,   345,    74,    75,    76,    77,
      78,    79,  -206,  -218,   206,    24,  -171,   354,    29,   102,
     231,  -219,    44,     4,   406,   170,   106,   158,    69,     4,
     366,   384,   385,     5,    36,   107,     6,   371,   110,     5,
     100,   166,     6,  -171,   154,   260,   532,   475,   476,   388,
     390,    45,    99,   392,    44,   500,   385,    86,   118,   397,
     119,   194,    51,    52,    53,    54,    55,    56,   120,   403,
      57,     7,   407,   190,   503,   333,    58,     7,   316,    70,
      71,    72,   159,    45,    73,    69,   317,   121,    87,    46,
     504,   333,  -139,   122,    61,   542,   543,   426,   160,    47,
     123,    62,   318,    51,    52,    53,    54,    55,    56,   141,
     168,    57,   544,   543,    63,    64,    65,    58,   200,   161,
      48,   545,   543,    74,    75,    76,    77,    78,    79,   478,
     547,   333,   268,   169,   271,    61,   600,   601,   602,   603,
     388,   490,    62,   174,   319,   549,   333,   496,   497,   550,
     333,   180,   162,   195,     5,    63,    64,    65,   551,   333,
     217,   291,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   582,   476,   294,   219,   163,   588,   589,   233,
      74,    75,    76,    77,    78,    79,    51,    52,    53,    54,
      55,    56,   594,   595,    57,   238,   530,   531,   240,   534,
      58,   536,   397,   596,   595,   247,    69,   619,   333,    51,
      52,    53,    54,    55,    56,   309,   310,    57,    61,   364,
     365,   494,   495,    58,   248,    62,   250,   258,    51,    52,
      53,    54,    55,    56,   263,   265,    57,   273,    63,    64,
      65,    61,    58,   350,   351,   352,   279,    69,    62,   281,
     282,   286,   358,   129,   130,   131,   132,   133,   134,   135,
      61,    63,    64,    65,   288,   135,   302,    62,   289,   303,
     290,   587,   297,   304,   311,   312,   391,   314,   387,   315,
      63,    64,    65,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   114,   324,   141,   396,   325,   328,   334,   329,
     347,    74,    75,    76,    77,    78,    79,   336,   337,   353,
     339,   355,   356,   359,   362,   367,   368,    51,    52,    53,
      54,    55,    56,   381,   382,    57,   386,   383,   393,   394,
      69,    58,   128,   129,   130,   131,   132,   133,   134,   135,
     395,   408,    74,    75,    76,    77,    78,    79,   409,    61,
     410,   416,   411,    69,   412,   413,    62,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,     5,   414,    63,
      64,    65,    69,   415,   400,   418,   419,   401,   137,   420,
     421,   427,   141,   422,   533,   130,   131,   132,   133,   134,
     135,   430,    51,    52,    53,    54,    55,    56,   508,   509,
      57,   510,   431,   471,   511,   512,    58,   514,   515,   516,
     562,   434,   564,   519,   141,   521,   568,   523,   570,   473,
     474,   525,   477,   492,    61,    74,    75,    76,    77,    78,
      79,    62,   125,   479,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,    63,    64,    65,   498,    74,    75,
      76,    77,    78,    79,   506,   137,   517,   546,   552,   535,
     513,    69,   141,   522,   527,   557,   528,    74,    75,    76,
      77,    78,    79,    51,    52,    53,    54,    55,    56,   571,
     572,    57,   330,   583,   584,   586,   612,    58,   614,   141,
     615,   125,   597,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   599,   598,    61,   604,   605,   609,   610,
     611,   613,    62,   141,   137,   333,   617,   280,   618,   349,
     186,    32,   581,   489,   232,    63,    64,    65,   323,   138,
     555,   556,   242,   559,   560,   561,    69,   361,   563,   139,
     565,   428,   567,   103,   569,    50,   262,   179,   140,   338,
     429,   436,   537,   566,   151,     0,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,   141,     0,     0,   142,
       0,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,     0,
       0,     0,   144,     0,     0,     0,     0,     0,   139,     0,
       0,     0,     0,     0,     0,     0,     0,   140,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,     0,     0,     0,   141,     0,     0,   142,     0,
       0,    74,    75,    76,    77,    78,    79,   143,   125,     0,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
       0,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     145,   137,   125,     0,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   272,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   125,   137,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   137,     0,     0,
       0,     0,    74,    75,    76,    77,    78,    79,     0,   145,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   272,     0,   138,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   139,     0,     0,     0,     0,
       0,     0,     0,     0,   140,     0,     0,     0,     0,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   139,
       0,     0,   141,     0,     0,   142,     0,     0,   140,     0,
       0,   138,     0,     0,   143,     0,     0,     0,     0,     0,
       0,   139,     0,     0,     0,     0,   141,     0,   144,   142,
     140,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   141,     0,
       0,   142,   144,     0,     0,     0,     0,     0,     0,     0,
     143,   125,     0,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,     0,   144,     0,     0,     0,     0,     0,
       0,     0,     0,   125,   137,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,     0,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   137,     0,     0,     0,
     284,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     145,   125,     0,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,     0,   285,     0,     0,     0,     0,     0,
       0,     0,   145,   404,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   472,     0,   138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   139,     0,
       0,     0,     0,     0,     0,     0,     0,   140,     0,     0,
     138,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     139,     0,     0,     0,     0,   141,     0,     0,   142,   140,
       0,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   141,   138,     0,
     142,   144,     0,     0,     0,     0,     0,     0,   139,   143,
       0,     0,     0,     0,     0,     0,     0,   140,     0,     0,
       0,     0,     0,   144,     0,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   141,     0,     0,   142,     0,
       0,   124,     0,     0,     0,     0,   137,   143,   125,     0,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
       0,   144,     0,     0,     0,     0,     0,   136,     0,   145,
     125,   137,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   405,     0,     0,     0,     0,     0,     0,     0,
       0,   145,     0,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   287,     0,     0,     0,   125,     0,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     138,     0,     0,     0,   480,   481,   482,   483,   468,   145,
     139,   137,     0,     0,     0,     0,     0,     0,     0,   140,
       0,     0,   538,     0,     0,   138,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   139,     0,   141,     0,     0,
     142,   484,   485,   486,   140,     0,     0,   138,     0,     0,
       0,   469,     0,     0,     0,     0,     0,   139,     0,     0,
       0,     0,   141,   144,     0,   142,   140,     0,     0,     0,
       0,     0,     0,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   141,   138,     0,   142,   144,     0,
       0,     0,     0,     0,     0,   139,   143,     0,     0,     0,
       0,     0,     0,     0,   140,     0,     0,     0,     0,     0,
     144,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   141,     0,     0,   142,     0,     0,     0,     0,
       0,     0,     0,     0,   143,   125,     0,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,     0,   144,     0,
       0,     0,     0,     0,     0,     0,   145,     0,   137,   125,
       0,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,     0,     0,     0,     0,     0,     0,     0,   145,   487,
     488,   125,   137,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,     0,     0,     0,     0,     0,   292,     0,
       0,     0,     0,     0,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,   145,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,     0,     0,     0,
       0,     0,   138,     0,     0,     0,     0,     0,   137,     0,
       0,     0,   139,     0,     0,     0,     0,     0,     0,     0,
       0,   140,     0,     0,     0,     0,   138,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   139,     0,     0,   141,
       0,     0,   142,     0,     0,   140,     0,     0,   138,     0,
       0,   143,     0,     0,     0,     0,     0,     0,   139,     0,
     343,     0,     0,   141,     0,   144,   142,   140,     0,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,     0,
       0,     0,   138,     0,     0,   141,     0,     0,   142,   144,
       0,     0,   139,     0,     0,     0,     0,   143,     0,     0,
       0,   140,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   144,     0,     0,     0,     0,     0,     0,     0,   141,
       0,     0,   142,     0,     0,     0,     0,   274,   114,     0,
       0,   143,   125,   145,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,     0,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   137,     0,   145,     0,     0,
     125,     0,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,     0,     0,     0,     0,     0,     0,     0,   145,
       0,     0,     0,   137,     0,     0,     0,     0,   125,     0,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   137,   125,   145,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,     0,     0,     0,     0,     0,   138,
       0,     0,     0,     0,     0,   137,     0,     0,     0,   139,
       0,     0,     0,     0,     0,   346,     0,     0,   140,     0,
       0,     0,     0,     0,     0,     0,     0,   138,     0,     0,
       0,     0,     0,   402,     0,     0,   141,   139,     0,   142,
       0,     0,     0,     0,     0,     0,   140,     0,   143,     0,
       0,     0,     0,     0,     0,   138,     0,     0,     0,     0,
       0,     0,   144,     0,   141,   139,     0,   142,     0,     0,
       0,     0,     0,     0,   140,     0,   143,     0,     0,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   139,
     144,     0,   141,     0,     0,   142,     0,     0,   140,     0,
     344,     0,     0,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   141,     0,   144,   142,
       0,     0,     0,     0,     0,     0,     0,     0,   143,   125,
     145,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,     0,   144,   437,   438,   439,   440,     0,     0,     0,
       0,     0,   137,   441,     0,     0,     0,   125,   145,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,     0,
       0,   442,   443,     0,     0,     0,     0,   444,     0,     0,
     137,     0,     0,     0,     0,     0,   145,     0,   445,     0,
       0,     0,     0,     0,     0,   446,     0,     0,     0,     0,
     447,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   448,   449,     0,     0,   138,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   139,     0,     0,     0,
       0,     0,     0,   450,   451,   140,     0,     0,   452,   453,
     454,     0,     0,     0,   138,     0,     0,     0,     0,     0,
       0,     0,     0,   141,   139,     0,   142,     0,     0,     0,
       0,     0,     0,   140,     0,     0,     0,   455,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,     0,   144,
       0,   141,     0,     0,   142,     0,   456,     0,   457,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   458,   144,   459,   460,
     461,   462,   463,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   464,
     465,     0,     0,     0,     0,     0,     0,     0,   466,     0,
       0,     0,     0,     0,     0,     0,     0,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -220,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -220,     0,     0,     0,     0,     0,     0,
       0,     0,  -220,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     141,     0,     0,   142,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -220
};

static const yytype_int16 yycheck[] =
{
      25,   178,     3,    12,     3,     3,     3,     3,    95,    12,
     106,   381,   382,   315,    88,     3,   106,     3,     4,     5,
       6,     7,     8,   308,    95,    11,    93,     6,    29,    60,
     152,    17,    57,    58,   369,     6,    61,    62,    24,   106,
     151,     3,    28,   152,    69,     8,   187,   119,   120,    35,
     120,    31,   249,   250,   107,     3,    42,   427,    83,    84,
     430,   431,   163,   187,   434,    83,   225,    85,    48,    55,
      56,    57,    83,   126,    85,   221,   236,   125,   174,   184,
     184,    29,   384,   454,   174,   110,    44,   458,    46,   114,
      70,   462,   252,   252,   119,   241,   121,   122,   123,     0,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   252,   137,   248,   225,   140,   141,   170,   143,   144,
     145,   106,   105,   148,   229,   229,   250,   187,   204,   106,
     252,   179,   417,    95,     3,     4,     5,     6,     7,     8,
     120,   248,    11,   252,   106,   170,   247,   219,    17,    18,
     181,   173,    53,   249,   250,    24,   491,   224,    53,   233,
     250,   147,   187,   104,   189,   252,    35,   147,   147,   149,
     149,    72,   197,    42,   205,   137,   242,    72,   149,   120,
     250,   252,   162,   251,   252,   184,    55,    56,    57,   174,
     250,     3,     4,     5,     6,     7,     8,   174,   500,    11,
     272,   226,   227,   165,   190,    17,   234,    76,    77,   231,
     311,   112,    89,   314,   584,   233,   252,   112,     9,   241,
       3,    12,   233,    35,   252,   297,    38,   104,     3,   234,
      42,   100,   249,    18,    19,    20,    21,   607,   260,   219,
     249,   251,   252,    55,    56,    57,   249,   252,   249,   274,
     275,   250,   250,   250,   250,   280,   242,   243,   244,   245,
     246,   247,   250,   248,   250,     4,   225,   292,     7,     3,
     147,   248,    71,   174,   346,   234,     3,    54,   147,   174,
     305,   251,   252,   184,    19,     3,   187,   312,     9,   184,
     249,    29,   187,   252,    89,   172,   473,   251,   252,   324,
     325,   100,    37,   328,    71,   251,   252,   106,   250,   334,
     250,   123,     3,     4,     5,     6,     7,     8,   250,   344,
      11,   222,   347,   118,   251,   252,    17,   222,    96,   198,
     199,   200,   109,   100,   203,   147,   104,   250,   137,   106,
     251,   252,   119,   250,    35,   251,   252,   372,   125,   116,
     250,    42,   120,     3,     4,     5,     6,     7,     8,   144,
       3,    11,   251,   252,    55,    56,    57,    17,    18,   146,
     137,   251,   252,   242,   243,   244,   245,   246,   247,   404,
     251,   252,   177,    18,   179,    35,     4,     5,     6,     7,
     415,   416,    42,     3,   162,   251,   252,   422,   423,   251,
     252,     3,   179,   215,   184,    55,    56,    57,   251,   252,
       3,   206,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   251,   252,   219,   250,   203,   251,   252,     3,
     242,   243,   244,   245,   246,   247,     3,     4,     5,     6,
       7,     8,   251,   252,    11,   251,   471,   472,     3,   474,
      17,   476,   477,   251,   252,   119,   147,   251,   252,     3,
       4,     5,     6,     7,     8,   243,   244,    11,    35,   303,
     304,   420,   421,    17,   159,    42,     3,   157,     3,     4,
       5,     6,     7,     8,     3,     3,    11,   251,    55,    56,
      57,    35,    17,   288,   289,   290,   251,   147,    42,   251,
     251,   251,   297,    15,    16,    17,    18,    19,    20,    21,
      35,    55,    56,    57,   250,    21,   120,    42,   250,   120,
     250,   546,   250,   120,   119,   151,    70,   119,   323,     3,
      55,    56,    57,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   233,    39,   144,    70,   127,    12,   250,   152,
     115,   242,   243,   244,   245,   246,   247,   268,   269,   251,
     271,   251,   251,    98,    92,     3,     3,     3,     4,     5,
       6,     7,     8,   250,   250,    11,     3,   120,   120,     3,
     147,    17,    14,    15,    16,    17,    18,    19,    20,    21,
       3,   251,   242,   243,   244,   245,   246,   247,   251,    35,
     251,    99,   251,   147,   251,   251,    42,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,   184,   251,    55,
      56,    57,   147,    39,   335,   119,   250,   338,    33,   250,
     250,   250,   144,    12,    70,    16,    17,    18,    19,    20,
      21,   250,     3,     4,     5,     6,     7,     8,   438,   439,
      11,   441,   250,   252,   444,   445,    17,   447,   448,   449,
     518,   250,   520,   453,   144,   455,   524,   457,   526,   222,
      12,   461,   250,     3,    35,   242,   243,   244,   245,   246,
     247,    42,    10,   251,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    55,    56,    57,     3,   242,   243,
     244,   245,   246,   247,   250,    33,    35,    12,     5,    70,
     250,   147,   144,   250,   250,     4,   250,   242,   243,   244,
     245,   246,   247,     3,     4,     5,     6,     7,     8,     5,
       5,    11,   252,   180,   116,     3,   594,    17,   596,   144,
     598,    10,   251,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     4,   251,    35,   149,   120,     5,   187,
       4,     4,    42,   144,    33,   252,   251,    95,     4,   285,
     115,     8,   530,   415,   148,    55,    56,    57,   256,   107,
     511,   512,   157,   514,   515,   516,   147,   301,   519,   117,
     521,   376,   523,    39,   525,    24,   174,   107,   126,   270,
     377,   385,   477,   522,    85,    -1,   242,   243,   244,   245,
     246,   247,    -1,    -1,    -1,    -1,   144,    -1,    -1,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
      -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,   147,    -1,
      -1,   242,   243,   244,   245,   246,   247,   156,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    33,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   252,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    33,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,   242,   243,   244,   245,   246,   247,    -1,   238,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   252,    -1,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,   107,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      -1,    -1,   144,    -1,    -1,   147,    -1,    -1,   126,    -1,
      -1,   107,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,
      -1,   117,    -1,    -1,    -1,    -1,   144,    -1,   170,   147,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,
      -1,   147,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     156,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,   170,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    33,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,   238,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
     252,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,   252,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   238,    92,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   252,    -1,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     117,    -1,    -1,    -1,    -1,   144,    -1,    -1,   147,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,   107,    -1,
     147,   170,    -1,    -1,    -1,    -1,    -1,    -1,   117,   156,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,
      -1,    -1,    -1,   170,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   144,    -1,    -1,   147,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    33,   156,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    29,    -1,   238,
      10,    33,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   251,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   238,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   251,    -1,    -1,    -1,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     107,    -1,    -1,    -1,    64,    65,    66,    67,    30,   238,
     117,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,
      -1,    -1,   251,    -1,    -1,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   117,    -1,   144,    -1,    -1,
     147,   101,   102,   103,   126,    -1,    -1,   107,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,
      -1,    -1,   144,   170,    -1,   147,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,   107,    -1,   147,   170,    -1,
      -1,    -1,    -1,    -1,    -1,   117,   156,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,    -1,    -1,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,   170,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    33,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,
     240,    10,    33,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,   238,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   126,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,   144,
      -1,    -1,   147,    -1,    -1,   126,    -1,    -1,   107,    -1,
      -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
      85,    -1,    -1,   144,    -1,   170,   147,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,    -1,   144,    -1,    -1,   147,   170,
      -1,    -1,   117,    -1,    -1,    -1,    -1,   156,    -1,    -1,
      -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
      -1,    -1,   147,    -1,    -1,    -1,    -1,   208,   233,    -1,
      -1,   156,    10,   238,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,   238,    -1,    -1,
      10,    -1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    10,   238,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,   107,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,   117,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,   144,   117,    -1,   147,
      -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,   156,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,
      -1,    -1,   170,    -1,   144,   117,    -1,   147,    -1,    -1,
      -1,    -1,    -1,    -1,   126,    -1,   156,    -1,    -1,   107,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
     170,    -1,   144,    -1,    -1,   147,    -1,    -1,   126,    -1,
     208,    -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,   170,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    10,
     238,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,   170,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    33,    44,    -1,    -1,    -1,    10,   238,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    62,    63,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,   238,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,   114,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   126,    -1,    -1,   139,   140,
     141,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   144,   117,    -1,   147,    -1,    -1,    -1,
      -1,    -1,    -1,   126,    -1,    -1,    -1,   168,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,   170,
      -1,   144,    -1,    -1,   147,    -1,   187,    -1,   189,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   207,   170,   209,   210,
     211,   212,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,
     231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   239,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    53,    72,   112,   174,   184,   187,   222,   254,   261,
     262,   292,   296,   304,   305,   308,   310,   324,    60,   181,
     205,   311,   293,   298,   298,   273,     8,   325,   326,   298,
     306,     0,   261,   248,   105,   309,   309,   204,     3,    95,
     106,   137,   165,   294,    71,   100,   106,   116,   137,   299,
     299,     3,     4,     5,     6,     7,     8,    11,    17,    18,
      24,    35,    42,    55,    56,    57,    76,    77,   100,   147,
     198,   199,   200,   203,   242,   243,   244,   245,   246,   247,
     255,   274,   275,     9,    12,   252,   106,   137,     3,   250,
     277,   278,   279,   281,   291,   248,   242,     3,     3,   309,
     249,   295,     3,   294,    95,   252,     3,     3,   249,   250,
       9,   255,   255,   255,   233,   255,   260,   255,   250,   250,
     250,   250,   250,   250,     3,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    29,    33,   107,   117,
     126,   144,   147,   156,   170,   238,   276,    95,   252,   255,
     255,   326,   249,   276,   262,   277,   187,   252,    54,   109,
     125,   146,   179,   203,   282,   284,    29,   280,     3,    18,
     234,   263,   225,   277,     3,   187,   250,   300,   187,   300,
       3,   255,   256,   257,   255,   255,   260,    83,    85,   233,
     262,   255,   256,    38,   123,   215,   256,   258,   255,   255,
      18,   255,   255,    24,    28,   190,   250,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,     3,   255,   250,
       6,   147,   149,   255,   255,   107,   126,   170,   255,   255,
     255,   277,   275,     3,    93,   106,   224,   288,   251,   251,
       3,   307,   278,   125,   179,   285,   279,   119,   159,   283,
       3,   106,   174,   249,   250,   322,   323,   255,   157,   269,
     277,   263,   295,     3,   303,     3,   272,   229,   262,   303,
     229,   262,   252,   251,   208,    83,    85,   255,   255,   251,
      95,   251,   251,   255,   252,   252,   251,   251,   250,   250,
     250,   262,    27,   256,   262,     6,   149,   250,   255,   255,
     263,   276,   120,   120,   120,    12,   249,   252,   263,   283,
     283,   119,   151,   279,   119,     3,    96,   104,   120,   162,
     312,   313,   314,   280,    39,   127,   270,   263,    12,   152,
     252,   297,   251,   252,   250,   301,   297,   297,   301,   297,
     256,   255,   255,    85,   208,   255,    95,   115,   259,   259,
     262,   262,   262,   251,   255,   251,   251,   256,   262,    98,
     264,   288,    92,   289,   289,   289,   255,     3,     3,   269,
     279,   255,   151,   225,   286,   287,   279,   250,   322,   104,
     120,   250,   250,   120,   251,   252,     3,   262,   255,   265,
     255,    70,   255,   120,     3,     3,    70,   255,   302,   252,
     297,   297,    85,   255,    92,   251,   256,   255,   251,   251,
     251,   251,   251,   251,   251,    39,    99,   268,   119,   250,
     250,   250,    12,    12,   249,   270,   255,   250,   287,   312,
     250,   250,   272,   272,   250,   322,   313,    34,    35,    36,
      37,    44,    62,    63,    68,    79,    86,    91,   113,   114,
     134,   135,   139,   140,   141,   168,   187,   189,   207,   209,
     210,   211,   212,   213,   230,   231,   239,   320,    30,    73,
     266,   252,   252,   222,    12,   251,   252,   250,   255,   251,
      64,    65,    66,    67,   101,   102,   103,   239,   240,   265,
     255,   269,     3,   290,   290,   290,   255,   255,     3,   272,
     251,   272,   272,   251,   251,   272,   250,   316,   316,   316,
     316,   316,   316,   250,   316,   316,   316,    35,   317,   316,
     317,   316,   250,   316,   317,   316,   317,   250,   250,   315,
     255,   255,   303,    70,   255,    70,   255,   302,   251,   236,
     267,   270,   251,   252,   251,   251,    12,   251,   322,   251,
     251,   251,     5,   318,   319,   318,   318,     4,   321,   318,
     318,   318,   319,   318,   319,   318,   321,   318,   319,   318,
     319,     5,     5,    31,    48,    70,   120,   147,   149,   162,
     219,   266,   251,   180,   116,   271,     3,   255,   251,   252,
     221,   241,    44,    46,   251,   252,   251,   251,   251,     4,
       4,     5,     6,     7,   149,   120,   120,   250,   272,     5,
     187,     4,   319,     4,   319,   319,   272,   251,     4,   251
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   253,   254,   254,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   256,   256,
     257,   257,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   258,   258,   258,   255,   255,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   255,
     255,   255,   255,   260,   260,   255,   255,   255,   255,   255,
     255,   255,   255,   261,   262,   262,   263,   263,   264,   264,
     265,   265,   266,   266,   266,   267,   267,   268,   268,   269,
     269,   270,   270,   270,   271,   271,   272,   272,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   274,   274,   274,
     275,   276,   276,   276,   277,   277,   278,   278,   279,   279,
     279,   279,   280,   280,   281,   281,   281,   281,   281,   282,
     282,   282,   283,   283,   284,   284,   285,   285,   285,   286,
     286,   287,   287,   288,   288,   288,   288,   289,   289,   290,
     290,   291,   261,   292,   293,   293,   293,   293,   292,   294,
     294,   295,   295,   292,   261,   296,   297,   297,   298,   298,
     298,   298,   298,   299,   299,   300,   300,   301,   301,   302,
     302,   302,   302,   296,   303,   303,   303,   303,   296,   261,
     304,   304,   304,   261,   305,   306,   306,   306,   307,   307,
     307,   307,   261,   308,   308,   309,   309,   261,   310,   310,
     310,   310,   310,   310,   311,   311,   312,   312,   313,   313,
     313,   313,   313,   314,   313,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   316,   316,
     316,   317,   317,   318,   318,   318,   319,   319,   319,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   321,
     321,   322,   323,   323,   323,   261,   324,   325,   325,   326,
     326
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     5,     6,
       6,     6,     3,     4,     3,     4,     3,     5,     1,     3,
       0,     1,     5,     6,     5,     6,     4,     4,     4,     4,
       4,     6,     8,     4,     7,     1,     1,     1,     6,     6,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       6,     3,     5,     4,     5,     3,     4,     3,     4,     1,
       1,     1,     2,     1,     3,    11,     0,     2,     0,     4,
       2,     4,     0,     1,     1,     0,     2,     0,     2,     0,
       3,     0,     2,     4,     0,     2,     1,     3,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     1,
       2,     2,     1,     0,     1,     3,     1,     1,     3,     5,
       3,     3,     1,     0,     5,     3,     5,     6,     5,     0,
       1,     1,     0,     1,     1,     1,     2,     2,     0,     0,
       1,     2,     4,     6,     6,     6,     0,     2,     0,     1,
       3,     3,     1,     7,     2,     2,     2,     0,     6,     2,
       4,     0,     2,     7,     1,     8,     0,     4,     0,     2,
       2,     2,     2,     1,     0,     0,     3,     3,     5,     1,
       1,     3,     3,     7,     3,     3,     5,     5,     7,     1,
       8,     7,     7,     1,     8,     0,     2,     2,     3,     5,
       5,     7,     1,     4,     4,     0,     2,     1,     8,    10,
       9,     6,    11,     8,     0,     1,     1,     3,     5,     4,
       4,     5,     5,     0,     4,     0,     3,     2,     3,     3,
       3,     3,     2,     5,     3,     3,     2,     3,     0,     3,
       5,     0,     1,     0,     2,     2,     0,     4,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     3,     5,     2,     4,     1,
       1,     1,     1,     3,     3,     3,     3,     5,     5,     1,
       3,     3,     0,     1,     1,     1,     2,     1,     3,     3,
       3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* expr: NAME  */
#line 286 "analyzer.y"
           { emit("NAME %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2195 "analyzer.tab.c"
    break;

  case 5: /* expr: NAME '.' NAME  */
#line 287 "analyzer.y"
                { emit("FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 2201 "analyzer.tab.c"
    break;

  case 6: /* expr: USERVAR  */
#line 288 "analyzer.y"
          { emit("USERVAR %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2207 "analyzer.tab.c"
    break;

  case 7: /* expr: STRING  */
#line 289 "analyzer.y"
         { emit("STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2213 "analyzer.tab.c"
    break;

  case 8: /* expr: INTNUM  */
#line 290 "analyzer.y"
         { emit("NUMBER %d", (yyvsp[0].intval)); }
#line 2219 "analyzer.tab.c"
    break;

  case 9: /* expr: APPROXNUM  */
#line 291 "analyzer.y"
            { emit("FLOAT %g", (yyvsp[0].floatval)); }
#line 2225 "analyzer.tab.c"
    break;

  case 10: /* expr: BOOL  */
#line 292 "analyzer.y"
       { emit("BOOL %d", (yyvsp[0].intval)); }
#line 2231 "analyzer.tab.c"
    break;

  case 11: /* expr: expr '+' expr  */
#line 295 "analyzer.y"
                    { emit("ADD"); }
#line 2237 "analyzer.tab.c"
    break;

  case 12: /* expr: expr '-' expr  */
#line 296 "analyzer.y"
                { emit("SUB"); }
#line 2243 "analyzer.tab.c"
    break;

  case 13: /* expr: expr '*' expr  */
#line 297 "analyzer.y"
                { emit("MUL"); }
#line 2249 "analyzer.tab.c"
    break;

  case 14: /* expr: expr '/' expr  */
#line 298 "analyzer.y"
                { emit("DIV"); }
#line 2255 "analyzer.tab.c"
    break;

  case 15: /* expr: expr '%' expr  */
#line 299 "analyzer.y"
                { emit("MOD"); }
#line 2261 "analyzer.tab.c"
    break;

  case 16: /* expr: expr MOD expr  */
#line 300 "analyzer.y"
                { emit("MOD"); }
#line 2267 "analyzer.tab.c"
    break;

  case 17: /* expr: '-' expr  */
#line 301 "analyzer.y"
                        { emit("NEG"); }
#line 2273 "analyzer.tab.c"
    break;

  case 18: /* expr: expr ANDOP expr  */
#line 302 "analyzer.y"
                  { emit("AND"); }
#line 2279 "analyzer.tab.c"
    break;

  case 19: /* expr: expr OR expr  */
#line 303 "analyzer.y"
               { emit("OR"); }
#line 2285 "analyzer.tab.c"
    break;

  case 20: /* expr: expr XOR expr  */
#line 304 "analyzer.y"
                { emit("XOR"); }
#line 2291 "analyzer.tab.c"
    break;

  case 21: /* expr: expr '|' expr  */
#line 305 "analyzer.y"
                { emit("BITOR"); }
#line 2297 "analyzer.tab.c"
    break;

  case 22: /* expr: expr '&' expr  */
#line 306 "analyzer.y"
                { emit("BITAND"); }
#line 2303 "analyzer.tab.c"
    break;

  case 23: /* expr: expr '^' expr  */
#line 307 "analyzer.y"
                { emit("BITXOR"); }
#line 2309 "analyzer.tab.c"
    break;

  case 24: /* expr: expr SHIFT expr  */
#line 308 "analyzer.y"
                  { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); }
#line 2315 "analyzer.tab.c"
    break;

  case 25: /* expr: NOT expr  */
#line 309 "analyzer.y"
           { emit("NOT"); }
#line 2321 "analyzer.tab.c"
    break;

  case 26: /* expr: '!' expr  */
#line 310 "analyzer.y"
           { emit("NOT"); }
#line 2327 "analyzer.tab.c"
    break;

  case 27: /* expr: expr COMPARISON expr  */
#line 311 "analyzer.y"
                       { emit("CMP %d", (yyvsp[-1].subtok)); }
#line 2333 "analyzer.tab.c"
    break;

  case 28: /* expr: expr COMPARISON '(' select_stmt ')'  */
#line 313 "analyzer.y"
                                      { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 2339 "analyzer.tab.c"
    break;

  case 29: /* expr: expr COMPARISON ANY '(' select_stmt ')'  */
#line 314 "analyzer.y"
                                          { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2345 "analyzer.tab.c"
    break;

  case 30: /* expr: expr COMPARISON SOME '(' select_stmt ')'  */
#line 315 "analyzer.y"
                                           { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 2351 "analyzer.tab.c"
    break;

  case 31: /* expr: expr COMPARISON ALL '(' select_stmt ')'  */
#line 316 "analyzer.y"
                                          { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 2357 "analyzer.tab.c"
    break;

  case 32: /* expr: expr IS NULLX  */
#line 319 "analyzer.y"
                    { emit("ISNULL"); }
#line 2363 "analyzer.tab.c"
    break;

  case 33: /* expr: expr IS NOT NULLX  */
#line 320 "analyzer.y"
                    { emit("ISNULL"); emit("NOT"); }
#line 2369 "analyzer.tab.c"
    break;

  case 34: /* expr: expr IS BOOL  */
#line 321 "analyzer.y"
               { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 2375 "analyzer.tab.c"
    break;

  case 35: /* expr: expr IS NOT BOOL  */
#line 322 "analyzer.y"
                   { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 2381 "analyzer.tab.c"
    break;

  case 36: /* expr: USERVAR ASSIGN expr  */
#line 323 "analyzer.y"
                      { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2387 "analyzer.tab.c"
    break;

  case 37: /* expr: expr BETWEEN expr AND expr  */
#line 325 "analyzer.y"
                                               { emit("BETWEEN"); }
#line 2393 "analyzer.tab.c"
    break;

  case 38: /* val_list: expr  */
#line 327 "analyzer.y"
               { (yyval.intval) = 1; }
#line 2399 "analyzer.tab.c"
    break;

  case 39: /* val_list: expr ',' val_list  */
#line 328 "analyzer.y"
                    { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2405 "analyzer.tab.c"
    break;

  case 40: /* opt_val_list: %empty  */
#line 330 "analyzer.y"
                        { (yyval.intval) = 0 ;}
#line 2411 "analyzer.tab.c"
    break;

  case 42: /* expr: expr IN '(' val_list ')'  */
#line 333 "analyzer.y"
                               { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 2417 "analyzer.tab.c"
    break;

  case 43: /* expr: expr NOT IN '(' val_list ')'  */
#line 334 "analyzer.y"
                               { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 2423 "analyzer.tab.c"
    break;

  case 44: /* expr: expr IN '(' select_stmt ')'  */
#line 335 "analyzer.y"
                              { emit("CMPANYSELECT 4"); }
#line 2429 "analyzer.tab.c"
    break;

  case 45: /* expr: expr NOT IN '(' select_stmt ')'  */
#line 336 "analyzer.y"
                                  { emit("CMPALLSELECT 3"); }
#line 2435 "analyzer.tab.c"
    break;

  case 46: /* expr: EXISTS '(' select_stmt ')'  */
#line 337 "analyzer.y"
                             { emit("EXISTSSELECT"); if((yyvsp[-3].subtok))emit("NOT"); }
#line 2441 "analyzer.tab.c"
    break;

  case 47: /* expr: NAME '(' opt_val_list ')'  */
#line 340 "analyzer.y"
                                { emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2447 "analyzer.tab.c"
    break;

  case 48: /* expr: FCOUNT '(' '*' ')'  */
#line 343 "analyzer.y"
                         { emit("COUNTALL"); }
#line 2453 "analyzer.tab.c"
    break;

  case 49: /* expr: FCOUNT '(' expr ')'  */
#line 344 "analyzer.y"
                      { emit(" CALL 1 COUNT"); }
#line 2459 "analyzer.tab.c"
    break;

  case 50: /* expr: FSUBSTRING '(' val_list ')'  */
#line 345 "analyzer.y"
                                  { emit("CALL %d SUBSTR", (yyvsp[-1].intval)); }
#line 2465 "analyzer.tab.c"
    break;

  case 51: /* expr: FSUBSTRING '(' expr FROM expr ')'  */
#line 346 "analyzer.y"
                                    { emit("CALL 2 SUBSTR"); }
#line 2471 "analyzer.tab.c"
    break;

  case 52: /* expr: FSUBSTRING '(' expr FROM expr FOR expr ')'  */
#line 347 "analyzer.y"
                                             { emit("CALL 3 SUBSTR"); }
#line 2477 "analyzer.tab.c"
    break;

  case 53: /* expr: FTRIM '(' val_list ')'  */
#line 348 "analyzer.y"
                         { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 2483 "analyzer.tab.c"
    break;

  case 54: /* expr: FTRIM '(' trim_ltb expr FROM val_list ')'  */
#line 349 "analyzer.y"
                                            { emit("CALL 3 TRIM"); }
#line 2489 "analyzer.tab.c"
    break;

  case 55: /* trim_ltb: LEADING  */
#line 351 "analyzer.y"
                  { emit("NUMBER 1"); }
#line 2495 "analyzer.tab.c"
    break;

  case 56: /* trim_ltb: TRAILING  */
#line 352 "analyzer.y"
           { emit("NUMBER 2"); }
#line 2501 "analyzer.tab.c"
    break;

  case 57: /* trim_ltb: BOTH  */
#line 353 "analyzer.y"
       { emit("NUMBER 3"); }
#line 2507 "analyzer.tab.c"
    break;

  case 58: /* expr: FDATE_ADD '(' expr ',' interval_exp ')'  */
#line 355 "analyzer.y"
                                              { emit("CALL 3 DATE_ADD"); }
#line 2513 "analyzer.tab.c"
    break;

  case 59: /* expr: FDATE_SUB '(' expr ',' interval_exp ')'  */
#line 356 "analyzer.y"
                                          { emit("CALL 3 DATE_SUB"); }
#line 2519 "analyzer.tab.c"
    break;

  case 60: /* interval_exp: INTERVAL expr DAY_HOUR  */
#line 358 "analyzer.y"
                                     { emit("NUMBER 1"); }
#line 2525 "analyzer.tab.c"
    break;

  case 61: /* interval_exp: INTERVAL expr DAY_MICROSECOND  */
#line 359 "analyzer.y"
                                { emit("NUMBER 2"); }
#line 2531 "analyzer.tab.c"
    break;

  case 62: /* interval_exp: INTERVAL expr DAY_MINUTE  */
#line 360 "analyzer.y"
                           { emit("NUMBER 3"); }
#line 2537 "analyzer.tab.c"
    break;

  case 63: /* interval_exp: INTERVAL expr DAY_SECOND  */
#line 361 "analyzer.y"
                           { emit("NUMBER 4"); }
#line 2543 "analyzer.tab.c"
    break;

  case 64: /* interval_exp: INTERVAL expr YEAR_MONTH  */
#line 362 "analyzer.y"
                           { emit("NUMBER 5"); }
#line 2549 "analyzer.tab.c"
    break;

  case 65: /* interval_exp: INTERVAL expr YEAR  */
#line 363 "analyzer.y"
                     { emit("NUMBER 6"); }
#line 2555 "analyzer.tab.c"
    break;

  case 66: /* interval_exp: INTERVAL expr HOUR_MICROSECOND  */
#line 364 "analyzer.y"
                                 { emit("NUMBER 7"); }
#line 2561 "analyzer.tab.c"
    break;

  case 67: /* interval_exp: INTERVAL expr HOUR_MINUTE  */
#line 365 "analyzer.y"
                            { emit("NUMBER 8"); }
#line 2567 "analyzer.tab.c"
    break;

  case 68: /* interval_exp: INTERVAL expr HOUR_SECOND  */
#line 366 "analyzer.y"
                            { emit("NUMBER 9"); }
#line 2573 "analyzer.tab.c"
    break;

  case 69: /* expr: CASE expr case_list END  */
#line 368 "analyzer.y"
                              { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 2579 "analyzer.tab.c"
    break;

  case 70: /* expr: CASE expr case_list ELSE expr END  */
#line 369 "analyzer.y"
                                    { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 2585 "analyzer.tab.c"
    break;

  case 71: /* expr: CASE case_list END  */
#line 370 "analyzer.y"
                     { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 2591 "analyzer.tab.c"
    break;

  case 72: /* expr: CASE case_list ELSE expr END  */
#line 371 "analyzer.y"
                               { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 2597 "analyzer.tab.c"
    break;

  case 73: /* case_list: WHEN expr THEN expr  */
#line 373 "analyzer.y"
                               { (yyval.intval) = 1; }
#line 2603 "analyzer.tab.c"
    break;

  case 74: /* case_list: case_list WHEN expr THEN expr  */
#line 374 "analyzer.y"
                                { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 2609 "analyzer.tab.c"
    break;

  case 75: /* expr: expr LIKE expr  */
#line 376 "analyzer.y"
                     { emit("LIKE"); }
#line 2615 "analyzer.tab.c"
    break;

  case 76: /* expr: expr NOT LIKE expr  */
#line 377 "analyzer.y"
                     { emit("LIKE"); emit("NOT"); }
#line 2621 "analyzer.tab.c"
    break;

  case 77: /* expr: expr REGEXP expr  */
#line 379 "analyzer.y"
                       { emit("REGEXP"); }
#line 2627 "analyzer.tab.c"
    break;

  case 78: /* expr: expr NOT REGEXP expr  */
#line 380 "analyzer.y"
                       { emit("REGEXP"); emit("NOT"); }
#line 2633 "analyzer.tab.c"
    break;

  case 79: /* expr: CURRENT_TIMESTAMP  */
#line 382 "analyzer.y"
                        { emit("NOW"); }
#line 2639 "analyzer.tab.c"
    break;

  case 80: /* expr: CURRENT_DATE  */
#line 383 "analyzer.y"
               { emit("NOW"); }
#line 2645 "analyzer.tab.c"
    break;

  case 81: /* expr: CURRENT_TIME  */
#line 384 "analyzer.y"
               { emit("NOW"); }
#line 2651 "analyzer.tab.c"
    break;

  case 82: /* expr: BINARY expr  */
#line 386 "analyzer.y"
                               { emit("STRTOBIN"); }
#line 2657 "analyzer.tab.c"
    break;

  case 83: /* stmt: select_stmt  */
#line 389 "analyzer.y"
                  { emit("STMT"); }
#line 2663 "analyzer.tab.c"
    break;

  case 84: /* select_stmt: SELECT select_opts select_expr_list  */
#line 392 "analyzer.y"
{ emit("SELECTNODATA %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2669 "analyzer.tab.c"
    break;

  case 85: /* select_stmt: SELECT select_opts select_expr_list FROM table_references opt_where opt_groupby opt_having opt_orderby opt_limit opt_into_list  */
#line 396 "analyzer.y"
              { emit("SELECT %d %d %d", (yyvsp[-9].intval), (yyvsp[-8].intval), (yyvsp[-6].intval)); }
#line 2675 "analyzer.tab.c"
    break;

  case 87: /* opt_where: WHERE expr  */
#line 399 "analyzer.y"
             { emit("WHERE"); }
#line 2681 "analyzer.tab.c"
    break;

  case 89: /* opt_groupby: GROUP BY groupby_list opt_with_rollup  */
#line 402 "analyzer.y"
{ emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2687 "analyzer.tab.c"
    break;

  case 90: /* groupby_list: expr opt_asc_desc  */
#line 405 "analyzer.y"
{ emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2693 "analyzer.tab.c"
    break;

  case 91: /* groupby_list: groupby_list ',' expr opt_asc_desc  */
#line 407 "analyzer.y"
{ emit("GROUPBY %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2699 "analyzer.tab.c"
    break;

  case 92: /* opt_asc_desc: %empty  */
#line 409 "analyzer.y"
                        { (yyval.intval) = 0; }
#line 2705 "analyzer.tab.c"
    break;

  case 93: /* opt_asc_desc: ASC  */
#line 410 "analyzer.y"
      { (yyval.intval) = 0; }
#line 2711 "analyzer.tab.c"
    break;

  case 94: /* opt_asc_desc: DESC  */
#line 411 "analyzer.y"
       { (yyval.intval) = 1; }
#line 2717 "analyzer.tab.c"
    break;

  case 95: /* opt_with_rollup: %empty  */
#line 413 "analyzer.y"
                           { (yyval.intval) = 0; }
#line 2723 "analyzer.tab.c"
    break;

  case 96: /* opt_with_rollup: WITH ROLLUP  */
#line 414 "analyzer.y"
              { (yyval.intval) = 1; }
#line 2729 "analyzer.tab.c"
    break;

  case 98: /* opt_having: HAVING expr  */
#line 417 "analyzer.y"
              { emit("HAVING"); }
#line 2735 "analyzer.tab.c"
    break;

  case 100: /* opt_orderby: ORDER BY groupby_list  */
#line 419 "analyzer.y"
                        { emit("ORDERBY %d", (yyvsp[0].intval)); }
#line 2741 "analyzer.tab.c"
    break;

  case 102: /* opt_limit: LIMIT expr  */
#line 421 "analyzer.y"
                                  { emit("LIMIT 1"); }
#line 2747 "analyzer.tab.c"
    break;

  case 103: /* opt_limit: LIMIT expr ',' expr  */
#line 422 "analyzer.y"
                      { emit("LIMIT 2"); }
#line 2753 "analyzer.tab.c"
    break;

  case 105: /* opt_into_list: INTO column_list  */
#line 425 "analyzer.y"
                   { emit("INTO %d", (yyvsp[0].intval)); }
#line 2759 "analyzer.tab.c"
    break;

  case 106: /* column_list: NAME  */
#line 427 "analyzer.y"
                  { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2765 "analyzer.tab.c"
    break;

  case 107: /* column_list: column_list ',' NAME  */
#line 428 "analyzer.y"
                       { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2771 "analyzer.tab.c"
    break;

  case 108: /* select_opts: %empty  */
#line 430 "analyzer.y"
             { (yyval.intval) = 0; }
#line 2777 "analyzer.tab.c"
    break;

  case 109: /* select_opts: select_opts ALL  */
#line 432 "analyzer.y"
{ if((yyvsp[-1].intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 2783 "analyzer.tab.c"
    break;

  case 110: /* select_opts: select_opts DISTINCT  */
#line 434 "analyzer.y"
{ if((yyvsp[-1].intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 2789 "analyzer.tab.c"
    break;

  case 111: /* select_opts: select_opts DISTINCTROW  */
#line 436 "analyzer.y"
{ if((yyvsp[-1].intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[-1].intval) | 04; }
#line 2795 "analyzer.tab.c"
    break;

  case 112: /* select_opts: select_opts HIGH_PRIORITY  */
#line 438 "analyzer.y"
{ if((yyvsp[-1].intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 2801 "analyzer.tab.c"
    break;

  case 113: /* select_opts: select_opts STRAIGHT_JOIN  */
#line 440 "analyzer.y"
{ if((yyvsp[-1].intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[-1].intval) | 020; }
#line 2807 "analyzer.tab.c"
    break;

  case 114: /* select_opts: select_opts SQL_SMALL_RESULT  */
#line 442 "analyzer.y"
{ if((yyvsp[-1].intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 040; }
#line 2813 "analyzer.tab.c"
    break;

  case 115: /* select_opts: select_opts SQL_BIG_RESULT  */
#line 444 "analyzer.y"
{ if((yyvsp[-1].intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 0100; }
#line 2819 "analyzer.tab.c"
    break;

  case 116: /* select_opts: select_opts SQL_CALC_FOUND_ROWS  */
#line 446 "analyzer.y"
{ if((yyvsp[-1].intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) =
(yyvsp[-1].intval) | 0200; }
#line 2826 "analyzer.tab.c"
    break;

  case 117: /* select_expr_list: select_expr  */
#line 449 "analyzer.y"
                              { (yyval.intval) = 1; }
#line 2832 "analyzer.tab.c"
    break;

  case 118: /* select_expr_list: select_expr_list ',' select_expr  */
#line 450 "analyzer.y"
                                   {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2838 "analyzer.tab.c"
    break;

  case 119: /* select_expr_list: '*'  */
#line 451 "analyzer.y"
      { emit("SELECTALL"); (yyval.intval) = 1; }
#line 2844 "analyzer.tab.c"
    break;

  case 121: /* opt_as_alias: AS NAME  */
#line 454 "analyzer.y"
                      { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2850 "analyzer.tab.c"
    break;

  case 122: /* opt_as_alias: NAME  */
#line 455 "analyzer.y"
       { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2856 "analyzer.tab.c"
    break;

  case 124: /* table_references: table_reference  */
#line 458 "analyzer.y"
                                  { (yyval.intval) = 1; }
#line 2862 "analyzer.tab.c"
    break;

  case 125: /* table_references: table_references ',' table_reference  */
#line 459 "analyzer.y"
                                       { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2868 "analyzer.tab.c"
    break;

  case 128: /* table_factor: NAME opt_as_alias index_hint  */
#line 465 "analyzer.y"
                             { emit("TABLE %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2874 "analyzer.tab.c"
    break;

  case 129: /* table_factor: NAME '.' NAME opt_as_alias index_hint  */
#line 466 "analyzer.y"
                                        { emit("TABLE %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval));
free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); }
#line 2881 "analyzer.tab.c"
    break;

  case 130: /* table_factor: table_subquery opt_as NAME  */
#line 468 "analyzer.y"
                             { emit("SUBQUERYAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2887 "analyzer.tab.c"
    break;

  case 131: /* table_factor: '(' table_references ')'  */
#line 469 "analyzer.y"
                           { emit("TABLEREFERENCES %d", (yyvsp[-1].intval)); }
#line 2893 "analyzer.tab.c"
    break;

  case 134: /* join_table: table_reference opt_inner_cross JOIN table_factor opt_join_condition  */
#line 476 "analyzer.y"
{ emit("JOIN %d", 100+(yyvsp[-3].intval)); }
#line 2899 "analyzer.tab.c"
    break;

  case 135: /* join_table: table_reference STRAIGHT_JOIN table_factor  */
#line 478 "analyzer.y"
{ emit("JOIN %d", 200); }
#line 2905 "analyzer.tab.c"
    break;

  case 136: /* join_table: table_reference STRAIGHT_JOIN table_factor ON expr  */
#line 480 "analyzer.y"
{ emit("JOIN %d", 200); }
#line 2911 "analyzer.tab.c"
    break;

  case 137: /* join_table: table_reference left_or_right opt_outer JOIN table_factor join_condition  */
#line 482 "analyzer.y"
{ emit("JOIN %d", 300+(yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 2917 "analyzer.tab.c"
    break;

  case 138: /* join_table: table_reference NATURAL opt_left_or_right_outer JOIN table_factor  */
#line 484 "analyzer.y"
{ emit("JOIN %d", 400+(yyvsp[-2].intval)); }
#line 2923 "analyzer.tab.c"
    break;

  case 139: /* opt_inner_cross: %empty  */
#line 486 "analyzer.y"
                           { (yyval.intval) = 0; }
#line 2929 "analyzer.tab.c"
    break;

  case 140: /* opt_inner_cross: INNER  */
#line 487 "analyzer.y"
        { (yyval.intval) = 1; }
#line 2935 "analyzer.tab.c"
    break;

  case 141: /* opt_inner_cross: CROSS  */
#line 488 "analyzer.y"
        { (yyval.intval) = 2; }
#line 2941 "analyzer.tab.c"
    break;

  case 142: /* opt_outer: %empty  */
#line 490 "analyzer.y"
                     { (yyval.intval) = 0; }
#line 2947 "analyzer.tab.c"
    break;

  case 143: /* opt_outer: OUTER  */
#line 491 "analyzer.y"
        {(yyval.intval) = 4; }
#line 2953 "analyzer.tab.c"
    break;

  case 144: /* left_or_right: LEFT  */
#line 493 "analyzer.y"
                    { (yyval.intval) = 1; }
#line 2959 "analyzer.tab.c"
    break;

  case 145: /* left_or_right: RIGHT  */
#line 494 "analyzer.y"
        { (yyval.intval) = 2; }
#line 2965 "analyzer.tab.c"
    break;

  case 146: /* opt_left_or_right_outer: LEFT opt_outer  */
#line 496 "analyzer.y"
                                        { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2971 "analyzer.tab.c"
    break;

  case 147: /* opt_left_or_right_outer: RIGHT opt_outer  */
#line 497 "analyzer.y"
                  { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 2977 "analyzer.tab.c"
    break;

  case 148: /* opt_left_or_right_outer: %empty  */
#line 498 "analyzer.y"
            { (yyval.intval) = 0; }
#line 2983 "analyzer.tab.c"
    break;

  case 151: /* join_condition: ON expr  */
#line 503 "analyzer.y"
        { emit("ONEXPR"); }
#line 2989 "analyzer.tab.c"
    break;

  case 152: /* join_condition: USING '(' column_list ')'  */
#line 504 "analyzer.y"
                            { emit("USING %d", (yyvsp[-1].intval)); }
#line 2995 "analyzer.tab.c"
    break;

  case 153: /* index_hint: USE KEY opt_for_join '(' index_list ')'  */
#line 508 "analyzer.y"
{ emit("INDEXHINT %d %d", (yyvsp[-1].intval), 10+(yyvsp[-3].intval)); }
#line 3001 "analyzer.tab.c"
    break;

  case 154: /* index_hint: IGNORE KEY opt_for_join '(' index_list ')'  */
#line 510 "analyzer.y"
{ emit("INDEXHINT %d %d", (yyvsp[-1].intval), 20+(yyvsp[-3].intval)); }
#line 3007 "analyzer.tab.c"
    break;

  case 155: /* index_hint: FORCE KEY opt_for_join '(' index_list ')'  */
#line 512 "analyzer.y"
{ emit("INDEXHINT %d %d", (yyvsp[-1].intval), 30+(yyvsp[-3].intval)); }
#line 3013 "analyzer.tab.c"
    break;

  case 157: /* opt_for_join: FOR JOIN  */
#line 515 "analyzer.y"
                       { (yyval.intval) = 1; }
#line 3019 "analyzer.tab.c"
    break;

  case 158: /* opt_for_join: %empty  */
#line 516 "analyzer.y"
            { (yyval.intval) = 0; }
#line 3025 "analyzer.tab.c"
    break;

  case 159: /* index_list: NAME  */
#line 518 "analyzer.y"
                 { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3031 "analyzer.tab.c"
    break;

  case 160: /* index_list: index_list ',' NAME  */
#line 519 "analyzer.y"
                      { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3037 "analyzer.tab.c"
    break;

  case 161: /* table_subquery: '(' select_stmt ')'  */
#line 521 "analyzer.y"
                                    { emit("SUBQUERY"); }
#line 3043 "analyzer.tab.c"
    break;

  case 162: /* stmt: delete_stmt  */
#line 524 "analyzer.y"
                  { emit("STMT"); }
#line 3049 "analyzer.tab.c"
    break;

  case 163: /* delete_stmt: DELETE delete_opts FROM NAME opt_where opt_orderby opt_limit  */
#line 529 "analyzer.y"
{ emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3055 "analyzer.tab.c"
    break;

  case 164: /* delete_opts: delete_opts LOW_PRIORITY  */
#line 531 "analyzer.y"
                                      { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 3061 "analyzer.tab.c"
    break;

  case 165: /* delete_opts: delete_opts QUICK  */
#line 532 "analyzer.y"
                    { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 3067 "analyzer.tab.c"
    break;

  case 166: /* delete_opts: delete_opts IGNORE  */
#line 533 "analyzer.y"
                     { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 3073 "analyzer.tab.c"
    break;

  case 167: /* delete_opts: %empty  */
#line 534 "analyzer.y"
            { (yyval.intval) = 0; }
#line 3079 "analyzer.tab.c"
    break;

  case 168: /* delete_stmt: DELETE delete_opts delete_list FROM table_references opt_where  */
#line 540 "analyzer.y"
{ emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 3085 "analyzer.tab.c"
    break;

  case 169: /* delete_list: NAME opt_dot_star  */
#line 541 "analyzer.y"
                               { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 3091 "analyzer.tab.c"
    break;

  case 170: /* delete_list: delete_list ',' NAME opt_dot_star  */
#line 543 "analyzer.y"
{ emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 3097 "analyzer.tab.c"
    break;

  case 173: /* delete_stmt: DELETE delete_opts FROM delete_list USING table_references opt_where  */
#line 550 "analyzer.y"
{ emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 3103 "analyzer.tab.c"
    break;

  case 174: /* stmt: insert_stmt  */
#line 553 "analyzer.y"
                  { emit("STMT"); }
#line 3109 "analyzer.tab.c"
    break;

  case 175: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 558 "analyzer.y"
                { emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3115 "analyzer.tab.c"
    break;

  case 177: /* opt_ondupupdate: ONDUPLICATE KEY UPDATE insert_asgn_list  */
#line 561 "analyzer.y"
                                          { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 3121 "analyzer.tab.c"
    break;

  case 178: /* insert_opts: %empty  */
#line 563 "analyzer.y"
                       { (yyval.intval) = 0; }
#line 3127 "analyzer.tab.c"
    break;

  case 179: /* insert_opts: insert_opts LOW_PRIORITY  */
#line 564 "analyzer.y"
                           { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3133 "analyzer.tab.c"
    break;

  case 180: /* insert_opts: insert_opts DELAYED  */
#line 565 "analyzer.y"
                      { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 3139 "analyzer.tab.c"
    break;

  case 181: /* insert_opts: insert_opts HIGH_PRIORITY  */
#line 566 "analyzer.y"
                            { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 3145 "analyzer.tab.c"
    break;

  case 182: /* insert_opts: insert_opts IGNORE  */
#line 567 "analyzer.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3151 "analyzer.tab.c"
    break;

  case 186: /* opt_col_names: '(' column_list ')'  */
#line 572 "analyzer.y"
                      { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 3157 "analyzer.tab.c"
    break;

  case 187: /* insert_vals_list: '(' insert_vals ')'  */
#line 574 "analyzer.y"
                                      { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 3163 "analyzer.tab.c"
    break;

  case 188: /* insert_vals_list: insert_vals_list ',' '(' insert_vals ')'  */
#line 575 "analyzer.y"
                                           { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3169 "analyzer.tab.c"
    break;

  case 189: /* insert_vals: expr  */
#line 577 "analyzer.y"
     { (yyval.intval) = 1; }
#line 3175 "analyzer.tab.c"
    break;

  case 190: /* insert_vals: DEFAULT  */
#line 578 "analyzer.y"
          { emit("DEFAULT"); (yyval.intval) = 1; }
#line 3181 "analyzer.tab.c"
    break;

  case 191: /* insert_vals: insert_vals ',' expr  */
#line 579 "analyzer.y"
                       { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3187 "analyzer.tab.c"
    break;

  case 192: /* insert_vals: insert_vals ',' DEFAULT  */
#line 580 "analyzer.y"
                          { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3193 "analyzer.tab.c"
    break;

  case 193: /* insert_stmt: INSERT insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 585 "analyzer.y"
{ emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3199 "analyzer.tab.c"
    break;

  case 194: /* insert_asgn_list: NAME COMPARISON expr  */
#line 589 "analyzer.y"
{ if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3206 "analyzer.tab.c"
    break;

  case 195: /* insert_asgn_list: NAME COMPARISON DEFAULT  */
#line 592 "analyzer.y"
{ if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3213 "analyzer.tab.c"
    break;

  case 196: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON expr  */
#line 595 "analyzer.y"
{ if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3220 "analyzer.tab.c"
    break;

  case 197: /* insert_asgn_list: insert_asgn_list ',' NAME COMPARISON DEFAULT  */
#line 598 "analyzer.y"
{ if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3227 "analyzer.tab.c"
    break;

  case 198: /* insert_stmt: INSERT insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 603 "analyzer.y"
                { emit("INSERTSELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3233 "analyzer.tab.c"
    break;

  case 199: /* stmt: replace_stmt  */
#line 606 "analyzer.y"
                   { emit("STMT"); }
#line 3239 "analyzer.tab.c"
    break;

  case 200: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names VALUES insert_vals_list opt_ondupupdate  */
#line 611 "analyzer.y"
                { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3245 "analyzer.tab.c"
    break;

  case 201: /* replace_stmt: REPLACE insert_opts opt_into NAME SET insert_asgn_list opt_ondupupdate  */
#line 616 "analyzer.y"
{ emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3251 "analyzer.tab.c"
    break;

  case 202: /* replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names select_stmt opt_ondupupdate  */
#line 620 "analyzer.y"
                { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3257 "analyzer.tab.c"
    break;

  case 203: /* stmt: update_stmt  */
#line 623 "analyzer.y"
                  { emit("STMT"); }
#line 3263 "analyzer.tab.c"
    break;

  case 204: /* update_stmt: UPDATE update_opts table_references SET update_asgn_list opt_where opt_orderby opt_limit  */
#line 629 "analyzer.y"
          { emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval)); }
#line 3269 "analyzer.tab.c"
    break;

  case 205: /* update_opts: %empty  */
#line 631 "analyzer.y"
                       { (yyval.intval) = 0; }
#line 3275 "analyzer.tab.c"
    break;

  case 206: /* update_opts: insert_opts LOW_PRIORITY  */
#line 632 "analyzer.y"
                           { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3281 "analyzer.tab.c"
    break;

  case 207: /* update_opts: insert_opts IGNORE  */
#line 633 "analyzer.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3287 "analyzer.tab.c"
    break;

  case 208: /* update_asgn_list: NAME COMPARISON expr  */
#line 637 "analyzer.y"
{ if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3294 "analyzer.tab.c"
    break;

  case 209: /* update_asgn_list: NAME '.' NAME COMPARISON expr  */
#line 640 "analyzer.y"
{ if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-4].strval)); YYERROR; }
emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3301 "analyzer.tab.c"
    break;

  case 210: /* update_asgn_list: update_asgn_list ',' NAME COMPARISON expr  */
#line 643 "analyzer.y"
{ if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
emit("ASSIGN %s.%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3308 "analyzer.tab.c"
    break;

  case 211: /* update_asgn_list: update_asgn_list ',' NAME '.' NAME COMPARISON expr  */
#line 646 "analyzer.y"
{ if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s.$s", (yyvsp[-4].strval), (yyvsp[-2].strval));
YYERROR; }
emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3316 "analyzer.tab.c"
    break;

  case 212: /* stmt: create_database_stmt  */
#line 651 "analyzer.y"
                           { emit("STMT"); }
#line 3322 "analyzer.tab.c"
    break;

  case 213: /* create_database_stmt: CREATE DATABASE opt_if_not_exists NAME  */
#line 655 "analyzer.y"
{ emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3328 "analyzer.tab.c"
    break;

  case 214: /* create_database_stmt: CREATE SCHEMA opt_if_not_exists NAME  */
#line 657 "analyzer.y"
{ emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3334 "analyzer.tab.c"
    break;

  case 215: /* opt_if_not_exists: %empty  */
#line 659 "analyzer.y"
                             { (yyval.intval) = 0; }
#line 3340 "analyzer.tab.c"
    break;

  case 216: /* opt_if_not_exists: IF EXISTS  */
#line 661 "analyzer.y"
{ if(!(yyvsp[0].subtok)) { yyerror("IF EXISTS doesn't exist"); YYERROR; }
(yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 3347 "analyzer.tab.c"
    break;

  case 217: /* stmt: create_table_stmt  */
#line 665 "analyzer.y"
                        { emit("STMT"); }
#line 3353 "analyzer.tab.c"
    break;

  case 218: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')'  */
#line 668 "analyzer.y"
                        { emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3359 "analyzer.tab.c"
    break;

  case 219: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')'  */
#line 671 "analyzer.y"
                        { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval));
free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 3366 "analyzer.tab.c"
    break;

  case 220: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '(' create_col_list ')' create_select_statement  */
#line 676 "analyzer.y"
                        { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3372 "analyzer.tab.c"
    break;

  case 221: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME create_select_statement  */
#line 679 "analyzer.y"
                        { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 3378 "analyzer.tab.c"
    break;

  case 222: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME '(' create_col_list ')' create_select_statement  */
#line 683 "analyzer.y"
                        { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval));
free((yyvsp[-6].strval)); free((yyvsp[-4].strval)); }
#line 3385 "analyzer.tab.c"
    break;

  case 223: /* create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME create_select_statement  */
#line 687 "analyzer.y"
                        { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval));
free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 3392 "analyzer.tab.c"
    break;

  case 224: /* opt_temporary: %empty  */
#line 690 "analyzer.y"
                         { (yyval.intval) = 0; }
#line 3398 "analyzer.tab.c"
    break;

  case 225: /* opt_temporary: TEMPORARY  */
#line 691 "analyzer.y"
            { (yyval.intval) = 1;}
#line 3404 "analyzer.tab.c"
    break;

  case 226: /* create_col_list: create_definition  */
#line 693 "analyzer.y"
                                   { (yyval.intval) = 1; }
#line 3410 "analyzer.tab.c"
    break;

  case 227: /* create_col_list: create_col_list ',' create_definition  */
#line 694 "analyzer.y"
                                        { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3416 "analyzer.tab.c"
    break;

  case 228: /* create_definition: PRIMARY KEY '(' column_list ')'  */
#line 696 "analyzer.y"
                                                   { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3422 "analyzer.tab.c"
    break;

  case 229: /* create_definition: KEY '(' column_list ')'  */
#line 697 "analyzer.y"
                          { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3428 "analyzer.tab.c"
    break;

  case 230: /* create_definition: INDEX '(' column_list ')'  */
#line 698 "analyzer.y"
                            { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3434 "analyzer.tab.c"
    break;

  case 231: /* create_definition: FULLTEXT INDEX '(' column_list ')'  */
#line 699 "analyzer.y"
                                     { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3440 "analyzer.tab.c"
    break;

  case 232: /* create_definition: FULLTEXT KEY '(' column_list ')'  */
#line 700 "analyzer.y"
                                   { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3446 "analyzer.tab.c"
    break;

  case 233: /* $@1: %empty  */
#line 702 "analyzer.y"
                   { emit("STARTCOL"); }
#line 3452 "analyzer.tab.c"
    break;

  case 234: /* create_definition: $@1 NAME data_type column_atts  */
#line 703 "analyzer.y"
{ emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3458 "analyzer.tab.c"
    break;

  case 235: /* column_atts: %empty  */
#line 704 "analyzer.y"
                       { (yyval.intval) = 0; }
#line 3464 "analyzer.tab.c"
    break;

  case 236: /* column_atts: column_atts NOT NULLX  */
#line 705 "analyzer.y"
                        { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3470 "analyzer.tab.c"
    break;

  case 238: /* column_atts: column_atts DEFAULT STRING  */
#line 708 "analyzer.y"
{ emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3476 "analyzer.tab.c"
    break;

  case 239: /* column_atts: column_atts DEFAULT INTNUM  */
#line 710 "analyzer.y"
{ emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3482 "analyzer.tab.c"
    break;

  case 240: /* column_atts: column_atts DEFAULT APPROXNUM  */
#line 712 "analyzer.y"
{ emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3488 "analyzer.tab.c"
    break;

  case 241: /* column_atts: column_atts DEFAULT BOOL  */
#line 714 "analyzer.y"
{ emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3494 "analyzer.tab.c"
    break;

  case 242: /* column_atts: column_atts AUTO_INCREMENT  */
#line 716 "analyzer.y"
{ emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3500 "analyzer.tab.c"
    break;

  case 243: /* column_atts: column_atts UNIQUE '(' column_list ')'  */
#line 718 "analyzer.y"
{ emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3506 "analyzer.tab.c"
    break;

  case 244: /* column_atts: column_atts UNIQUE KEY  */
#line 719 "analyzer.y"
                         { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3512 "analyzer.tab.c"
    break;

  case 245: /* column_atts: column_atts PRIMARY KEY  */
#line 720 "analyzer.y"
                          { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3518 "analyzer.tab.c"
    break;

  case 246: /* column_atts: column_atts KEY  */
#line 721 "analyzer.y"
                  { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3524 "analyzer.tab.c"
    break;

  case 247: /* column_atts: column_atts COMMENT STRING  */
#line 723 "analyzer.y"
{ emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3530 "analyzer.tab.c"
    break;

  case 248: /* opt_length: %empty  */
#line 725 "analyzer.y"
                      { (yyval.intval) = 0; }
#line 3536 "analyzer.tab.c"
    break;

  case 249: /* opt_length: '(' INTNUM ')'  */
#line 726 "analyzer.y"
                 { (yyval.intval) = (yyvsp[-1].intval); }
#line 3542 "analyzer.tab.c"
    break;

  case 250: /* opt_length: '(' INTNUM ',' INTNUM ')'  */
#line 727 "analyzer.y"
                            { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3548 "analyzer.tab.c"
    break;

  case 251: /* opt_binary: %empty  */
#line 729 "analyzer.y"
                      { (yyval.intval) = 0; }
#line 3554 "analyzer.tab.c"
    break;

  case 252: /* opt_binary: BINARY  */
#line 730 "analyzer.y"
         { (yyval.intval) = 4000; }
#line 3560 "analyzer.tab.c"
    break;

  case 253: /* opt_uz: %empty  */
#line 732 "analyzer.y"
                  { (yyval.intval) = 0; }
#line 3566 "analyzer.tab.c"
    break;

  case 254: /* opt_uz: opt_uz UNSIGNED  */
#line 733 "analyzer.y"
                  { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3572 "analyzer.tab.c"
    break;

  case 255: /* opt_uz: opt_uz ZEROFILL  */
#line 734 "analyzer.y"
                  { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3578 "analyzer.tab.c"
    break;

  case 257: /* opt_csc: opt_csc CHAR SET STRING  */
#line 737 "analyzer.y"
                          { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3584 "analyzer.tab.c"
    break;

  case 258: /* opt_csc: opt_csc COLLATE STRING  */
#line 738 "analyzer.y"
                         { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3590 "analyzer.tab.c"
    break;

  case 259: /* data_type: BIT opt_length  */
#line 741 "analyzer.y"
               { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3596 "analyzer.tab.c"
    break;

  case 260: /* data_type: TINYINT opt_length opt_uz  */
#line 742 "analyzer.y"
                            { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3602 "analyzer.tab.c"
    break;

  case 261: /* data_type: SMALLINT opt_length opt_uz  */
#line 743 "analyzer.y"
                             { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3608 "analyzer.tab.c"
    break;

  case 262: /* data_type: MEDIUMINT opt_length opt_uz  */
#line 744 "analyzer.y"
                              { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3614 "analyzer.tab.c"
    break;

  case 263: /* data_type: INT opt_length opt_uz  */
#line 745 "analyzer.y"
                        { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3620 "analyzer.tab.c"
    break;

  case 264: /* data_type: INTEGER opt_length opt_uz  */
#line 746 "analyzer.y"
                            { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3626 "analyzer.tab.c"
    break;

  case 265: /* data_type: BIGINT opt_length opt_uz  */
#line 747 "analyzer.y"
                           { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3632 "analyzer.tab.c"
    break;

  case 266: /* data_type: REAL opt_length opt_uz  */
#line 748 "analyzer.y"
                         { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3638 "analyzer.tab.c"
    break;

  case 267: /* data_type: DOUBLE opt_length opt_uz  */
#line 749 "analyzer.y"
                           { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3644 "analyzer.tab.c"
    break;

  case 268: /* data_type: FLOAT opt_length opt_uz  */
#line 750 "analyzer.y"
                          { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3650 "analyzer.tab.c"
    break;

  case 269: /* data_type: DECIMAL opt_length opt_uz  */
#line 751 "analyzer.y"
                            { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3656 "analyzer.tab.c"
    break;

  case 270: /* data_type: DATE  */
#line 752 "analyzer.y"
       { (yyval.intval) = 100001; }
#line 3662 "analyzer.tab.c"
    break;

  case 271: /* data_type: TIME  */
#line 753 "analyzer.y"
       { (yyval.intval) = 100002; }
#line 3668 "analyzer.tab.c"
    break;

  case 272: /* data_type: TIMESTAMP  */
#line 754 "analyzer.y"
            { (yyval.intval) = 100003; }
#line 3674 "analyzer.tab.c"
    break;

  case 273: /* data_type: DATETIME  */
#line 755 "analyzer.y"
           { (yyval.intval) = 100004; }
#line 3680 "analyzer.tab.c"
    break;

  case 274: /* data_type: YEAR  */
#line 756 "analyzer.y"
       { (yyval.intval) = 100005; }
#line 3686 "analyzer.tab.c"
    break;

  case 275: /* data_type: CHAR opt_length opt_csc  */
#line 757 "analyzer.y"
                          { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3692 "analyzer.tab.c"
    break;

  case 276: /* data_type: VARCHAR '(' INTNUM ')' opt_csc  */
#line 758 "analyzer.y"
                                 { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3698 "analyzer.tab.c"
    break;

  case 277: /* data_type: BINARY opt_length  */
#line 759 "analyzer.y"
                    { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3704 "analyzer.tab.c"
    break;

  case 278: /* data_type: VARBINARY '(' INTNUM ')'  */
#line 760 "analyzer.y"
                           { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3710 "analyzer.tab.c"
    break;

  case 279: /* data_type: TINYBLOB  */
#line 761 "analyzer.y"
           { (yyval.intval) = 160001; }
#line 3716 "analyzer.tab.c"
    break;

  case 280: /* data_type: BLOB  */
#line 762 "analyzer.y"
       { (yyval.intval) = 160002; }
#line 3722 "analyzer.tab.c"
    break;

  case 281: /* data_type: MEDIUMBLOB  */
#line 763 "analyzer.y"
             { (yyval.intval) = 160003; }
#line 3728 "analyzer.tab.c"
    break;

  case 282: /* data_type: LONGBLOB  */
#line 764 "analyzer.y"
           { (yyval.intval) = 160004; }
#line 3734 "analyzer.tab.c"
    break;

  case 283: /* data_type: TINYTEXT opt_binary opt_csc  */
#line 765 "analyzer.y"
                              { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3740 "analyzer.tab.c"
    break;

  case 284: /* data_type: TEXT opt_binary opt_csc  */
#line 766 "analyzer.y"
                          { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3746 "analyzer.tab.c"
    break;

  case 285: /* data_type: MEDIUMTEXT opt_binary opt_csc  */
#line 767 "analyzer.y"
                                { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3752 "analyzer.tab.c"
    break;

  case 286: /* data_type: LONGTEXT opt_binary opt_csc  */
#line 768 "analyzer.y"
                              { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3758 "analyzer.tab.c"
    break;

  case 287: /* data_type: ENUM '(' enum_list ')' opt_csc  */
#line 769 "analyzer.y"
                                 { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3764 "analyzer.tab.c"
    break;

  case 288: /* data_type: SET '(' enum_list ')' opt_csc  */
#line 770 "analyzer.y"
                                { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3770 "analyzer.tab.c"
    break;

  case 289: /* enum_list: STRING  */
#line 772 "analyzer.y"
                  { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3776 "analyzer.tab.c"
    break;

  case 290: /* enum_list: enum_list ',' STRING  */
#line 773 "analyzer.y"
                       { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3782 "analyzer.tab.c"
    break;

  case 291: /* create_select_statement: opt_ignore_replace opt_as select_stmt  */
#line 775 "analyzer.y"
                                                               { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3788 "analyzer.tab.c"
    break;

  case 292: /* opt_ignore_replace: %empty  */
#line 777 "analyzer.y"
                              { (yyval.intval) = 0; }
#line 3794 "analyzer.tab.c"
    break;

  case 293: /* opt_ignore_replace: IGNORE  */
#line 778 "analyzer.y"
         { (yyval.intval) = 1; }
#line 3800 "analyzer.tab.c"
    break;

  case 294: /* opt_ignore_replace: REPLACE  */
#line 779 "analyzer.y"
          { (yyval.intval) = 2; }
#line 3806 "analyzer.tab.c"
    break;

  case 295: /* stmt: set_stmt  */
#line 782 "analyzer.y"
               { emit("STMT"); }
#line 3812 "analyzer.tab.c"
    break;

  case 299: /* set_expr: USERVAR COMPARISON expr  */
#line 787 "analyzer.y"
                        { if ((yyvsp[-1].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[-2].strval)); YYERROR; }
emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3819 "analyzer.tab.c"
    break;

  case 300: /* set_expr: USERVAR ASSIGN expr  */
#line 789 "analyzer.y"
                      { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3825 "analyzer.tab.c"
    break;


#line 3829 "analyzer.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 791 "analyzer.y"

void
emit(char *s, ...)
{
extern yylineno;
va_list ap;
va_start(ap, s);
printf("rpn: ");
vfprintf(stdout, s, ap);
printf("\n");
}
void
yyerror(char *s, ...)
{
extern yylineno;
va_list ap;
va_start(ap, s);
fprintf(stderr, "%d: error: ", yylineno);
vfprintf(stderr, s, ap);
fprintf(stderr, "\n");
}
main(int ac, char **av)
{
extern FILE *yyin;
//if(ac > 1 && !strcmp(av[1], "-d")) {
//yydebug = 1; ac--; av++;
//}
if(ac > 1 && (yyin = fopen(av[1], "r")) == NULL) {
perror(av[1]);
exit(1);
}
if(!yyparse())
printf("SQL parse worked\n");
else
printf("SQL parse failed\n");
} /* main */
