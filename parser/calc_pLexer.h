
// Generated from calc_p.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  calc_pLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, INT = 2, DOUBLE = 3, SEP = 4, NEWLINE = 5, WS = 6, X = 7, 
    Y = 8, Z = 9
  };

  explicit calc_pLexer(antlr4::CharStream *input);

  ~calc_pLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

