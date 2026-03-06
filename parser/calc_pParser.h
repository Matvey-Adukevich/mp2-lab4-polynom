
// Generated from calc_p.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  calc_pParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, INT = 2, DOUBLE = 3, SEP = 4, NEWLINE = 5, WS = 6, X = 7, 
    Y = 8, Z = 9
  };

  enum {
    RuleProg = 0, RuleMonom = 1
  };

  explicit calc_pParser(antlr4::TokenStream *input);

  calc_pParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~calc_pParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class MonomContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProgContext() = default;
    void copyFrom(ProgContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Prog_lineContext : public ProgContext {
  public:
    Prog_lineContext(ProgContext *ctx);

    std::vector<MonomContext *> monom();
    MonomContext* monom(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProgContext* prog();

  class  MonomContext : public antlr4::ParserRuleContext {
  public:
    MonomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    MonomContext() = default;
    void copyFrom(MonomContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Monom_lineContext : public MonomContext {
  public:
    Monom_lineContext(MonomContext *ctx);

    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *X();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    antlr4::tree::TerminalNode *Y();
    antlr4::tree::TerminalNode *Z();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  MonomContext* monom();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

