
// Generated from calc_p.g4 by ANTLR 4.13.2


#include "calc_pVisitor.h"

#include "calc_pParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct Calc_pParserStaticData final {
  Calc_pParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Calc_pParserStaticData(const Calc_pParserStaticData&) = delete;
  Calc_pParserStaticData(Calc_pParserStaticData&&) = delete;
  Calc_pParserStaticData& operator=(const Calc_pParserStaticData&) = delete;
  Calc_pParserStaticData& operator=(Calc_pParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calc_pParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<Calc_pParserStaticData> calc_pParserStaticData = nullptr;

void calc_pParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (calc_pParserStaticData != nullptr) {
    return;
  }
#else
  assert(calc_pParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Calc_pParserStaticData>(
    std::vector<std::string>{
      "prog", "monom"
    },
    std::vector<std::string>{
      "", "'^'", "", "", "';'", "", "", "'x'", "'y'", "'z'"
    },
    std::vector<std::string>{
      "", "", "INT", "DOUBLE", "SEP", "NEWLINE", "WS", "X", "Y", "Z"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,9,26,2,0,7,0,2,1,7,1,1,0,4,0,6,8,0,11,0,12,0,7,1,1,1,1,1,1,1,1,3,
  	1,14,8,1,1,1,1,1,1,1,3,1,19,8,1,1,1,1,1,1,1,3,1,24,8,1,1,1,0,0,2,0,2,
  	0,0,27,0,5,1,0,0,0,2,9,1,0,0,0,4,6,3,2,1,0,5,4,1,0,0,0,6,7,1,0,0,0,7,
  	5,1,0,0,0,7,8,1,0,0,0,8,1,1,0,0,0,9,13,5,3,0,0,10,11,5,7,0,0,11,12,5,
  	1,0,0,12,14,5,2,0,0,13,10,1,0,0,0,13,14,1,0,0,0,14,18,1,0,0,0,15,16,5,
  	8,0,0,16,17,5,1,0,0,17,19,5,2,0,0,18,15,1,0,0,0,18,19,1,0,0,0,19,23,1,
  	0,0,0,20,21,5,9,0,0,21,22,5,1,0,0,22,24,5,2,0,0,23,20,1,0,0,0,23,24,1,
  	0,0,0,24,3,1,0,0,0,4,7,13,18,23
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calc_pParserStaticData = std::move(staticData);
}

}

calc_pParser::calc_pParser(TokenStream *input) : calc_pParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

calc_pParser::calc_pParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  calc_pParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *calc_pParserStaticData->atn, calc_pParserStaticData->decisionToDFA, calc_pParserStaticData->sharedContextCache, options);
}

calc_pParser::~calc_pParser() {
  delete _interpreter;
}

const atn::ATN& calc_pParser::getATN() const {
  return *calc_pParserStaticData->atn;
}

std::string calc_pParser::getGrammarFileName() const {
  return "calc_p.g4";
}

const std::vector<std::string>& calc_pParser::getRuleNames() const {
  return calc_pParserStaticData->ruleNames;
}

const dfa::Vocabulary& calc_pParser::getVocabulary() const {
  return calc_pParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView calc_pParser::getSerializedATN() const {
  return calc_pParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

calc_pParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calc_pParser::ProgContext::getRuleIndex() const {
  return calc_pParser::RuleProg;
}

void calc_pParser::ProgContext::copyFrom(ProgContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Prog_lineContext ------------------------------------------------------------------

std::vector<calc_pParser::MonomContext *> calc_pParser::Prog_lineContext::monom() {
  return getRuleContexts<calc_pParser::MonomContext>();
}

calc_pParser::MonomContext* calc_pParser::Prog_lineContext::monom(size_t i) {
  return getRuleContext<calc_pParser::MonomContext>(i);
}

calc_pParser::Prog_lineContext::Prog_lineContext(ProgContext *ctx) { copyFrom(ctx); }


std::any calc_pParser::Prog_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calc_pVisitor*>(visitor))
    return parserVisitor->visitProg_line(this);
  else
    return visitor->visitChildren(this);
}
calc_pParser::ProgContext* calc_pParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, calc_pParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<calc_pParser::Prog_lineContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(5); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(4);
      monom();
      setState(7); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == calc_pParser::DOUBLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MonomContext ------------------------------------------------------------------

calc_pParser::MonomContext::MonomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calc_pParser::MonomContext::getRuleIndex() const {
  return calc_pParser::RuleMonom;
}

void calc_pParser::MonomContext::copyFrom(MonomContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Monom_lineContext ------------------------------------------------------------------

tree::TerminalNode* calc_pParser::Monom_lineContext::DOUBLE() {
  return getToken(calc_pParser::DOUBLE, 0);
}

tree::TerminalNode* calc_pParser::Monom_lineContext::X() {
  return getToken(calc_pParser::X, 0);
}

std::vector<tree::TerminalNode *> calc_pParser::Monom_lineContext::INT() {
  return getTokens(calc_pParser::INT);
}

tree::TerminalNode* calc_pParser::Monom_lineContext::INT(size_t i) {
  return getToken(calc_pParser::INT, i);
}

tree::TerminalNode* calc_pParser::Monom_lineContext::Y() {
  return getToken(calc_pParser::Y, 0);
}

tree::TerminalNode* calc_pParser::Monom_lineContext::Z() {
  return getToken(calc_pParser::Z, 0);
}

calc_pParser::Monom_lineContext::Monom_lineContext(MonomContext *ctx) { copyFrom(ctx); }


std::any calc_pParser::Monom_lineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calc_pVisitor*>(visitor))
    return parserVisitor->visitMonom_line(this);
  else
    return visitor->visitChildren(this);
}
calc_pParser::MonomContext* calc_pParser::monom() {
  MonomContext *_localctx = _tracker.createInstance<MonomContext>(_ctx, getState());
  enterRule(_localctx, 2, calc_pParser::RuleMonom);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<calc_pParser::Monom_lineContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(9);
    match(calc_pParser::DOUBLE);
    setState(13);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == calc_pParser::X) {
      setState(10);
      match(calc_pParser::X);
      setState(11);
      match(calc_pParser::T__0);
      setState(12);
      match(calc_pParser::INT);
    }
    setState(18);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == calc_pParser::Y) {
      setState(15);
      match(calc_pParser::Y);
      setState(16);
      match(calc_pParser::T__0);
      setState(17);
      match(calc_pParser::INT);
    }
    setState(23);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == calc_pParser::Z) {
      setState(20);
      match(calc_pParser::Z);
      setState(21);
      match(calc_pParser::T__0);
      setState(22);
      match(calc_pParser::INT);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void calc_pParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  calc_pParserInitialize();
#else
  ::antlr4::internal::call_once(calc_pParserOnceFlag, calc_pParserInitialize);
#endif
}
