#ifndef __MAIN_H__
#define __MAIN_H__


#include "merge.decl.h"


class Main : public CBase_Main {

 private:
  /// Member Variables (Object State) ///
  void (Main::*postDisplayFunc)(void);
  CProxy_Merge mergeArray;
  float inicio,fin;
  int *values;
  int value,cantCheck;

  /// Private Member Functions ///
  void startNextPhase();

 public:
  /// Constructors ///
  Main(CkArgMsg* msg);
  Main(CkMigrateMessage* msg);

  /// Entry Methods ///
  void terminar(int []);
  void barrier();
  // void enviarCb(CkCallbackResumeThread &);
};


#endif //__MAIN_H__
