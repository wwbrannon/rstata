// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "ado.tab.cpp" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "ado.tab.hpp"

// User implementation prologue.

#line 51 "ado.tab.cpp" // lalr1.cc:412
// Unqualified %code blocks.
#line 34 "ado.ypp" // lalr1.cc:413

    #include <string>
    #include <Rcpp.h>

    YY_DECL;

    void
    yy::AdoParser::error(const location_type& l, const std::string& m)
    {
        driver.error(l.begin.line, l.begin.column, m);
    }

    #define R_ACTION(node) driver.wrap_cmd_action(node);
    #define RETURN_AST(node) driver.set_ast(node);

#line 69 "ado.tab.cpp" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 155 "ado.tab.cpp" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
   AdoParser ::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
   AdoParser :: AdoParser  (ParseDriver& driver_yyarg, yyscan_t yyscanner_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg),
      yyscanner (yyscanner_yyarg)
  {}

   AdoParser ::~ AdoParser  ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/

  inline
   AdoParser ::syntax_error::syntax_error (const location_type& l, const std::string& m)
    : std::runtime_error (m)
    , location (l)
  {}

  // basic_symbol.
  template <typename Base>
  inline
   AdoParser ::basic_symbol<Base>::basic_symbol ()
    : value ()
  {}

  template <typename Base>
  inline
   AdoParser ::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value ()
    , location (other.location)
  {
    value = other.value;
  }


  template <typename Base>
  inline
   AdoParser ::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  inline
   AdoParser ::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  inline
   AdoParser ::basic_symbol<Base>::~basic_symbol ()
  {
    clear ();
  }

  template <typename Base>
  inline
  void
   AdoParser ::basic_symbol<Base>::clear ()
  {
    Base::clear ();
  }

  template <typename Base>
  inline
  bool
   AdoParser ::basic_symbol<Base>::empty () const
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  inline
  void
   AdoParser ::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move(s);
    value = s.value;
    location = s.location;
  }

  // by_type.
  inline
   AdoParser ::by_type::by_type ()
    : type (empty_symbol)
  {}

  inline
   AdoParser ::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
   AdoParser ::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
   AdoParser ::by_type::clear ()
  {
    type = empty_symbol;
  }

  inline
  void
   AdoParser ::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  inline
  int
   AdoParser ::by_type::type_get () const
  {
    return type;
  }


  // by_state.
  inline
   AdoParser ::by_state::by_state ()
    : state (empty_state)
  {}

  inline
   AdoParser ::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
   AdoParser ::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
   AdoParser ::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
   AdoParser ::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
   AdoParser ::symbol_number_type
   AdoParser ::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
   AdoParser ::stack_symbol_type::stack_symbol_type ()
  {}


  inline
   AdoParser ::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
    value = that.value;
    // that is emptied.
    that.type = empty_symbol;
  }

  inline
   AdoParser ::stack_symbol_type&
   AdoParser ::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
   AdoParser ::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    switch (yysym.type_get ())
    {
            case 1: // error

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 409 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 5: // NEWLINE

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 416 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 6: // ";"

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 423 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 16: // "+"

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 430 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 17: // "<"

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 437 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 18: // ">"

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 444 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 19: // "!"

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 451 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 20: // "*"

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 458 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 21: // "/"

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 465 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 22: // "-"

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 472 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 23: // "^"

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 479 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 24: // ">="

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 486 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 25: // "<="

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 493 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 26: // "=="

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 500 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 27: // "!="

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 507 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 28: // "|"

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 514 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 29: // "&"

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 521 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 30: // "##"

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 528 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 31: // "#"

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 535 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 32: // NUMBER

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 542 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 33: // IDENT

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 549 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 34: // STRING_LITERAL

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 556 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 35: // DATE

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 563 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 36: // DATETIME

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 570 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 37: // "."

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 577 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 38: // BYTE

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 584 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 39: // INT

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 591 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 40: // LONG

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 598 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 41: // FLOAT

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 605 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 42: // DOUBLE

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 612 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 43: // STRING_TYPE_SPEC

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 619 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 44: // STRING_FORMAT

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 626 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 45: // DATETIME_FORMAT

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 633 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 46: // NUMBER_FORMAT

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 640 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 47: // EMBEDDED_CODE

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 647 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 48: // BY

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 654 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 49: // XI

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 661 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 50: // BYSORT

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 668 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 51: // QUIETLY

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 675 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 52: // CAPTURE

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 682 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 53: // NOISILY

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 689 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 54: // MERGE

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 696 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 55: // COLLAPSE

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 703 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 56: // IVREGRESS

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 710 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 57: // RECODE

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 717 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 58: // GSORT

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 724 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 59: // LRTEST

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 731 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 60: // ANOVA

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 738 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 61: // TSLS

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 745 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 65: // WEIGHT_SPEC

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 752 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 66: // MERGE_SPEC

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 759 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 67: // CONT_OPERATOR

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 766 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 68: // IND_OPERATOR

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 773 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 69: // BASE_OPERATOR

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 780 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 70: // OMIT_OPERATOR

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 787 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 71: // FOREACH

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 794 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 72: // FORVALUES

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 801 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 81: // translation_unit

#line 160 "ado.ypp" // lalr1.cc:614
        { }
#line 808 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 82: // external_statement

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 815 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 83: // foreach_cmd

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 822 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 84: // forvalues_cmd

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 829 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 86: // if_cmd

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 836 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 87: // compound_cmd

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 843 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 88: // cmds

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 850 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 89: // cmd

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 857 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 90: // cmd_sep

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 864 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 91: // modifier_cmd

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 871 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 92: // long_modifier_cmd

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 878 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 93: // modifier_cmd_list

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 885 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 94: // nonmodifier_cmd

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 892 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 95: // varlist

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 899 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 96: // number_or_missing

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 906 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 97: // numlist

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 913 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 98: // collapse_spec_base

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 920 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 99: // collapse_spec_base_list

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 927 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 100: // collapse_spec

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 934 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 101: // collapse_list

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 941 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 102: // recode_rule

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 948 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 103: // recode_rule_list

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 955 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 104: // gsort_var

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 962 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 105: // gsort_varlist

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 969 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 106: // modelspec

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 976 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 107: // modelspec_list

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 983 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 108: // anova_nest_expression

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 990 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 109: // anova_error_expression

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 997 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 110: // anova_term_list

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1004 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 111: // type_operator

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 1011 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 113: // unary_operator

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 1018 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 114: // unary_factor_operator

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1025 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 115: // power_operator

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 1032 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 116: // multiplication_operator

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 1039 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 117: // additive_operator

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 1046 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 118: // relational_operator

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 1053 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 119: // equality_operator

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 1060 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 120: // logical_operator

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 1067 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 121: // cross_operator

#line 161 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.str); }
#line 1074 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 122: // format_spec

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1081 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 123: // literal_expression

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1088 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 124: // primary_expression

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1095 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 125: // unary_factor_expression

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1102 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 126: // cross_expression

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1109 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 127: // postfix_expression

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1116 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 128: // power_expression

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1123 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 129: // unary_expression

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1130 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 130: // multiplication_expression

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1137 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 131: // additive_expression

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1144 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 132: // relational_expression

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1151 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 133: // equality_expression

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1158 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 134: // logical_expression

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1165 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 135: // expression

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1172 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 136: // expression_list

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1179 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 137: // argument_expression_list

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1186 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 138: // option_list

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1193 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 139: // options

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1200 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 140: // option

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1207 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 141: // option_ident

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1214 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 142: // weight_clause

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1221 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 143: // if_clause

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1228 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 144: // in_clause

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1235 "ado.tab.cpp" // lalr1.cc:614
        break;

      case 145: // using_clause

#line 162 "ado.ypp" // lalr1.cc:614
        { delete (yysym.value.node); }
#line 1242 "ado.tab.cpp" // lalr1.cc:614
        break;


      default:
        break;
    }
  }

#if YYDEBUG
  template <typename Base>
  void
   AdoParser ::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
   AdoParser ::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
   AdoParser ::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
   AdoParser ::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
   AdoParser ::debug_stream () const
  {
    return *yycdebug_;
  }

  void
   AdoParser ::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


   AdoParser ::debug_level_type
   AdoParser ::debug_level () const
  {
    return yydebug_;
  }

  void
   AdoParser ::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline  AdoParser ::state_type
   AdoParser ::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
   AdoParser ::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
   AdoParser ::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
   AdoParser ::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location, driver, yyscanner));
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;

      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 175 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_compound_cmd");
        node->appendChild((yystack_[0].value.node));
        RETURN_AST(node);

        if( !((yystack_[0].value.node)->isDummy()) )
        {
            R_ACTION(node);
        }

        (yylhs.value.node) = node;
    }
