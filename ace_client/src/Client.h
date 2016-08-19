

#include "ace/Acceptor.h"
#include "ace/SOCK_Stream.h"
#include "ace/SOCK_Acceptor.h"


class serverHandler;

typedef ACE_Acceptor<serverHandler, ACE_SOCK_ACCEPTOR> ServerAcceptor;

typedef ACE_Svc_Handler<ACE_SOCK_STREAM, ACE_NULL_SYNCH> super;

class serverHandler : public super
{
public:
	int open(void *);
	virtual int handle_output(ACE_HANDLE fd = ACE_INVALID_HANDLE);
};