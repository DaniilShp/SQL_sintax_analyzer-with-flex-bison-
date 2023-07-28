/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_ANALYZER_TAB_H_INCLUDED
# define YY_YY_ANALYZER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NAME = 258,                    /* NAME  */
    STRING = 259,                  /* STRING  */
    INTNUM = 260,                  /* INTNUM  */
    BOOL = 261,                    /* BOOL  */
    APPROXNUM = 262,               /* APPROXNUM  */
    USERVAR = 263,                 /* USERVAR  */
    ASSIGN = 264,                  /* ASSIGN  */
    ANDOP = 265,                   /* ANDOP  */
    COMPARISON = 266,              /* COMPARISON  */
    SHIFT = 267,                   /* SHIFT  */
    UMINUS = 268,                  /* UMINUS  */
    ADD = 269,                     /* ADD  */
    ALL = 270,                     /* ALL  */
    ALTER = 271,                   /* ALTER  */
    ANALYZE = 272,                 /* ANALYZE  */
    AND = 273,                     /* AND  */
    ANY = 274,                     /* ANY  */
    AS = 275,                      /* AS  */
    ASC = 276,                     /* ASC  */
    AUTO_INCREMENT = 277,          /* AUTO_INCREMENT  */
    BEFORE = 278,                  /* BEFORE  */
    BETWEEN = 279,                 /* BETWEEN  */
    BIGINT = 280,                  /* BIGINT  */
    BINARY = 281,                  /* BINARY  */
    BIT = 282,                     /* BIT  */
    BLOB = 283,                    /* BLOB  */
    BOTH = 284,                    /* BOTH  */
    BY = 285,                      /* BY  */
    CALL = 286,                    /* CALL  */
    CASCADE = 287,                 /* CASCADE  */
    CASE = 288,                    /* CASE  */
    CHANGE = 289,                  /* CHANGE  */
    CHAR = 290,                    /* CHAR  */
    CHECK = 291,                   /* CHECK  */
    COLLATE = 292,                 /* COLLATE  */
    COLUMN = 293,                  /* COLUMN  */
    COMMENT = 294,                 /* COMMENT  */
    CONDITION = 295,               /* CONDITION  */
    CONSTRAINT = 296,              /* CONSTRAINT  */
    CONTINUE = 297,                /* CONTINUE  */
    CONVERT = 298,                 /* CONVERT  */
    CREATE = 299,                  /* CREATE  */
    CROSS = 300,                   /* CROSS  */
    CURRENT_DATE = 301,            /* CURRENT_DATE  */
    CURRENT_TIME = 302,            /* CURRENT_TIME  */
    CURRENT_TIMESTAMP = 303,       /* CURRENT_TIMESTAMP  */
    CURRENT_USER = 304,            /* CURRENT_USER  */
    CURSOR = 305,                  /* CURSOR  */
    DATABASE = 306,                /* DATABASE  */
    DATABASES = 307,               /* DATABASES  */
    DATE = 308,                    /* DATE  */
    DATETIME = 309,                /* DATETIME  */
    DAY_HOUR = 310,                /* DAY_HOUR  */
    DAY_MICROSECOND = 311,         /* DAY_MICROSECOND  */
    DAY_MINUTE = 312,              /* DAY_MINUTE  */
    DAY_SECOND = 313,              /* DAY_SECOND  */
    DECIMAL = 314,                 /* DECIMAL  */
    DECLARE = 315,                 /* DECLARE  */
    DEFAULT = 316,                 /* DEFAULT  */
    DELAYED = 317,                 /* DELAYED  */
    DELETE = 318,                  /* DELETE  */
    DESC = 319,                    /* DESC  */
    DESCRIBE = 320,                /* DESCRIBE  */
    DETERMINISTIC = 321,           /* DETERMINISTIC  */
    DISTINCT = 322,                /* DISTINCT  */
    DISTINCTROW = 323,             /* DISTINCTROW  */
    DIV = 324,                     /* DIV  */
    DOUBLE = 325,                  /* DOUBLE  */
    DROP = 326,                    /* DROP  */
    DUAL = 327,                    /* DUAL  */
    EACH = 328,                    /* EACH  */
    ELSE = 329,                    /* ELSE  */
    ELSEIF = 330,                  /* ELSEIF  */
    END = 331,                     /* END  */
    ENUM = 332,                    /* ENUM  */
    ESCAPED = 333,                 /* ESCAPED  */
    EXIT = 334,                    /* EXIT  */
    EXPLAIN = 335,                 /* EXPLAIN  */
    FETCH = 336,                   /* FETCH  */
    FLOAT = 337,                   /* FLOAT  */
    FOR = 338,                     /* FOR  */
    FORCE = 339,                   /* FORCE  */
    FOREIGN = 340,                 /* FOREIGN  */
    FROM = 341,                    /* FROM  */
    FULLTEXT = 342,                /* FULLTEXT  */
    GRANT = 343,                   /* GRANT  */
    GROUP = 344,                   /* GROUP  */
    HAVING = 345,                  /* HAVING  */
    HIGH_PRIORITY = 346,           /* HIGH_PRIORITY  */
    HOUR_MICROSECOND = 347,        /* HOUR_MICROSECOND  */
    HOUR_MINUTE = 348,             /* HOUR_MINUTE  */
    HOUR_SECOND = 349,             /* HOUR_SECOND  */
    INDEX = 350,                   /* INDEX  */
    IF = 351,                      /* IF  */
    IGNORE = 352,                  /* IGNORE  */
    IN = 353,                      /* IN  */
    INFILE = 354,                  /* INFILE  */
    INNER = 355,                   /* INNER  */
    INOUT = 356,                   /* INOUT  */
    INSENSITIVE = 357,             /* INSENSITIVE  */
    INSERT = 358,                  /* INSERT  */
    INT = 359,                     /* INT  */
    INTEGER = 360,                 /* INTEGER  */
    INTERVAL = 361,                /* INTERVAL  */
    INTO = 362,                    /* INTO  */
    IS = 363,                      /* IS  */
    ITERATE = 364,                 /* ITERATE  */
    JOIN = 365,                    /* JOIN  */
    KEY = 366,                     /* KEY  */
    KEYS = 367,                    /* KEYS  */
    KILL = 368,                    /* KILL  */
    LEADING = 369,                 /* LEADING  */
    LEAVE = 370,                   /* LEAVE  */
    LEFT = 371,                    /* LEFT  */
    LIKE = 372,                    /* LIKE  */
    LIMIT = 373,                   /* LIMIT  */
    LINES = 374,                   /* LINES  */
    LOAD = 375,                    /* LOAD  */
    LOCALTIME = 376,               /* LOCALTIME  */
    LOCALTIMESTAMP = 377,          /* LOCALTIMESTAMP  */
    LOCK = 378,                    /* LOCK  */
    LONG = 379,                    /* LONG  */
    LONGBLOB = 380,                /* LONGBLOB  */
    LONGTEXT = 381,                /* LONGTEXT  */
    LOOP = 382,                    /* LOOP  */
    LOW_PRIORITY = 383,            /* LOW_PRIORITY  */
    MATCH = 384,                   /* MATCH  */
    MEDIUMBLOB = 385,              /* MEDIUMBLOB  */
    MEDIUMINT = 386,               /* MEDIUMINT  */
    MEDIUMTEXT = 387,              /* MEDIUMTEXT  */
    MINUTE_MICROSECOND = 388,      /* MINUTE_MICROSECOND  */
    MINUTE_SECOND = 389,           /* MINUTE_SECOND  */
    MOD = 390,                     /* MOD  */
    MODIFIES = 391,                /* MODIFIES  */
    NATURAL = 392,                 /* NATURAL  */
    NOT = 393,                     /* NOT  */
    O_WRITE_TO_BINLOG = 394,       /* O_WRITE_TO_BINLOG  */
    NULLX = 395,                   /* NULLX  */
    NUMBER = 396,                  /* NUMBER  */
    ON = 397,                      /* ON  */
    ONDUPLICATE = 398,             /* ONDUPLICATE  */
    OPTIMIZE = 399,                /* OPTIMIZE  */
    OPTION = 400,                  /* OPTION  */
    OPTIONALLY = 401,              /* OPTIONALLY  */
    OR = 402,                      /* OR  */
    ORDER = 403,                   /* ORDER  */
    OUT = 404,                     /* OUT  */
    OUTER = 405,                   /* OUTER  */
    OUTFILE = 406,                 /* OUTFILE  */
    PRECISION = 407,               /* PRECISION  */
    PRIMARY = 408,                 /* PRIMARY  */
    PROCEDURE = 409,               /* PROCEDURE  */
    PURGE = 410,                   /* PURGE  */
    QUICK = 411,                   /* QUICK  */
    READ = 412,                    /* READ  */
    READS = 413,                   /* READS  */
    REAL = 414,                    /* REAL  */
    REFERENCES = 415,              /* REFERENCES  */
    REGEXP = 416,                  /* REGEXP  */
    RELEASE = 417,                 /* RELEASE  */
    RENAME = 418,                  /* RENAME  */
    REPEAT = 419,                  /* REPEAT  */
    REPLACE = 420,                 /* REPLACE  */
    REQUIRE = 421,                 /* REQUIRE  */
    RESTRICT = 422,                /* RESTRICT  */
    RETURN = 423,                  /* RETURN  */
    REVOKE = 424,                  /* REVOKE  */
    RIGHT = 425,                   /* RIGHT  */
    ROLLUP = 426,                  /* ROLLUP  */
    SCHEMA = 427,                  /* SCHEMA  */
    SCHEMAS = 428,                 /* SCHEMAS  */
    SECOND_MICROSECOND = 429,      /* SECOND_MICROSECOND  */
    SELECT = 430,                  /* SELECT  */
    SENSITIVE = 431,               /* SENSITIVE  */
    SEPARATOR = 432,               /* SEPARATOR  */
    SET = 433,                     /* SET  */
    SHOW = 434,                    /* SHOW  */
    SMALLINT = 435,                /* SMALLINT  */
    SOME = 436,                    /* SOME  */
    SONAME = 437,                  /* SONAME  */
    SPATIAL = 438,                 /* SPATIAL  */
    SPECIFIC = 439,                /* SPECIFIC  */
    SQL = 440,                     /* SQL  */
    SQLEXCEPTION = 441,            /* SQLEXCEPTION  */
    SQLSTATE = 442,                /* SQLSTATE  */
    SQLWARNING = 443,              /* SQLWARNING  */
    SQL_BIG_RESULT = 444,          /* SQL_BIG_RESULT  */
    SQL_CALC_FOUND_ROWS = 445,     /* SQL_CALC_FOUND_ROWS  */
    SQL_SMALL_RESULT = 446,        /* SQL_SMALL_RESULT  */
    SSL = 447,                     /* SSL  */
    STARTING = 448,                /* STARTING  */
    STRAIGHT_JOIN = 449,           /* STRAIGHT_JOIN  */
    TABLE = 450,                   /* TABLE  */
    TEMPORARY = 451,               /* TEMPORARY  */
    TERMINATED = 452,              /* TERMINATED  */
    TEXT = 453,                    /* TEXT  */
    THEN = 454,                    /* THEN  */
    TIME = 455,                    /* TIME  */
    TIMESTAMP = 456,               /* TIMESTAMP  */
    TINYINT = 457,                 /* TINYINT  */
    TINYTEXT = 458,                /* TINYTEXT  */
    TINYBLOB = 459,                /* TINYBLOB  */
    TO = 460,                      /* TO  */
    TRAILING = 461,                /* TRAILING  */
    TRIGGER = 462,                 /* TRIGGER  */
    UNDO = 463,                    /* UNDO  */
    UNION = 464,                   /* UNION  */
    UNIQUE = 465,                  /* UNIQUE  */
    UNLOCK = 466,                  /* UNLOCK  */
    UNSIGNED = 467,                /* UNSIGNED  */
    UPDATE = 468,                  /* UPDATE  */
    USAGE = 469,                   /* USAGE  */
    USE = 470,                     /* USE  */
    USING = 471,                   /* USING  */
    UTC_DATE = 472,                /* UTC_DATE  */
    UTC_TIME = 473,                /* UTC_TIME  */
    UTC_TIMESTAMP = 474,           /* UTC_TIMESTAMP  */
    VALUES = 475,                  /* VALUES  */
    VARBINARY = 476,               /* VARBINARY  */
    VARCHAR = 477,                 /* VARCHAR  */
    VARYING = 478,                 /* VARYING  */
    WHEN = 479,                    /* WHEN  */
    WHERE = 480,                   /* WHERE  */
    WHILE = 481,                   /* WHILE  */
    WITH = 482,                    /* WITH  */
    WRITE = 483,                   /* WRITE  */
    XOR = 484,                     /* XOR  */
    YEAR = 485,                    /* YEAR  */
    YEAR_MONTH = 486,              /* YEAR_MONTH  */
    ZEROFILL = 487,                /* ZEROFILL  */
    EXISTS = 488,                  /* EXISTS  */
    FSUBSTRING = 489,              /* FSUBSTRING  */
    FTRIM = 490,                   /* FTRIM  */
    FDATE_ADD = 491,               /* FDATE_ADD  */
    FDATE_SUB = 492,               /* FDATE_SUB  */
    FCOUNT = 493                   /* FCOUNT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 9 "analyzer.y"

int intval;
double floatval;
char *strval;
int subtok;

#line 309 "analyzer.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_ANALYZER_TAB_H_INCLUDED  */