#line 1492 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 3:
#line 188 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.node)->appendChild((yystack_[0].value.node));

        if( !((yystack_[0].value.node)->isDummy()) )
        {
            ExprNode *node = new ExprNode("ado_compound_cmd");
            node->appendChild((yystack_[0].value.node));

            // FIXME? is this a memory leak?
            RETURN_AST(node);
            R_ACTION(node);
        } else
        {
            RETURN_AST((yystack_[1].value.node));
        }

        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 1515 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 4:
#line 207 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[0].value.node); // shut up, bison...

        // we shouldn't need to use set_ast here, because the earlier
        // production that created the translation_unit will have done
        // so already (unlike the one-statement error production below)
        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 1528 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 5:
#line 216 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[0].value.node); // shut up, bison...
        
        ExprNode *node = new ExprNode("ado_compound_cmd");
        
        RETURN_AST(node);
        (yylhs.value.node) = node;
    }
#line 1541 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 11:
#line 246 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[6].value.node)->appendChild("macro_name", (yystack_[5].value.node));
        (yystack_[6].value.node)->appendChild("text", (yystack_[1].value.node));
        (yystack_[6].value.node)->appendChild("varlist", (yystack_[3].value.node));

        (yylhs.value.node) = (yystack_[6].value.node);
    }
#line 1553 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 12:
#line 254 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[6].value.node)->appendChild("macro_name", (yystack_[5].value.node));
        (yystack_[6].value.node)->appendChild("text", (yystack_[1].value.node));
        (yystack_[6].value.node)->appendChild("numlist", (yystack_[3].value.node));

        (yylhs.value.node) = (yystack_[6].value.node);
    }
#line 1565 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 13:
#line 262 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[7].value.node)->appendChild("macro_name", (yystack_[6].value.node));
        (yystack_[7].value.node)->appendChild("text", (yystack_[1].value.node));
        (yystack_[7].value.node)->appendChild("local_macro_source", (yystack_[3].value.node));

        (yylhs.value.node) = (yystack_[7].value.node);
    }
#line 1577 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 14:
#line 270 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[7].value.node)->appendChild("macro_name", (yystack_[6].value.node));
        (yystack_[7].value.node)->appendChild("text", (yystack_[1].value.node));
        (yystack_[7].value.node)->appendChild("global_macro_source", (yystack_[3].value.node));

        (yylhs.value.node) = (yystack_[7].value.node);
    }
#line 1589 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 15:
#line 278 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[7].value.node)->appendChild("macro_name", (yystack_[6].value.node));
        (yystack_[7].value.node)->appendChild("text", (yystack_[1].value.node));
        (yystack_[7].value.node)->appendChild("varlist", (yystack_[3].value.node));

        (yylhs.value.node) = (yystack_[7].value.node);
    }
#line 1601 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 16:
#line 286 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[7].value.node)->appendChild("macro_name", (yystack_[6].value.node));
        (yystack_[7].value.node)->appendChild("text", (yystack_[1].value.node));
        (yystack_[7].value.node)->appendChild("varlist", (yystack_[3].value.node));

        (yylhs.value.node) = (yystack_[7].value.node);
    }
#line 1613 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 17:
#line 294 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[7].value.node)->appendChild("macro_name", (yystack_[6].value.node));
        (yystack_[7].value.node)->appendChild("text", (yystack_[1].value.node));
        (yystack_[7].value.node)->appendChild("numlist", (yystack_[3].value.node));

        (yylhs.value.node) = (yystack_[7].value.node);
    }
#line 1625 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 18:
#line 305 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[10].value.node)->appendChild("macro_name", (yystack_[9].value.node));
        (yystack_[10].value.node)->appendChild("text", (yystack_[1].value.node));

        (yystack_[10].value.node)->appendChild("upper", (yystack_[3].value.node));
        (yystack_[10].value.node)->appendChild("lower", (yystack_[7].value.node));
        (yystack_[10].value.node)->appendChild("increment", (yystack_[5].value.node));

        (yylhs.value.node) = (yystack_[10].value.node);
    }
#line 1640 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 19:
#line 316 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[4].value.str); // shut up, bison...
        
        (yystack_[8].value.node)->appendChild("macro_name", (yystack_[7].value.node));
        (yystack_[8].value.node)->appendChild("text", (yystack_[1].value.node));

        (yystack_[8].value.node)->appendChild("upper", (yystack_[3].value.node));
        (yystack_[8].value.node)->appendChild("lower", (yystack_[5].value.node));
        // if "increment" and "increment_t" are both missing, assume increment = 1

        (yylhs.value.node) = (yystack_[8].value.node);
    }
#line 1657 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 20:
#line 329 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[9].value.node)->appendChild("macro_name", (yystack_[8].value.node));
        (yystack_[9].value.node)->appendChild("text", (yystack_[1].value.node));

        (yystack_[9].value.node)->appendChild("upper", (yystack_[3].value.node));
        (yystack_[9].value.node)->appendChild("lower", (yystack_[6].value.node));
        (yystack_[9].value.node)->appendChild("increment_t", (yystack_[5].value.node));

        (yylhs.value.node) = (yystack_[9].value.node);
    }
#line 1672 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 21:
#line 340 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[9].value.node)->appendChild("macro_name", (yystack_[8].value.node));
        (yystack_[9].value.node)->appendChild("text", (yystack_[1].value.node));

        (yystack_[9].value.node)->appendChild("upper", (yystack_[3].value.node));
        (yystack_[9].value.node)->appendChild("lower", (yystack_[6].value.node));
        (yystack_[9].value.node)->appendChild("increment_t", (yystack_[5].value.node));

        (yylhs.value.node) = (yystack_[9].value.node);
    }
#line 1687 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 24:
#line 359 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_if_cmd");
        node->appendChild("expression", (yystack_[1].value.node));
        node->appendChild("compound_cmd", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 1699 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 25:
#line 370 "ado.ypp" // lalr1.cc:859
    {
        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 1707 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 26:
#line 377 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_compound_cmd");

        node->appendChild((yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 1719 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 27:
#line 385 "ado.ypp" // lalr1.cc:859
    {
        (yylhs.value.node) = (yystack_[0].value.node);
    }
#line 1727 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 28:
#line 389 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.node)->appendChild((yystack_[0].value.node));

        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 1737 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 29:
#line 395 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.node)->appendChild((yystack_[0].value.node));

        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 1747 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 32:
#line 407 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[0].value.node); // suppressing a stupid bison warning

        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 1757 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 33:
#line 413 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[2].value.node)->prependChild((yystack_[4].value.node));
        (yystack_[2].value.node)->appendChild("main_cmd", (yystack_[1].value.node));

        (yystack_[0].value.node); // suppressing a stupid bison warning

        (yylhs.value.node) = (yystack_[2].value.node);
    }
#line 1770 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 34:
#line 422 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[2].value.node)->prependChild((yystack_[4].value.node));
        (yystack_[2].value.node)->appendChild("main_cmd", (yystack_[1].value.node));

        (yystack_[0].value.node); // suppressing a stupid bison warning

        (yylhs.value.node) = (yystack_[2].value.node);
    }
#line 1783 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 35:
#line 431 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_modifier_cmd_list");

        (yystack_[0].value.node); // suppressing a stupid bison warning

        node->appendChild((yystack_[3].value.node));
        node->appendChild("main_cmd", (yystack_[1].value.node));

        (yylhs.value.node) = node;
    }
#line 1798 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 36:
#line 442 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[0].value.node); // suppressing a stupid bison warning

        (yystack_[2].value.node)->appendChild("main_cmd", (yystack_[1].value.node));

        (yylhs.value.node) = (yystack_[2].value.node);
    }
#line 1810 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 37:
#line 450 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[0].value.node); // suppressing a stupid bison warning

        (yystack_[3].value.node)->appendChild("main_cmd", (yystack_[1].value.node));

        (yylhs.value.node) = (yystack_[3].value.node);
    }
#line 1822 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 38:
#line 458 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[0].value.node); // suppressing a stupid bison warning

        (yystack_[2].value.node)->appendChild("main_cmd", (yystack_[1].value.node));

        (yylhs.value.node) = (yystack_[2].value.node);
    }
