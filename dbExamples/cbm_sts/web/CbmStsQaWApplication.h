#ifndef CBMSTSQAWAPPLICATION_H
#define CBMSTSQAWAPPLICATION_H

#include "FairDbWtApplication.h"


class CbmStsQaWApplication : public FairDbWtApplication
{

public:
CbmStsQaWApplication(const WEnvironment& env);  

virtual  ~CbmStsQaWApplication();

virtual void initialise();


};

#endif