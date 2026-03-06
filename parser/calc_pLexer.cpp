
// Generated from calc_p.g4 by ANTLR 4.13.2


#include "calc_pLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct Calc_pLexerStaticData final {
  Calc_pLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Calc_pLexerStaticData(const Calc_pLexerStaticData&) = delete;
  Calc_pLexerStaticData(Calc_pLexerStaticData&&) = delete;
  Calc_pLexerStaticData& operator=(const Calc_pLexerStaticData&) = delete;
  Calc_pLexerStaticData& operator=(Calc_pLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calc_plexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<Calc_pLexerStaticData> calc_plexerLexerStaticData = nullptr;

void calc_plexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (calc_plexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(calc_plexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Calc_pLexerStaticData>(
    std::vector<std::string>{
      "T__0", "INT", "DOUBLE", "SEP", "NEWLINE", "WS", "X", "Y", "Z"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'^'", "", "", "';'", "", "", "'x'", "'y'", "'z'"
    },
    std::vector<std::string>{
      "", "", "INT", "DOUBLE", "SEP", "NEWLINE", "WS", "X", "Y", "Z"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,9,65,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,
  	2,7,7,7,2,8,7,8,1,0,1,0,1,1,3,1,23,8,1,1,1,4,1,26,8,1,11,1,12,1,27,1,
  	2,3,2,31,8,2,1,2,4,2,34,8,2,11,2,12,2,35,1,2,1,2,4,2,40,8,2,11,2,12,2,
  	41,1,3,1,3,1,4,3,4,47,8,4,1,4,1,4,1,4,1,4,1,5,4,5,54,8,5,11,5,12,5,55,
  	1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,0,0,9,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,
  	8,17,9,1,0,3,2,0,43,43,45,45,1,0,48,57,2,0,9,9,32,32,71,0,1,1,0,0,0,0,
  	3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,
  	0,0,15,1,0,0,0,0,17,1,0,0,0,1,19,1,0,0,0,3,22,1,0,0,0,5,30,1,0,0,0,7,
  	43,1,0,0,0,9,46,1,0,0,0,11,53,1,0,0,0,13,59,1,0,0,0,15,61,1,0,0,0,17,
  	63,1,0,0,0,19,20,5,94,0,0,20,2,1,0,0,0,21,23,7,0,0,0,22,21,1,0,0,0,22,
  	23,1,0,0,0,23,25,1,0,0,0,24,26,7,1,0,0,25,24,1,0,0,0,26,27,1,0,0,0,27,
  	25,1,0,0,0,27,28,1,0,0,0,28,4,1,0,0,0,29,31,7,0,0,0,30,29,1,0,0,0,30,
  	31,1,0,0,0,31,33,1,0,0,0,32,34,7,1,0,0,33,32,1,0,0,0,34,35,1,0,0,0,35,
  	33,1,0,0,0,35,36,1,0,0,0,36,37,1,0,0,0,37,39,5,46,0,0,38,40,7,1,0,0,39,
  	38,1,0,0,0,40,41,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,6,1,0,0,0,43,
  	44,5,59,0,0,44,8,1,0,0,0,45,47,5,13,0,0,46,45,1,0,0,0,46,47,1,0,0,0,47,
  	48,1,0,0,0,48,49,5,10,0,0,49,50,1,0,0,0,50,51,6,4,0,0,51,10,1,0,0,0,52,
  	54,7,2,0,0,53,52,1,0,0,0,54,55,1,0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,
  	57,1,0,0,0,57,58,6,5,0,0,58,12,1,0,0,0,59,60,5,120,0,0,60,14,1,0,0,0,
  	61,62,5,121,0,0,62,16,1,0,0,0,63,64,5,122,0,0,64,18,1,0,0,0,8,0,22,27,
  	30,35,41,46,55,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calc_plexerLexerStaticData = std::move(staticData);
}

}

calc_pLexer::calc_pLexer(CharStream *input) : Lexer(input) {
  calc_pLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *calc_plexerLexerStaticData->atn, calc_plexerLexerStaticData->decisionToDFA, calc_plexerLexerStaticData->sharedContextCache);
}

calc_pLexer::~calc_pLexer() {
  delete _interpreter;
}

std::string calc_pLexer::getGrammarFileName() const {
  return "calc_p.g4";
}

const std::vector<std::string>& calc_pLexer::getRuleNames() const {
  return calc_plexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& calc_pLexer::getChannelNames() const {
  return calc_plexerLexerStaticData->channelNames;
}

const std::vector<std::string>& calc_pLexer::getModeNames() const {
  return calc_plexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& calc_pLexer::getVocabulary() const {
  return calc_plexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView calc_pLexer::getSerializedATN() const {
  return calc_plexerLexerStaticData->serializedATN;
}

const atn::ATN& calc_pLexer::getATN() const {
  return *calc_plexerLexerStaticData->atn;
}




void calc_pLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  calc_plexerLexerInitialize();
#else
  ::antlr4::internal::call_once(calc_plexerLexerOnceFlag, calc_plexerLexerInitialize);
#endif
}