#line 1834 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 39:
#line 466 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[0].value.node); // suppressing a stupid bison warning

        (yystack_[3].value.node)->appendChild("main_cmd", (yystack_[1].value.node));

        (yylhs.value.node) = (yystack_[3].value.node);
    }
#line 1846 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 40:
#line 474 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[0].value.node); // suppressing a stupid bison warning

        (yystack_[4].value.node)->appendChild((yystack_[3].value.node));
        (yystack_[4].value.node)->appendChild("main_cmd", (yystack_[1].value.node));

        (yylhs.value.node) = (yystack_[4].value.node);
    }
#line 1859 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 41:
#line 483 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[0].value.node); // suppressing a stupid bison warning

        (yystack_[4].value.node)->appendChild((yystack_[3].value.node));
        (yystack_[4].value.node)->appendChild("main_cmd", (yystack_[1].value.node));

        (yylhs.value.node) = (yystack_[4].value.node);
    }
#line 1872 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 42:
#line 492 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[0].value.node); // suppressing a stupid bison warning

        (yystack_[5].value.node)->appendChild((yystack_[4].value.node));
        (yystack_[5].value.node)->appendChild((yystack_[2].value.node));
        (yystack_[5].value.node)->appendChild("main_cmd", (yystack_[1].value.node));

        (yylhs.value.node) = (yystack_[5].value.node);
    }
#line 1886 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 43:
#line 502 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[0].value.node); // suppressing a stupid bison warning

        (yystack_[5].value.node)->appendChild((yystack_[4].value.node));
        (yystack_[5].value.node)->appendChild((yystack_[2].value.node));
        (yystack_[5].value.node)->appendChild("main_cmd", (yystack_[1].value.node));

        (yylhs.value.node) = (yystack_[5].value.node);
    }
#line 1900 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 44:
#line 515 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[0].value.str); // suppressing a stupid bison warning

        (yylhs.value.node) = new ExprNode();
    }
#line 1910 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 45:
#line 521 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[0].value.str); // suppressing a stupid bison warning

        (yylhs.value.node) = new ExprNode();
    }
#line 1920 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 46:
#line 530 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_cmd", "ado_modifier_cmd"});
        node->appendChild("verb", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 1931 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 47:
#line 537 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_cmd", "ado_modifier_cmd"});
        node->appendChild("verb", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 1942 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 48:
#line 544 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_cmd", "ado_modifier_cmd"});
        node->appendChild("verb", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 1953 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 49:
#line 554 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_cmd", "ado_general_cmd"});
        node->appendChild("verb", (yystack_[2].value.node));

        node->appendChild("expression_list", (yystack_[1].value.node));

        if((yystack_[0].value.node)->nChildren() > 0)
          node->appendChild("option_list", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 1969 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 50:
#line 566 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_cmd", "ado_general_cmd"});
        node->appendChild("verb", (yystack_[2].value.node));

        node->appendChild("expression_list", (yystack_[1].value.node));

        if((yystack_[0].value.node)->nChildren() > 0)
          node->appendChild("option_list", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 1985 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 51:
#line 578 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_cmd", "ado_general_cmd"});
        node->appendChild("verb", (yystack_[1].value.node));

        if((yystack_[0].value.node)->nChildren() > 0)
          node->appendChild("option_list", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 1999 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 52:
#line 591 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_modifier_cmd_list");
        node->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2009 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 53:
#line 597 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.node)->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 2018 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 54:
#line 605 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_cmd", "ado_general_cmd"});
        node->appendChild("verb", (yystack_[6].value.node));
        node->appendChild("expression_list", (yystack_[5].value.node));

        if((yystack_[4].value.node)->nChildren() > 0)
            node->appendChild("if_clause", (yystack_[4].value.node));

        if((yystack_[3].value.node)->nChildren() > 0)
            node->appendChild("in_clause", (yystack_[3].value.node));

        if((yystack_[2].value.node)->nChildren() > 0)
            node->appendChild("weight_clause", (yystack_[2].value.node));

        if((yystack_[1].value.node)->nChildren() > 0)
            node->appendChild("using_clause", (yystack_[1].value.node));

        if((yystack_[0].value.node)->nChildren() > 0)
            node->appendChild("option_list", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 2045 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 55:
#line 628 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_cmd", "ado_general_cmd"});
        node->appendChild("verb", (yystack_[5].value.node));

        if((yystack_[4].value.node)->nChildren() > 0)
            node->appendChild("if_clause", (yystack_[4].value.node));

        if((yystack_[3].value.node)->nChildren() > 0)
            node->appendChild("in_clause", (yystack_[3].value.node));

        if((yystack_[2].value.node)->nChildren() > 0)
            node->appendChild("weight_clause", (yystack_[2].value.node));

        if((yystack_[1].value.node)->nChildren() > 0)
            node->appendChild("using_clause", (yystack_[1].value.node));

        if((yystack_[0].value.node)->nChildren() > 0)
            node->appendChild("option_list", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 2071 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 56:
#line 655 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_cmd", "ado_general_cmd"});
        node->appendChild("verb", (yystack_[4].value.node));

        if((yystack_[2].value.node)->nChildren() > 0)
            node->appendChild("expression_list", (yystack_[2].value.node));

        if((yystack_[1].value.node)->nChildren() > 0)
            node->appendChild("using_clause", (yystack_[1].value.node));

        // we're going to make the merge_spec an option
        ExprNode *opt = new ExprNode("ado_option");
        ExprNode *name = new ExprNode({"ado_literal", "ado_ident"});
        name->addData("value", *(new std::string("merge_spec")));
        opt->appendChild("name", name);
        
        ExprNode *arglist = new ExprNode("ado_argument_expression_list");
        ExprNode *explist = new ExprNode("ado_expression_list");
        explist->appendChild((yystack_[3].value.node));
        arglist->appendChild(explist);
        opt->appendChild("args", arglist);
        
        (yystack_[0].value.node)->appendChild(opt);
        node->appendChild("option_list", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 2103 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 57:
#line 683 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_cmd", "ado_general_cmd"});
        node->appendChild("verb", (yystack_[2].value.node));

        node->appendChild("expression_list", (yystack_[1].value.node));
        
        if((yystack_[0].value.node)->nChildren() > 0)
            node->appendChild("option_list", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 2119 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 58:
#line 695 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_cmd", "ado_general_cmd"});
        node->appendChild("verb", (yystack_[11].value.node));

        (yystack_[9].value.node)->prependChild((yystack_[10].value.node));
        node->appendChild("expression_list", (yystack_[9].value.node));

        if((yystack_[3].value.node)->nChildren() > 0)
            node->appendChild("if_clause", (yystack_[3].value.node));

        if((yystack_[2].value.node)->nChildren() > 0)
            node->appendChild("in_clause", (yystack_[2].value.node));

        if((yystack_[1].value.node)->nChildren() > 0)
            node->appendChild("weight_clause", (yystack_[1].value.node));

        // We're going to make the other two varlists into options
        ExprNode *endogenous_opt = new ExprNode("ado_option");
        ExprNode *endogenous_name = new ExprNode({"ado_literal", "ado_ident"});
        endogenous_name->addData("value", *(new std::string("endogenous_vars")));
        endogenous_opt->appendChild("name", endogenous_name);
        
        ExprNode *endogenous_args = new ExprNode("ado_argument_expression_list");
        endogenous_args->appendChild((yystack_[7].value.node));
        endogenous_opt->appendChild("args", endogenous_args);

        ExprNode *instrumental_opt = new ExprNode("ado_option");
        ExprNode *instrumental_name = new ExprNode({"ado_literal", "ado_ident"});
        instrumental_name->addData("value", *(new std::string("instrumental_vars")));
        instrumental_opt->appendChild("name", instrumental_name);
        
        ExprNode *instrumental_args = new ExprNode("ado_argument_expression_list");
        instrumental_args->appendChild((yystack_[5].value.node));
        instrumental_opt->appendChild("args", instrumental_args);
        
        (yystack_[1].value.node)->appendChild(endogenous_opt);
        (yystack_[1].value.node)->appendChild(instrumental_opt);
        node->appendChild("option_list", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 2165 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 59:
#line 737 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_cmd", "ado_general_cmd"});
        node->appendChild("verb", (yystack_[2].value.node));

        node->appendChild("expression_list", (yystack_[1].value.node));

        if((yystack_[0].value.node)->nChildren() > 0)
            node->appendChild("option_list", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 2181 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 60:
#line 749 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *cmd = new ExprNode({"ado_cmd", "ado_general_cmd"});
        cmd->appendChild("verb", (yystack_[5].value.node));

        /* the components which are correct as-is */
        if((yystack_[3].value.node)->nChildren() > 0)
            cmd->appendChild("if_clause", (yystack_[3].value.node));

        if((yystack_[2].value.node)->nChildren() > 0)
            cmd->appendChild("in_clause", (yystack_[2].value.node));

        if((yystack_[1].value.node)->nChildren() > 0)
            cmd->appendChild("weight_clause", (yystack_[1].value.node));

        if((yystack_[0].value.node)->nChildren() > 0)
            cmd->appendChild("option_list", (yystack_[0].value.node));

        /* the expression list we need to wrap in a function call */
        ExprNode *node = new ExprNode({"ado_expression", "ado_postfix_expression"});
        node->addData("verb", *(new std::string("()")));
        
        // the "left" child
        ExprNode *left = new ExprNode({"ado_literal", "ado_ident"});
        left->addData("value", *(new std::string("collapse_stat")));
        node->appendChild("left", left);
        
        // the "right" child
        ExprNode *mean = new ExprNode({"ado_literal", "ado_ident"});
        mean->addData("value", *(new std::string("mean")));

        ExprNode *explist = new ExprNode("ado_expression_list");
        ExprNode *arglist = new ExprNode("ado_argument_expression_list");
        
        explist->appendChild(mean); // stat goes first
        arglist->appendChild(explist);
        arglist->appendChild((yystack_[4].value.node)); // variable names or assignments follow
        
        node->appendChild("right", arglist);
        cmd->appendChild("expression_list", node);
        
        (yylhs.value.node) = cmd;
    }
#line 2228 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 61:
#line 792 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_cmd", "ado_general_cmd"});
        node->appendChild("verb", (yystack_[5].value.node));

        node->appendChild("expression_list", (yystack_[4].value.node));

        if((yystack_[3].value.node)->nChildren() > 0)
            node->appendChild("if_clause", (yystack_[3].value.node));

        if((yystack_[2].value.node)->nChildren() > 0)
            node->appendChild("in_clause", (yystack_[2].value.node));

        if((yystack_[1].value.node)->nChildren() > 0)
            node->appendChild("weight_clause", (yystack_[1].value.node));

        if((yystack_[0].value.node)->nChildren() > 0)
            node->appendChild("option_list", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 2253 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 62:
#line 813 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_cmd", "ado_general_cmd"});
        node->appendChild("verb", (yystack_[2].value.node));

        node->appendChild("expression_list", (yystack_[1].value.node));

        if((yystack_[0].value.node)->nChildren() > 0)
            node->appendChild("option_list", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 2269 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 63:
#line 825 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_cmd", "ado_general_cmd"});
        node->appendChild("verb", (yystack_[6].value.node));

        (yystack_[4].value.node)->prependChild((yystack_[5].value.node));
        node->appendChild("expression_list", (yystack_[4].value.node));
        
        if((yystack_[3].value.node)->nChildren() > 0)
            node->appendChild("if_clause", (yystack_[3].value.node));

        if((yystack_[2].value.node)->nChildren() > 0)
            node->appendChild("in_clause", (yystack_[2].value.node));

        if((yystack_[1].value.node)->nChildren() > 0)
            node->appendChild("weight_clause", (yystack_[1].value.node));

        if((yystack_[0].value.node)->nChildren() > 0)
            node->appendChild("option_list", (yystack_[0].value.node));
        
        (yylhs.value.node) = node;
    }
#line 2295 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 64:
#line 847 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_cmd", "ado_general_cmd"});
        node->appendChild("verb", (yystack_[4].value.node));

        node->appendChild("expression_list", (yystack_[3].value.node));

        if((yystack_[2].value.node)->nChildren() > 0)
            node->appendChild("if_clause", (yystack_[2].value.node));

        if((yystack_[1].value.node)->nChildren() > 0)
            node->appendChild("in_clause", (yystack_[1].value.node));

        if((yystack_[0].value.node)->nChildren() > 0)
            node->appendChild("option_list", (yystack_[0].value.node));
        
        (yylhs.value.node) = node;
    }
#line 2317 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 65:
#line 869 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_expression_list");
        node->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2327 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 66:
#line 875 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.node)->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 2336 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 69:
#line 888 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_expression_list");
        node->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2346 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 70:
#line 894 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.node)->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 2355 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 72:
#line 904 "ado.ypp" // lalr1.cc:859
    {
        // this would be an assignment expression as usual, except that
        // for every single other command than this one, assignment expressions
        // shouldn't be allowed in function argument lists. they're not allowed here
        // syntactically either, and it'd be an even uglier hack to allow them everywhere
        // just for this internal representation.
        ExprNode *node = new ExprNode({"ado_expression", "ado_postfix_expression"});
        node->addData("verb", *(new std::string("()")));
        
        // the "left" child
        ExprNode *left = new ExprNode({"ado_literal", "ado_ident"});
        left->addData("value", *(new std::string("collapse_newvar")));
        node->appendChild("left", left);

        // the "right" child
        ExprNode *arglist = new ExprNode("ado_argument_expression_list");
        ExprNode *explist = new ExprNode("ado_expression_list");
        explist->appendChild((yystack_[2].value.node));
        explist->appendChild((yystack_[0].value.node));
        arglist->appendChild(explist);
        
        node->appendChild("right", arglist);
        (yylhs.value.node) = node;
    }
#line 2384 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 73:
#line 932 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_expression_list");
        node->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2394 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 74:
#line 938 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.node)->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 2403 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 75:
#line 946 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_postfix_expression"});
        node->addData("verb", *(new std::string("()")));
        
        // the "left" child
        ExprNode *left = new ExprNode({"ado_literal", "ado_ident"});
        left->addData("value", *(new std::string("collapse_stat")));
        node->appendChild("left", left);
        
        // the "right" child
        ExprNode *explist = new ExprNode("ado_expression_list");
        explist->appendChild((yystack_[2].value.node)); // stat goes first
        ExprNode *arglist = new ExprNode("ado_argument_expression_list");
        arglist->appendChild(explist);
        arglist->appendChild((yystack_[0].value.node)); // variable names or assignments follow
        
        node->appendChild("right", arglist);
        (yylhs.value.node) = node;
    }
#line 2427 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 76:
#line 969 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_expression_list");
        node->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2437 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 77:
#line 975 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.node)->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 2446 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 79:
#line 985 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_postfix_expression"});
        node->addData("verb", *(new std::string("()")));
        
        // the "left" child
        ExprNode *left = new ExprNode({"ado_literal", "ado_ident"});
        left->addData("value", *(new std::string("recode_rule_ident")));
        node->appendChild("left", left);
        
        // the "right" child
        ExprNode *explist = new ExprNode("ado_expression_list");
        explist->appendChild((yystack_[1].value.node)); // destination value goes first
        explist->appendChild((yystack_[3].value.node));
        ExprNode *arglist = new ExprNode("ado_argument_expression_list");
        arglist->appendChild(explist);
        
        node->appendChild("right", arglist);
        (yylhs.value.node) = node;
    }
#line 2470 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 80:
#line 1005 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[4].value.str); // shut up, bison...

        ExprNode *node = new ExprNode({"ado_expression", "ado_postfix_expression"});
        node->addData("verb", *(new std::string("()")));
        
        // the "left" child
        ExprNode *left = new ExprNode({"ado_literal", "ado_ident"});
        left->addData("value", *(new std::string("recode_rule_range")));
        node->appendChild("left", left);
        
        // the "right" child
        ExprNode *explist = new ExprNode("ado_expression_list");
        explist->appendChild((yystack_[1].value.node)); // destination value goes first
        explist->appendChild((yystack_[3].value.node)); // then the upper range limit
        explist->appendChild((yystack_[5].value.node)); // then the lower range limit
        ExprNode *arglist = new ExprNode("ado_argument_expression_list");
        arglist->appendChild(explist);
        
        node->appendChild("right", arglist);
        (yylhs.value.node) = node;
    }
#line 2497 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 81:
#line 1028 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_postfix_expression"});
        node->addData("verb", *(new std::string("()")));
        
        // the "left" child
        ExprNode *left = new ExprNode({"ado_literal", "ado_ident"});
        left->addData("value", *(new std::string("recode_rule_numlist")));
        node->appendChild("left", left);
        
        // the "right" child
        ExprNode *explist = new ExprNode("ado_expression_list");
        explist->appendChild((yystack_[1].value.node)); // destination value goes first
        ExprNode *arglist = new ExprNode("ado_argument_expression_list");
        arglist->appendChild(explist);
        arglist->appendChild((yystack_[3].value.node)); // this is flattened in the code generator
        
        node->appendChild("right", arglist);
        (yylhs.value.node) = node;
    }
#line 2521 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 82:
#line 1051 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_expression_list");
        node->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2531 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 83:
#line 1057 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.node)->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 2540 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 84:
#line 1066 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_postfix_expression"});
        node->addData("verb", *(new std::string("()")));
        node->appendChild("right", (yystack_[0].value.node));
        
        ExprNode *left = new ExprNode({"ado_literal", "ado_ident"});
        left->addData("value", *(new std::string("asc")));
        node->appendChild("left", left);
        
        (yylhs.value.node) = node;
    }
#line 2556 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 85:
#line 1078 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.str); // shut up, bison...
        
        ExprNode *node = new ExprNode({"ado_expression", "ado_postfix_expression"});
        node->addData("verb", *(new std::string("()")));
        node->appendChild("right", (yystack_[0].value.node));
        
        ExprNode *left = new ExprNode({"ado_literal", "ado_ident"});
        left->addData("value", *(new std::string("asc")));
        node->appendChild("left", left);

        (yylhs.value.node) = node;
    }
#line 2574 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 86:
#line 1092 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.str); // shut up, bison...
        
        ExprNode *node = new ExprNode({"ado_expression", "ado_postfix_expression"});
        node->addData("verb", *(new std::string("()")));
        node->appendChild("right", (yystack_[0].value.node));
        
        ExprNode *left = new ExprNode({"ado_literal", "ado_ident"});
        left->addData("value", *(new std::string("desc")));
        node->appendChild("left", left);

        (yylhs.value.node) = node;
    }
#line 2592 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 87:
#line 1109 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_expression_list");
        node->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2602 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 88:
#line 1115 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.node)->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 2611 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 91:
#line 1126 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_postfix_expression"});
        node->addData("verb", *(new std::string("()")));

        ExprNode *left = new ExprNode({"ado_literal", "ado_ident"});
        left->addData("value", *(new std::string("lrtest_term_list")));
        node->appendChild("left", left);

        ExprNode *arglist = new ExprNode("ado_argument_expression_list");
        arglist->appendChild((yystack_[1].value.node));
        node->appendChild("right", arglist);
        
        (yylhs.value.node) = node;
    }
#line 2630 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 92:
#line 1144 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_expression_list");
        node->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2640 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 93:
#line 1150 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.node)->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 2649 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 95:
#line 1160 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.str); // shut up, bison...
        
        ExprNode *node = new ExprNode({"ado_expression", "ado_anova_nest_expression"});
        node->addData("verb", *(new std::string("%anova_nest%")));
        node->appendChild("left", (yystack_[2].value.node));
        node->appendChild("right", (yystack_[0].value.node));
        
        (yylhs.value.node) = node;
    }
#line 2664 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 97:
#line 1175 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[0].value.str); // shut up, bison...
        
        ExprNode *node = new ExprNode({"ado_expression", "ado_anova_error_expression"});
        node->addData("verb", *(new std::string("%anova_error%")));
        node->appendChild("left", (yystack_[1].value.node));
        
        (yylhs.value.node) = node;
    }
#line 2678 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 98:
#line 1188 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_expression_list");
        node->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2688 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 99:
#line 1194 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.node)->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 2697 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 139:
#line 1288 "ado.ypp" // lalr1.cc:859
    {
        (yylhs.value.node) = (yystack_[0].value.node);
    }
#line 2705 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 140:
#line 1292 "ado.ypp" // lalr1.cc:859
    {
        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 2713 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 141:
#line 1296 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_type_expression"});
        node->addData("verb", *((yystack_[3].value.str)));
        node->appendChild("left", (yystack_[1].value.node));

        (yylhs.value.node) = node;
    }
#line 2725 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 142:
#line 1304 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_type_expression"});
        node->addData("verb", *((yystack_[1].value.str)));

        ExprNode *lst = new ExprNode("ado_expression_list");
        lst->appendChild((yystack_[0].value.node));
        node->appendChild("left", lst);

        (yylhs.value.node) = node;
    }
#line 2740 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 144:
#line 1319 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.node)->appendChild("left", (yystack_[0].value.node));

        (yylhs.value.node) = (yystack_[1].value.node); // ExprNode constructed by the lexer, which is a bit of a hack
    }
#line 2750 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 146:
#line 1329 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_cross_expression"});
        node->addData("verb", *((yystack_[1].value.str)));
        node->appendChild("left", (yystack_[2].value.node));
        node->appendChild("right", (yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2762 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 148:
#line 1341 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_postfix_expression"});
        node->addData("verb", std::string("[]"));
        node->appendChild("left", (yystack_[3].value.node));
        node->appendChild("right", (yystack_[1].value.node));

        (yylhs.value.node) = node;
    }
#line 2775 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 149:
#line 1350 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_postfix_expression"});
        node->addData("verb", std::string("()"));
        node->appendChild("left", (yystack_[2].value.node));

        (yylhs.value.node) = node;
    }
#line 2787 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 150:
#line 1358 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_postfix_expression"});
        node->addData("verb", std::string("()"));
        node->appendChild("left", (yystack_[3].value.node));
        node->appendChild("right", (yystack_[1].value.node));

        (yylhs.value.node) = node;
    }
#line 2800 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 152:
#line 1371 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_arithmetic_expression", "ado_power_expression"});
        node->addData("verb", *((yystack_[1].value.str)));
        node->appendChild("left", (yystack_[2].value.node));
        node->appendChild("right", (yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2812 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 154:
#line 1383 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_arithmetic_expression", "ado_unary_expression"});
        node->addData("verb", *((yystack_[1].value.str)));
        node->appendChild("right", (yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2823 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 156:
#line 1394 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_arithmetic_expression", "ado_multiplication_expression"});
        node->addData("verb", *((yystack_[1].value.str)));
        node->appendChild("left", (yystack_[2].value.node));
        node->appendChild("right", (yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2835 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 158:
#line 1406 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_arithmetic_expression", "ado_additive_expression"});
        node->addData("verb", *((yystack_[1].value.str)));
        node->appendChild("left", (yystack_[2].value.node));
        node->appendChild("right", (yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2847 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 160:
#line 1418 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_relational_expression"});
        node->addData("verb", *((yystack_[1].value.str)));
        node->appendChild("left", (yystack_[2].value.node));
        node->appendChild("right", (yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2859 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 162:
#line 1430 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_equality_expression"});
        node->addData("verb", *((yystack_[1].value.str)));
        node->appendChild("left", (yystack_[2].value.node));
        node->appendChild("right", (yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2871 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 164:
#line 1442 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_logical_expression"});
        node->addData("verb", *((yystack_[1].value.str)));
        node->appendChild("left", (yystack_[2].value.node));
        node->appendChild("right", (yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2883 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 166:
#line 1454 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode({"ado_expression", "ado_assignment_expression"});
        node->addData("verb", "=");
        node->appendChild("left", (yystack_[2].value.node));
        node->appendChild("right", (yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2895 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 167:
#line 1465 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_expression_list");
        node->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2905 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 168:
#line 1471 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.node)->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 2914 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 169:
#line 1479 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_argument_expression_list");
        node->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2924 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 170:
#line 1485 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[2].value.node)->appendChild((yystack_[0].value.node));

        (yylhs.value.node) = (yystack_[2].value.node);
    }
#line 2934 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 171:
#line 1500 "ado.ypp" // lalr1.cc:859
    {
        (yylhs.value.node) = new ExprNode("ado_option_list");
    }
#line 2942 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 172:
#line 1504 "ado.ypp" // lalr1.cc:859
    {
        (yylhs.value.node) = (yystack_[0].value.node);
    }
#line 2950 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 173:
#line 1511 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_option_list");
        node->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = node;
    }
#line 2960 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 174:
#line 1517 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.node)->appendChild((yystack_[0].value.node));
        (yylhs.value.node) = (yystack_[1].value.node);
    }
#line 2969 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 175:
#line 1525 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_option");
        node->appendChild("name", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 2980 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 176:
#line 1532 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_option");
        node->appendChild("name", (yystack_[3].value.node));
        node->appendChild("args", (yystack_[1].value.node));

        (yylhs.value.node) = node;
    }
#line 2992 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 191:
#line 1568 "ado.ypp" // lalr1.cc:859
    {
        (yylhs.value.node) = new ExprNode("ado_weight_clause");
    }
#line 3000 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 192:
#line 1572 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[2].value.node)->appendChild("right", (yystack_[1].value.node));
        (yylhs.value.node) = (yystack_[2].value.node);
    }
#line 3009 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 193:
#line 1586 "ado.ypp" // lalr1.cc:859
    {
        (yylhs.value.node) = new ExprNode("ado_if_clause");
    }
#line 3017 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 194:
#line 1590 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_if_clause");
        node->appendChild("if_expression", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 3028 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 195:
#line 1606 "ado.ypp" // lalr1.cc:859
    {
        (yylhs.value.node) = new ExprNode("ado_in_clause");
    }
#line 3036 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 196:
#line 1610 "ado.ypp" // lalr1.cc:859
    {
        (yystack_[1].value.str); // suppressing a stupid bison warning

        ExprNode *node = new ExprNode("ado_in_clause");
        node->appendChild("lower", (yystack_[2].value.node));
        node->appendChild("upper", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 3050 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 197:
#line 1620 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_in_clause");
        node->appendChild("upper", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 3061 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 198:
#line 1636 "ado.ypp" // lalr1.cc:859
    {
        (yylhs.value.node) = new ExprNode("ado_using_clause");
    }
#line 3069 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 199:
#line 1640 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_using_clause");
        node->appendChild("filename", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 3080 "ado.tab.cpp" // lalr1.cc:859
    break;

  case 200:
#line 1647 "ado.ypp" // lalr1.cc:859
    {
        ExprNode *node = new ExprNode("ado_using_clause");
        node->appendChild("filename", (yystack_[0].value.node));

        (yylhs.value.node) = node;
    }
#line 3091 "ado.tab.cpp" // lalr1.cc:859
    break;


#line 3095 "ado.tab.cpp" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
   AdoParser ::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
   AdoParser ::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short int  AdoParser ::yypact_ninf_ = -214;

  const signed char  AdoParser ::yytable_ninf_ = -1;

  const short int
   AdoParser ::yypact_[] =
  {
     286,  -214,  -214,  -214,   631,    36,  -214,   504,   343,   504,
    -214,  -214,  -214,    56,    23,    89,    86,   298,    28,   124,
     504,   134,   137,   213,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,   167,    88,    41,  -214,   602,  -214,   504,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,   504,  -214,  -214,
    -214,  -214,    93,   560,   267,  -214,  -214,  -214,  -214,    18,
     104,   160,  -214,   179,    96,   230,   209,   211,  -214,    36,
     130,   343,   644,   343,  -214,   343,   504,   177,   200,  -214,
      34,  -214,    22,   192,   256,  -214,  -214,    20,   216,   218,
    -214,  -214,   195,   192,  -214,  -214,  -214,   118,   560,   243,
      30,   260,  -214,  -214,  -214,   672,   120,    41,  -214,   272,
      41,  -214,  -214,  -214,  -214,   282,  -214,   504,  -214,   160,
    -214,  -214,  -214,   560,   383,   504,  -214,   560,  -214,  -214,
     504,  -214,  -214,   504,  -214,  -214,  -214,  -214,   504,  -214,
    -214,   504,  -214,  -214,  -214,   504,   504,  -214,   130,   504,
     250,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,  -214,  -214,   644,  -214,   309,  -214,
    -214,   423,   310,   284,  -214,   130,  -214,   130,  -214,   100,
     300,   307,  -214,  -214,    13,  -214,   130,  -214,  -214,  -214,
    -214,   163,  -214,  -214,    80,  -214,   520,    18,  -214,  -214,
    -214,   156,   291,   504,   614,    41,    41,    41,  -214,   614,
    -214,  -214,   464,  -214,  -214,   504,   248,   185,   104,  -214,
     179,    96,   230,   249,   209,   250,   303,   674,   263,  -214,
     504,   225,   317,   294,  -214,   250,   250,   192,  -214,   296,
     297,   315,  -214,  -214,   317,  -214,  -214,   560,  -214,   130,
     299,   318,   192,   192,   131,    26,   122,   184,    41,    41,
    -214,  -214,  -214,    41,   614,    41,  -214,  -214,   504,  -214,
     263,   504,   335,   317,   289,  -214,  -214,  -214,   294,   317,
     317,    24,   338,   322,   346,  -214,    18,   250,   345,   350,
     119,   210,   150,   327,   329,   324,   332,    10,  -214,  -214,
    -214,    41,    41,  -214,   504,   317,  -214,  -214,  -214,  -214,
    -214,  -214,   192,   334,  -214,  -214,   317,   333,   336,   337,
     339,   340,   357,   358,   364,   382,   361,   362,  -214,  -214,
    -214,   164,   387,  -214,   385,   386,   389,   390,   392,  -214,
    -214,   366,   370,   396,   397,   351,  -214,  -214,  -214,  -214,
    -214,  -214,   398,   420,   375,   399,   130,   400,  -214,   421,
     424,   250,   425,  -214,  -214,   317,  -214,  -214
  };

  const unsigned char
   AdoParser ::yydefact_[] =
  {
       0,     5,    44,    45,     0,   193,    31,     0,   171,     0,
      47,    46,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     9,    10,     8,     7,     6,
      30,    52,     0,     0,     0,    27,     0,    26,     0,   108,
     109,   107,   133,   132,   134,   135,   136,   137,   100,   101,
     102,   103,   104,   105,   129,   131,   130,     0,   110,   112,
     111,   113,     0,     0,     0,   138,   139,   143,   145,   147,
     151,   153,   155,   157,   159,   161,   163,   165,   167,   193,
     195,   171,     0,   171,    51,   171,     0,     0,    71,    73,
     193,    76,   193,     0,     0,    78,    82,   193,     0,     0,
      84,    87,   171,     0,    89,    90,    92,   171,     0,     0,
       0,     0,     1,     4,     3,     0,     0,     0,    53,     0,
       0,    32,    25,    29,    28,     0,   194,     0,   142,   154,
     144,   127,   128,     0,     0,     0,   114,     0,   115,   116,
       0,   117,   118,     0,   119,   120,   121,   122,     0,   123,
     124,     0,   106,   126,   125,     0,     0,   168,   195,     0,
     191,    50,   177,   178,   180,   179,   182,   181,   183,   184,
     185,   187,   186,   188,   189,   190,   172,   173,   175,    57,
      49,   198,     0,     0,    74,   195,    77,   195,    65,     0,
      67,     0,    68,    69,     0,    83,   195,    85,    86,    88,
      59,     0,    93,    62,    96,    98,   193,    94,    24,    22,
      23,     0,     0,     0,     0,     0,     0,     0,    38,     0,
      36,   140,     0,   146,   149,   169,     0,     0,   152,   156,
     158,   160,   162,   166,   164,   191,   197,     0,   198,   174,
       0,     0,   171,     0,    72,   191,   191,     0,    66,     0,
       0,     0,    67,    70,   171,    91,    97,     0,    99,   195,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    39,    37,     0,     0,     0,   141,   150,     0,   148,
     198,     0,     0,   171,     0,   200,   199,    56,    75,   171,
     171,     0,     0,     0,     0,    64,    95,   191,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,    34,
      41,     0,     0,    40,   170,   171,   196,   192,    55,   176,
      60,    61,     0,     0,    79,    81,   171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    42,
      54,     0,     0,    63,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,   193,    80,    13,    14,    15,
      16,    17,     0,     0,     0,     0,   195,     0,    19,     0,
       0,   191,     0,    20,    21,   171,    18,    58
  };

  const short int
   AdoParser ::yypgoto_[] =
  {
    -214,  -214,   414,  -214,  -214,  -214,  -214,     8,  -214,    27,
     -31,   -22,   405,   -99,   -24,   -98,  -171,  -174,   -76,   197,
     349,  -214,   347,  -214,   341,  -214,   342,  -214,  -214,   240,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,   217,   384,   314,   -91,   344,   407,  -125,
     330,   -25,   323,   319,   321,   -19,     1,   237,   -81,  -214,
     302,  -214,  -213,   -72,  -145,  -184
  };

  const short int
   AdoParser ::yydefgoto_[] =
  {
      -1,    23,    24,    25,    26,   211,    27,    28,    36,    29,
      30,    31,    32,    33,    34,   189,   193,   194,    89,    90,
      91,    92,    96,    97,   101,   102,   106,   107,   204,   205,
     206,    62,   155,    63,    64,   137,   140,   143,   148,   151,
     156,   133,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    83,   226,    84,   176,
     177,   178,   238,    80,   160,   242
  };

  const unsigned short int
   AdoParser ::yytable_[] =
  {
     161,   109,   179,   121,   180,   201,    79,   158,    81,   120,
      85,   118,    35,   235,   184,   229,   214,   207,   185,   125,
     187,   200,   280,   253,   336,   196,   203,    94,   251,    87,
      87,    37,   289,   290,   236,   103,   303,   266,   126,   322,
     245,   117,   246,    38,   123,   252,     2,     3,   131,   132,
     192,   254,    39,    95,   283,    40,    88,   248,    41,   248,
     157,   104,   157,   124,   157,   105,   157,    88,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,   326,    57,   218,   181,   337,   220,
     302,   215,   217,    94,   209,   253,   315,    57,     4,    57,
     127,   256,   116,    58,    59,    60,    61,   247,   257,   210,
     227,   134,   141,   265,   297,   207,   135,   208,   142,    95,
     274,     5,    86,   231,   216,   103,   128,    82,   222,   329,
       4,   253,   304,   248,   259,   225,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,   291,
      93,   104,   248,     5,   252,   105,   316,   108,   375,   192,
     331,   287,   157,   252,   300,   301,   296,   110,   192,   213,
     111,   255,   355,   295,    13,    14,    15,    16,    17,    18,
      19,   115,   252,   136,   270,   271,   272,   192,   252,   188,
     269,   305,   118,   192,   159,   275,   248,   248,   279,   138,
     139,   141,   318,   157,    82,   306,   157,   142,   320,   321,
     182,    98,   184,   112,   113,   183,   307,    99,     2,     3,
     330,   371,   268,     4,   341,   188,   152,   273,   100,   260,
     261,   262,   263,   264,   340,   149,   150,   308,   309,   153,
     154,   225,   310,   248,   313,   343,     5,   144,   145,   197,
     312,   198,   118,     4,   146,   147,   277,   278,   285,   286,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    38,   212,    20,   153,   154,   314,
     338,   339,   311,   366,    21,    22,   219,     1,   190,   191,
     221,     2,     3,   192,   377,   157,     4,   319,   278,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    98,   237,   240,   244,   243,     5,
      99,   249,   250,   267,   281,   241,    82,    88,   292,   293,
     324,   100,   298,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   294,   317,    20,
      38,   299,    82,   323,   325,   327,   334,    21,    22,    39,
     328,   332,    40,   333,   335,    41,   342,   344,   349,   350,
     345,   346,   351,   347,   348,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      38,   224,   352,   353,   354,   356,   357,   358,   362,    39,
     359,   360,    40,   361,   363,    41,   364,   365,   367,   369,
      58,    59,    60,    61,    57,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      38,   368,   373,   370,   372,   374,   376,   114,   119,    39,
     288,   186,    40,   199,   195,    41,   258,   223,   130,   202,
      58,    59,    60,    61,   282,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
     129,    38,   276,   230,   232,   234,   233,   284,   239,     0,
      39,   228,     0,    40,     0,   241,    41,     0,     0,     0,
      58,    59,    60,    61,     0,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    38,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,    40,     0,     0,    41,    38,     0,     0,
       0,    58,    59,    60,    61,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,     0,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    38,     0,     0,
       0,    58,    59,    60,    61,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,     0,     0,    58,    59,    60,
      61,     0,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     2,     3,     0,
       0,     0,     4,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,    58,    59,    60,
      61,     0,     0,     0,     0,     5,     2,     3,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     5,     0,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   213,     5,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     0,     0,   162,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,     5,    42,    43,    44,    45,
      46,    47,     0,     0,     0,     0,     0,     0,    54,    55,
      56,   213,     0,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19
  };

  const short int
   AdoParser ::yycheck_[] =
  {
      81,    20,    83,    34,    85,   103,     5,    79,     7,    33,
       9,    33,     4,   158,    90,   140,   115,   108,    90,    38,
      92,   102,   235,   194,    14,    97,   107,     7,    15,     7,
       7,     4,   245,   246,   159,     7,    10,   211,    57,    15,
     185,    33,   187,     7,    36,    32,     5,     6,    30,    31,
      37,   196,    16,    33,   238,    19,    33,    33,    22,    33,
      79,    33,    81,    36,    83,    37,    85,    33,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    63,   297,    63,   117,    86,    78,   120,
     264,   115,   116,     7,    64,   266,   280,    63,    10,    63,
       7,    21,    14,    67,    68,    69,    70,     7,    28,    79,
     135,     7,    16,   211,   259,   206,    12,   109,    22,    33,
     219,    33,    66,   148,   116,     7,    33,     9,   127,    10,
      10,   302,    10,    33,   206,   134,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,   247,
      61,    33,    33,    33,    32,    37,   281,    33,   371,    37,
      10,   242,   181,    32,   262,   263,   257,    33,    37,    49,
      33,     8,     8,   254,    54,    55,    56,    57,    58,    59,
      60,    14,    32,    23,   215,   216,   217,    37,    32,    33,
     214,     7,   214,    37,    64,   219,    33,    33,    13,    20,
      21,    16,   283,   222,     9,    21,   225,    22,   289,   290,
      33,    16,   288,     0,     1,    15,    32,    22,     5,     6,
      10,   366,   214,    10,   322,    33,    15,   219,    33,    73,
      74,    75,    76,    77,   315,    26,    27,   268,   269,    28,
      29,   240,   273,    33,   275,   326,    33,    17,    18,    33,
     274,    33,   274,    10,    24,    25,     8,     9,    33,    34,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,     7,    15,    63,    28,    29,   278,
     311,   312,   274,   355,    71,    72,    14,     1,    32,    33,
       8,     5,     6,    37,   375,   314,    10,     8,     9,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    16,    65,     7,    33,     8,    33,
      22,    21,    15,    32,    21,    62,     9,    33,    32,    32,
       8,    33,    33,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    32,    13,    63,
       7,    33,     9,    15,     8,    10,    32,    71,    72,    16,
      10,    34,    19,    34,    32,    22,    32,    34,    11,    11,
      34,    34,     8,    34,    34,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
       7,     8,    10,    32,    32,     8,    11,    11,    32,    16,
      11,    11,    19,    11,    34,    22,    10,    10,    10,    34,
      67,    68,    69,    70,    63,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
       7,    11,    11,    34,    34,    11,    11,    23,    33,    16,
     243,    92,    19,   102,    97,    22,   206,   133,    64,   107,
      67,    68,    69,    70,   237,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      63,     7,     8,   143,   151,   156,   155,   240,   176,    -1,
      16,   137,    -1,    19,    -1,    62,    22,    -1,    -1,    -1,
      67,    68,    69,    70,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    19,    -1,    -1,    22,     7,    -1,    -1,
      -1,    67,    68,    69,    70,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,     7,    -1,    -1,
      -1,    67,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    68,    69,
      70,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,     5,     6,    -1,
      -1,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    67,    68,    69,
      70,    -1,    -1,    -1,    -1,    33,     5,     6,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    33,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    49,    33,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    -1,    33,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    33,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60
  };

  const unsigned char
   AdoParser ::yystos_[] =
  {
       0,     1,     5,     6,    10,    33,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      63,    71,    72,    81,    82,    83,    84,    86,    87,    89,
      90,    91,    92,    93,    94,    87,    88,    89,     7,    16,
      19,    22,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    63,    67,    68,
      69,    70,   111,   113,   114,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     143,   136,     9,   136,   138,   136,    66,     7,    33,    98,
      99,   100,   101,    61,     7,    33,   102,   103,    16,    22,
      33,   104,   105,     7,    33,    37,   106,   107,    33,   135,
      33,    33,     0,     1,    82,    14,    14,    87,    91,    92,
      94,    90,    11,    87,    89,   135,   135,     7,    33,   128,
     124,    30,    31,   121,     7,    12,    23,   115,    20,    21,
     116,    16,    22,   117,    17,    18,    24,    25,   118,    26,
      27,   119,    15,    28,    29,   112,   120,   135,   143,    64,
     144,   138,    33,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,   139,   140,   141,   138,
     138,   136,    33,    15,    98,   143,   100,   143,    33,    95,
      32,    33,    37,    96,    97,   102,   143,    33,    33,   104,
     138,    95,   106,   138,   108,   109,   110,   126,    87,    64,
      79,    85,    15,    49,    93,    94,    87,    94,    90,    14,
      90,     8,   136,   125,     8,   136,   137,   131,   127,   129,
     130,   131,   132,   134,   133,   144,   129,    65,   142,   140,
       7,    62,   145,     8,    33,   144,   144,     7,    33,    21,
      15,    15,    32,    96,   144,     8,    21,    28,   109,   143,
      73,    74,    75,    76,    77,    95,    97,    32,    87,    94,
      90,    90,    90,    87,    93,    94,     8,     8,     9,    13,
     142,    21,   123,   145,   137,    33,    34,   138,    99,   142,
     142,    95,    32,    32,    32,   138,   126,   144,    33,    33,
      95,    95,    97,    10,    10,     7,    21,    32,    90,    90,
      90,    87,    94,    90,   136,   145,   129,    13,   138,     8,
     138,   138,    15,    15,     8,     8,   142,    10,    10,    10,
      10,    10,    34,    34,    32,    32,    14,    78,    90,    90,
     138,    95,    32,   138,    34,    34,    34,    34,    34,    11,
      11,     8,    10,    32,    32,     8,     8,    11,    11,    11,
      11,    11,    32,    34,    10,    10,   143,    10,    11,    34,
      34,   144,    34,    11,    11,   142,    11,   138
  };

  const unsigned char
   AdoParser ::yyr1_[] =
  {
       0,    80,    81,    81,    81,    81,    82,    82,    82,    82,
      82,    83,    83,    83,    83,    83,    83,    83,    84,    84,
      84,    84,    85,    85,    86,    87,    88,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    90,    90,    91,    91,    91,    92,
      92,    92,    93,    93,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    95,    95,    96,    96,    97,
      97,    98,    98,    99,    99,   100,   101,   101,   102,   102,
     102,   102,   103,   103,   104,   104,   104,   105,   105,   106,
     106,   106,   107,   107,   108,   108,   109,   109,   110,   110,
     111,   111,   111,   111,   111,   111,   112,   113,   113,   113,
     114,   114,   114,   114,   115,   116,   116,   117,   117,   118,
     118,   118,   118,   119,   119,   120,   120,   121,   121,   122,
     122,   122,   123,   123,   123,   123,   123,   123,   123,   124,
     124,   124,   124,   125,   125,   126,   126,   127,   127,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   132,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   142,   142,   143,   143,   144,   144,   144,   145,   145,
     145
  };

  const unsigned char
   AdoParser ::yyr2_[] =
  {
       0,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     7,     7,     8,     8,     8,     8,     8,    11,     9,
      10,    10,     1,     1,     3,     3,     1,     1,     2,     2,
       1,     1,     2,     5,     5,     4,     3,     4,     3,     4,
       5,     5,     6,     6,     1,     1,     1,     1,     1,     3,
       3,     2,     1,     2,     7,     6,     5,     3,    12,     3,
       6,     6,     3,     7,     5,     1,     2,     1,     1,     1,
       2,     1,     3,     1,     2,     4,     1,     2,     1,     5,
       7,     5,     1,     2,     1,     2,     2,     1,     2,     1,
       1,     3,     1,     2,     1,     3,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     2,     1,     2,     1,     3,     1,     4,     3,
       4,     1,     3,     1,     2,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     2,     1,
       3,     0,     2,     1,     2,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     0,     2,     0,     4,     2,     0,     2,
       2
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const  AdoParser ::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "RELATIONAL", "EXPONENT",
  "NEWLINE", "\";\"", "\"(\"", "\")\"", "\",\"", "\"{\"", "\"}\"", "\"[\"",
  "\"]\"", "\":\"", "\"=\"", "\"+\"", "\"<\"", "\">\"", "\"!\"", "\"*\"",
  "\"/\"", "\"-\"", "\"^\"", "\">=\"", "\"<=\"", "\"==\"", "\"!=\"",
  "\"|\"", "\"&\"", "\"##\"", "\"#\"", "NUMBER", "IDENT", "STRING_LITERAL",
  "DATE", "DATETIME", "\".\"", "BYTE", "INT", "LONG", "FLOAT", "DOUBLE",
  "STRING_TYPE_SPEC", "STRING_FORMAT", "DATETIME_FORMAT", "NUMBER_FORMAT",
  "EMBEDDED_CODE", "BY", "XI", "BYSORT", "QUIETLY", "CAPTURE", "NOISILY",
  "MERGE", "COLLAPSE", "IVREGRESS", "RECODE", "GSORT", "LRTEST", "ANOVA",
  "TSLS", "USING", "IF", "IN", "WEIGHT_SPEC", "MERGE_SPEC",
  "CONT_OPERATOR", "IND_OPERATOR", "BASE_OPERATOR", "OMIT_OPERATOR",
  "FOREACH", "FORVALUES", "LOCAL", "GLOBAL", "VARLIST", "NEWLIST",
  "NUMLIST", "TO", "OF", "$accept", "translation_unit",
  "external_statement", "foreach_cmd", "forvalues_cmd", "foreach_sep",
  "if_cmd", "compound_cmd", "cmds", "cmd", "cmd_sep", "modifier_cmd",
  "long_modifier_cmd", "modifier_cmd_list", "nonmodifier_cmd", "varlist",
  "number_or_missing", "numlist", "collapse_spec_base",
  "collapse_spec_base_list", "collapse_spec", "collapse_list",
  "recode_rule", "recode_rule_list", "gsort_var", "gsort_varlist",
  "modelspec", "modelspec_list", "anova_nest_expression",
  "anova_error_expression", "anova_term_list", "type_operator",
  "assignment_operator", "unary_operator", "unary_factor_operator",
  "power_operator", "multiplication_operator", "additive_operator",
  "relational_operator", "equality_operator", "logical_operator",
  "cross_operator", "format_spec", "literal_expression",
  "primary_expression", "unary_factor_expression", "cross_expression",
  "postfix_expression", "power_expression", "unary_expression",
  "multiplication_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_expression",
  "expression", "expression_list", "argument_expression_list",
  "option_list", "options", "option", "option_ident", "weight_clause",
  "if_clause", "in_clause", "using_clause", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
   AdoParser ::yyrline_[] =
  {
       0,   174,   174,   187,   206,   215,   227,   228,   229,   230,
     231,   245,   253,   261,   269,   277,   285,   293,   304,   315,
     328,   339,   353,   354,   358,   369,   376,   384,   388,   394,
     403,   404,   406,   412,   421,   430,   441,   449,   457,   465,
     473,   482,   491,   501,   514,   520,   529,   536,   543,   553,
     565,   577,   590,   596,   604,   627,   654,   682,   694,   736,
     748,   791,   812,   824,   846,   868,   874,   882,   883,   887,
     893,   902,   903,   931,   937,   945,   968,   974,   983,   984,
    1004,  1027,  1050,  1056,  1065,  1077,  1091,  1108,  1114,  1123,
    1124,  1125,  1143,  1149,  1158,  1159,  1173,  1174,  1187,  1193,
    1209,  1210,  1211,  1212,  1213,  1214,  1218,  1222,  1223,  1224,
    1228,  1229,  1230,  1231,  1235,  1239,  1240,  1244,  1245,  1249,
    1250,  1251,  1252,  1256,  1257,  1261,  1262,  1266,  1267,  1271,
    1272,  1273,  1277,  1278,  1279,  1280,  1281,  1282,  1283,  1287,
    1291,  1295,  1303,  1317,  1318,  1327,  1328,  1339,  1340,  1349,
    1357,  1369,  1370,  1381,  1382,  1392,  1393,  1404,  1405,  1416,
    1417,  1428,  1429,  1440,  1441,  1452,  1453,  1464,  1470,  1478,
    1484,  1499,  1503,  1510,  1516,  1524,  1531,  1544,  1545,  1546,
    1547,  1548,  1549,  1550,  1551,  1552,  1553,  1554,  1555,  1556,
    1557,  1567,  1571,  1585,  1589,  1605,  1609,  1619,  1635,  1639,
    1646
  };

  // Print the state stack on the debug stream.
  void
   AdoParser ::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
   AdoParser ::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  // Symbol number corresponding to token number t.
  inline
   AdoParser ::token_number_type
   AdoParser ::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
     0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79
    };
    const unsigned int user_token_number_max_ = 334;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }


} // yy
#line 3871 "ado.tab.cpp" // lalr1.cc:1167
#line 1655 "ado.ypp" // lalr1.cc:1168


